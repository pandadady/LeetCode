# 排序
> ## 基本排序算法
>> ### 插入排序
>> ### 选择排序
>> ### 冒泡排序
> ## 高级排序算法
>> ### 快速排序
时间复杂度：nlogn<br>
方法：把比基准小的数据放在基准左边，把比基准大的数据放在基准右边，然后把数组分成2个子数组，重新执行这个过程。<br>
```c++
template<class T>
void quicksort(T d[], int first, int last){
    int lower = first + 1;
    int upper = last;
    swap(d[first],  d[(lower+upper)/2]);
    int bound = d[first],;
    while(lower<=upper){
        while(d[lower<d[bound]){
            lower++;
        }
        while(d[upper]>d[bound]){
            upper--;
        }
        if (lower<=upper){
            swap(d[lower--],d[upper++]);
        }
        else{
            lower++;
        }
    }
    swap(d[first], d[upper]);
    if (first < upper - 1){
        quicksort(d, first, upper-1);
    }
    if (upper+1 < last){
        quicksort(d, upper+1, last);
    }
}
```
>> ### 归并排序
时间复杂度：nlogn<br>
方法：把2个比较短的数组合并是容易实现的，此方法把数组不断分裂，再合并子数组<br>
```c++
template<class T>
void mergearray(T a[], int first, int mid, int last, T temp[])  
{  
    int i = first, j = mid + 1;  
    int m = mid,   n = last;  
    int k = 0;  
      
    while (i <= m && j <= n)  
    {  
        if (a[i] <= a[j])  
            temp[k++] = a[i++];  
        else  
            temp[k++] = a[j++];  
    }  
      
    while (i <= m)  
        temp[k++] = a[i++];  
      
    while (j <= n)  
        temp[k++] = a[j++];  
      
    for (i = 0; i < k; i++)  
        a[first + i] = temp[i];  
}  
void mergesort(int a[], int first, int last, int temp[])  
{  
    if (first < last)  
    {  
        int mid = (first + last) / 2;  
        mergesort(a, first, mid, temp);    //左边有序  
        mergesort(a, mid + 1, last, temp); //右边有序  
        mergearray(a, first, mid, last, temp); //再将二个有序数列合并  
    }  
}  
```
