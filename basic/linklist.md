# 链表
···
class: IntSLLNode{
public:
    IntSLLNode(){
        next = 0
    }
    IntSLLNode(int i, IntSLLNode *in=0){
        info = i;
        next = in;
    }
private:
    IntSLLNode *next;
    int info;
};
···
