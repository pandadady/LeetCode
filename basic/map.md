# MAP
> ## 概述
Map是STL的一个关联容器，它提供一对一（其中第一个可以称为关键字，每个关键字只能在map中出现一次，第二个可能称为该关键字的值）的数据处理能力，由于这个特性，map内部的实现自建一颗红黑树(一种非严格意义上的平衡二叉树)，这颗树具有对数据自动排序的功能。
> ## 标准库
|成员函数| 行为返回值|
| :------ | :------- |
| begin()|返回指向map头部的迭代器|
| clear()|删除所有元素|
|count() |返回指定元素出现的次数|
|empty() |如果map为空则返回true|
|end() |返回指向map末尾的迭代器|
|equal_range() |返回特殊条目的迭代器对|
|erase() |删除一个元素|
|find() |查找一个元素|
|get_allocator() |返回map的配置器|
|insert() |插入元素|
|key_comp() |返回比较元素key的函数|
|lower_bound() |返回键值>=给定元素的第一个位置|
|max_size() |返回可以容纳的最大元素个数|
|rbegin() |返回一个指向map尾部的逆向迭代器|
|rend() |返回一个指向map头部的逆向迭代器|
|size() |返回map中元素的个数|
|swap() |交换两个map|
|upper_bound() |返回键值>给定元素的第一个位置|
|value_comp() |返回比较元素value的函数|
