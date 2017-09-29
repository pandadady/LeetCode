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
