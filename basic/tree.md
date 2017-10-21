# 二叉树
> ## 二叉查找树特点
对于每个节点：
左子树节点的值小于根节点的值
右子树节点的值大于根节点的值
> ## 二叉查找树实现
```c++
//genBST.h
//generic binary search tre

#include <queue>
#include <stack>

using namespace std;

template<class T>
class Queue:public queue<T>{
public:
   T dequeue() {
       T tmp = front();
       queue<T>::pop();
       return tmp;
   }
   void enqueue(const T& el){
       push(el);
   }
};

template<class T>
class BSTNode {
public:
    BSTNode(){
        left = right = 0;
    }
    BSTNode(const T& e, BSTNode<T> *l = 0, BSTNode<T> *r = 0;){
        el = e;
        left = l;
        right = r;
    }
    T el;
    BSTNode<T> *left, *right;
};

template<class T>
class BST {
protected:
    BSTNode<T> *root;
    void clear(BSTNode<T> *root);
    T* search(BSTNode<T> *root, &T el);
    void perorder(BSTNode<T> *root);
    void inorder(BSTNode<T> *root);
    void postorder(BSTNode<T> *root);
    virtual void visit(BSTNode<T> *p){
        cout<< p->el<<' ';
    }
public:
    BST(){
        root = 0;
    }
    ~BST(){
        clear();
    }
    void clear(){
        clear(root);
        root = 0;
    }
    bool isEmpty(){
        return root == 0;
    }
    void perorder(){
        perorder(root);
    }
    void inorder(){
        inorder(root);
    }
    void postorder(){
        postorder(root);
    }
    T* search(const T& el){
        return search(root, el);
    }
    void breadthFirst();
    void iterativePerorder();
    void iterativeInorder();
    void iterativePostorder();
    void morrisInorder();
    void insert(const &T el);
    void deletebyMerging(BSTNode<T> *root);
    void findandDeletebyMerging(const T& el);
    void deleteByCopying(BSTNode<T> *root);
    void balance(T* root,int a, int b);
};
```
>> ### 1.二叉查找树的查找
根据二叉查找树性质，目标比根值大则往右边查，目标比根植小则往左边查
```c++
template<class T>
T* BST<T>::search(BSTNode<T> *p, T& el){
    while(!p){
        if (p->el == el){
            return &p->el;
        }
        else if(p->el < el){
            p = p->right ;
        }
        else if(p->el < el){
            p = p->left;
        }
    }
    return 0;
}
```

>> ### 2.广度优先遍历（层次遍历）
遍历的过程是把树形结构线性化的过程。<br>
广度优先遍历按照从上到下的顺序一层一层进行输出<br>
利用队列存放节根节点，从根节点开始循环，先从队列中取出节点并输出节点的值，然后把左右子节点加入到队列<br>
![][1]<br>
输出的顺序为：ABCDEFGHI
```c++
template<class T>
void BST<T>::breadthFirst(){
    Queue<BSTNode<T>*> q;
    BSTNode<T> *p = root;
    if (!p){
        q.enqueue(p);
        while(q.empty()){
            BSTNode<T> *p = q.dequeue();
            visit(p);
            if (p->left != 0){
                q.enqueue(p->left);
            }
            if (p->right != 0){
                q.enqueue(p->right);
            }
        }
    }
}
```
>> ### 3.深度优先遍历（前序、中序、后序）
通过递归写法，可以理解非递归写法的思路。遍历一颗树一般是从root节点开始，前后中序遍历方法访问节点的顺序实际上是一样的，区别在于输出。
>>> #### 3.1前序遍历
前序遍历：根左右。<br>
思路：从root节点开始，第一次访问到根节点的时候，立刻输出，然后需要先输出左子树，再输出右子树。<br>
过程：先把根节点入栈，然后循环开始，在循环里，弹出节点，然后输出，然后先把右节点入栈，再把左节点入栈。然后循环直到栈空。<br>
```c++
template<class T>
void BST<T>::iterativePerorder(){
    Stack<BSTNode<T>*> travStack;
    BSTNode<T> *p = root;
    if (p != 0){
        travStack.push(p);
        while(!travStack.empty()){
            p = travStack.pop();
            visit(p);
            if (p->right !=0){
                travStack.push(p->right);
            }
            if (p->left !=0){
                travStack.push(p->left);
            }
        }
    }
}
```
>>> #### 3.2后序遍历
后序遍历：左右根。
思路：从root节点开始，遍历所有左节点，把这些节点都入栈，，直到一个没有左节点的节点，<br>
循环判断这个节点的右节点为空，访问这个节点，然后从栈中弹出一个节点，如果这个节点还是没有右边节点，则再访问这个节点，再出栈新节点<br>
如果这个节点有右节点，那么把当前节点入栈，把当前节点转为右节点，结束一次循环，然后从新开始root节点的类似的过程，直到节点为空
```c++
template<class T>
void BST<T>::iterativePostorder(){
    Stack<BSTNode<T>*> travStack.push(p);;
    BSTNode<T> *p = root;
    if (p != 0){
        while(p != 0){
            for(;p->left!=0;p = p->left){
                travStack.push(p);
            }
            while(p->right == 0){
                visit(p);
                if (!travStack.empty()){
                    p = travStack.pop();
                }
            }
            travStack.push(p);
            p = p->right;
        }
    }
}
```
>>> #### 3.3中序遍历
后序遍历：左根右。<br>
思路：从root节点开始，循环遍历，把左节点入栈，直到遇到一个没有左节点的节点，访问这个节点，<br>
然后判断这个节点有右节点，当前节点换为右节点，重复root开始的类似的循环过程
```c++
template<class T>
void BST<T>::iterativeInorder(){
    Stack<BSTNode<T>*> travStack.push(p);;
    BSTNode<T> *p = root;
    if (p != 0){
        while(p != 0){
            for(;p->left!=0;p = p->left){
                travStack.push(p);
            }
            visit(p);
            p = p->right;
        }
    }
}
```
>> ### 4. 二叉查找树的插入
思路：需要找到一个没有子树的节点，类似查找算法
```c++
template<class T>
void BST<T>::insert(T& el){
    BSTNode<T> *p = root;
    BSTNode<T> *prev = 0;
    while(p != 0){
        prev = p;
        if (el < p->el){
            p = p->right;
        }
        else{
            p = p->left;
        }
    }
    if (root == 0){
        root = new BSTNode<T>(el);
    }
    else if (el < prev->el){
        prev->left = new BSTNode<T>(el);
    }
    else prev->right = new BSTNode<T>(el);

}
```









[1]: ../images/binary_tree.png
