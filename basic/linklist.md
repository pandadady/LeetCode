# 链表
> ## 单向链表
>> ### 定义
```c++
// 节点定义
class: IntSLLNode{
    public:
        IntSLLNode(){
            next = 0;
        }
        IntSLLNode(int i, IntSLLNode *in=0){
            info = i;
            next = in;
        }
    private:
        IntSLLNode *next;
        int info;
};
//链表定义
class IntSLList {
    public:
        IntSLList(){
            head = tail = 0;
        }
        ~IntSLList();
        void addtoTail(int);
        void addtoHead(int);
        void deleteNode(int);
        boll IsInList(int);
    private:
       IntSLLNode *head;
       IntSLLNode *tail;
};
```
>> ## 实现
```c++
```
