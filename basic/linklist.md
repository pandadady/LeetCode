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
|  :------ |  :-------    |   
|list()|创建空链表|
|list(size_type n, const T& el=T())|创建一个链表，赋值n个el，类型为T|
|list(iterator first, iterator last)|创建一个链表，赋值first到last的元素|
|list(const list<T>& lst)|复制构造函数|
|size_type max_size()|返回最大节点数|
|size_type size()|返回节点数|
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
|void merge(list<T>& lst)|对于有序链表和lst，从lst中删除全部节点，并将其有序的插入到当前链表|
|void merge(list<T>& lst, Comp pf)|对于有序链表和lst，从lst中删除全部节点，并以函数f指定的顺序将其插入当前链表，其中函数f有2个参数|
|void pop_back()|删除链表的最后一个节点|
|void pop_front()|删除链表的第一个节点|
|void push_back(const T& el)|在链表尾插入el|
|void push_front(const T& el)|在链头插入el|
|void remove(const T& el)|删除链表中包含el的全部节点|
|void remove_if(Pred f)|删除使boolean函数返回true的节点，f具有1个参数|
|void resize(size_type n, const T& el=T())|添加n-size()个包含el的元素，或者从链表中删除多余size()-n个节点，使得链表包含n个节点|
|void reserve()|反转链表|
|void sort()|升序排列链表|
|void sort(Comp f)|按照boolean函数f指定的顺序对链表的元素进行排序|
|void splice(iterator i, list<T>& lst)|删除链表lst的节点，并将插入到迭代器i之前的位置|
|void splice(iterator i, list<T>& lst, iterator j)|从链表lst中删除迭代器j所引用的节点，并将其插入到迭代器i之前的位置|
|void splice(iterator i, list<T>& lst, iterator first, iterator last())|从链表中删除f到l之前的节点，并将其插入到迭代器i之前的位置|
|void swap(list<T>& lst)|将链表内容与另一个链表lst内容互换|
|void unique()|从有序链表中删除重复元素|
|void unique(Comp f)|从有序链表中删除boolean函数f指定的重复元素，f有2个参数|
