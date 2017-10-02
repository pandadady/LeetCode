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
| :------ | :------- | 
|back()|返回队列的最后一个元素|
|empty()|为空返回true，不为空返回fasle|
|front()|返回队列的第一个元素|
|pop()|删除队列第一个元素|
|push()|在队尾插入元素|
|queue()|创建空队列|
|size()|返回队列元素个数|

> ## 优先队列标准库

|成员函数| 行为返回值|
| :------ | :------- | 
|empty()|为空返回true，不为空返回fasle|
|pop()|删除队列中优先级最高的元素|
|push(T& el)|将元素el插入到优先队列中的合适位置|
|priority_queue(comp f())|创建空优先队列，f用于排序|
|size()|优先队列元素个数|
|top()|返回队列中优先级最高的元素|
> ## 优先队列实例

```c++
#include<iostream>
#include<queue>
#include<funcational>

using namespace std;

void main(){
    priority_queue<int> pq1 ;// 省略 vector<int> less<int>
    priority_queue<int,vector<int>, greater<int>> pq2 ;
    pq1.push(3); pq1.push(1); pq1.push(2);
    pq2.push(3); pq2.push(1); pq2.push(2);
    int a[] = {4,6,5};
    priority_queue<int> pq3(a,a+3);
    while(!pq1.empty()){
        cout<<pq1.top()<<' ';// 3 2 1 
        pq1.pop();
    }
    while(!pq2.empty()){
        cout<<pq2.top()<<' ';// 1 2 3  
        pq2.pop();
    }
    while(!pq3.empty()){
        cout<<pq3.top()<<' ';// 4 5 6  
        pq3.pop();
    }
    return 0;
    
}

```
