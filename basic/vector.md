# 向量
> ## 标准模板库
|成员函数| 行为返回值|
|  :------ |  :-------    | 
|vector<ELem> c|创建空向量|
|vector<ELem> c1(c2)|复制向量|
|vector<ELem> c(n)|创建一个含有n个数据的向量，数据值为Elem类型的缺省值|
|vector<ELem> c(n,elem)|创建一个含有n个数据的向量，数据值为Elem类型的elem|
|vector<ELem> c(beg,end)|创建一个以[begin:end)区间的向量|
|assgin(beg, end)|[begin:end)复制给向量|
|assgin(n, elem)|将n个elem拷贝给向量|
|at(idx)|返回idx索引所只想的数据|
|back()|返回向量最后一个数据的引用，不检查数据是否存在|
|front()|返回第一个数据|
|begin()|返回第一个迭代器|
|end()|返回最后一个迭代器|
|clear()|清空向量|
|empty()|判断向量是否为空|
|erase(idx)|按索引删除数据，返回下一个数据|
|erase(beg， end)|删除[beg, end)之间的数据，返回下一个数据|
|get_allocator|使用构造函数返回一个拷贝|
|insert(idx, elem)|在idx位置插入一个elem的拷贝，返回新数据的位置|
|insert(idx,n,elem)|在idx位置插入n个数据，无返回值|
|insert(idx,beg,end)|在idx位置插入[beg, end)之间的数据，无返回值|
|max_size()|返回向量能保存的最大数据数量|
|capacity()|返回向量中能保存的数据个数|
|size()|返回向量中实际数据个数|
|reserve()|保留适当容量|
|pop_back()|删除最后一个数据|
|push_back()|在尾部添加一个数据|
|v1.swap(v2)|v1, v2元素互换|
|swap(v1,v2)|v1, v2元素互换|
