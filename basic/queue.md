# 队列
> ## 队列的数组实现
```c++
template<class T, int size = 100>
class ArrayQueue{
    public:
        ArrayQueue(){
            first = last = -1;
        }
        void enqueue(T);
        T dequeue();
        bool isFull(){
            return first ==0 && last == size-1 || first==last+1;
        }
        bool isEmpty(){
            return first == -1
        }
    private:
        int first, last;
        T storage(size);
};
template<class T, int size>
void ArrayQueue<T, size>::enqueue(T el){
    if (isFull){
        if (last==size-1 || last==-1){
            storage[0] = el;
            last = 0;
            if(first == -1){
                first = 0;
            }
        }
        else storage[++last] = el;
    }
    else cout<<"Full queue\n";
}
template<class T, int size>
T ArrayQueue<T, size>::dequeue(){
    T tmp;
    tmp = storage[first];
    if (first == last){
        last = first = -1;
    }
    else if (first == size-1){
        first = 0;
    }
    else ++first;
    return tmp;
}

```
> ## 标准库
|成员函数| 行为返回值|
|  :------ |  :-------    | 
|back()|返回队列的最后一个元素|
|empty()|为空返回true，不为空返回fasle|
|front()|返回队列的第一个元素|
|pop()|删除队列第一个元素|
|push()|在队尾插入元素|
|queue()|创建空队列|
|size()|返回队列元素个数|
