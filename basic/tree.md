# 二叉树
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
