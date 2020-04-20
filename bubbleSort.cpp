#include <iostream>
using namespace std;
bool bubbleSort(int *arr,int size){
    if (arr == NULL || size == 0){
        return false;
    }
    // 要遍历的次数
    for (int i = 0; i < size - 1; ++i){
        //交换标志位,用于优化算法
        bool bChanged = false;
        // 从后向前依次的比较相邻两个数的大小
        for (int j = 0; j < size - 1; j++){
            // 如果后面的元素小，则交换它们的位置
            if (arr[j + 1] < arr[j]){
              swap(arr[j + 1],arr[j]);//伪代码
              bChanged = true;
            }
        }
        // 如果标志为false，说明本轮遍历没有交换，
        // 已经是有序数列，可以结束排序
        if (false == bChanged){
            break;
        }
    }
    return true;
}
