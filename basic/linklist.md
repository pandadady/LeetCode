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
