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
void IntSLList::addtoTail(int i){
    if (tail != 0){
        tail->next = new IntSLLNode(i);
        tail = tail->next;
    }
    else{
        head = tail = new IntSLLNode(i);
     }
 }
 void IntSLList::addtoHead(int i){
     head = new IntSLLNode(i, head);
     if (tail == 0){
         tail = head;
     }
 }
 //需要考虑如下情况
 //1.空链表中删除节点，直接退出
 //2.只有一个节点就是要删除节点，头节点和尾节点赋空
 //3.要删除节点是头节点
 //4.要删除节点是尾节点
 //5.要删除节点不在链表中
 void IntSLList::deleteNode(int i){
     if (head != 0){
         if (head->info == i && head == tail){
             delete head;
             head = tail = 0;
         }
         else if (head->info == i && head != tail){
             IntSLLNode *tmp = head;
             head = head->next;
             delete tmp;
         }
         else
         {
             IntSLLNode *p = head;
             IntSLLNode *tmp = head->next;
             for (;tmp != 0; tmp = tmp->next, p = p->next){
                 if (tmp->info == i)break;
             }
             if (tmp != 0){
                 p->next = tmp->next;
                 if (tmp == tail){
                    tail = p;
                 }
                 delete tmp;
             }
         }  
     }
 }
```
> # 标准模板库中的链表
```c++
#include <list>
```

|成员函数|行为返回值|
|  :------ |  :-------    |   
|void assign(iterator first, iterator last)|删除链表中所有节点，并在迭代器first和last范围内插入元素|
|iterator begin()|返回链表中第一个节点的迭代器|
|iterator end()|返回链表中最后一个节点的迭代器|
|void clear()|删除链表全部节点|
|bool empty()|判断链表是否为空|
|iterator erase(iterator i)|删除节点并返回节点之后的节点|
|T& back()|返回链表中最后一个节点中的元素|
|T& front()|返回链表中第一个节点的元素|
|iterator insert(iterator i, const T& el=T())|在迭代器i引用的节点之前插入el，并返回引用新节点的迭代器|
|iterator insert(iterator i, size_type n, const T& el)|在迭代器i引用的节点之前插入el的n个副本|
|void insert(iterator i,iterator f, iterator l)|在迭代器i引用的节点之前插入从f到l的元素|

