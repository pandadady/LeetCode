# 栈
> ## 栈的向量实现
```C++
#include <vector>

template<class T, in capacity = 30>
class Stack{
public:
    Stack(){
        pool.reserve(capacity);
    }
    void clear(){
        pool.clear();
    }
    bool isEmpty() const{
        return pool.empty();
     }
    T& topEL(){
        return pool.back();
    }
    T pop(){
        T el = pool.back();
        pool.pop_back();
        return el;
    }
    void push(const T& el){
        poop.push_back(el);
    }
private:
    vector<T> pool;
};
```
> ## 标准库
|成员函数| 行为返回值|
|  :------ |  :-------    | 
| empty()|为空返回true，不为空返回false|
| pop()|删除栈顶元素|
| push(T& el)|将el掺入栈顶|
|size()|返回栈中元素个数|
|stack()|创建一个空栈|
|T& top()|返回栈顶元素|

