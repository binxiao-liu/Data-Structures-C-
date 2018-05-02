#ifndef SORTTESTHELPER_H
#define SORTTESTHELPER_H

#include<iostream>
#include<ctime>
#include<cassert>
using namespace std;

namespace SortTestHelper {
// 生成有n个元素的随机数组,每个元素的随机范围为[rangeL, rangeR]
     int* generateRandomArray(int n,int rangeL,int rangeR){
         assert(rangeL<=rangeR);
         int *arr=new int[n];
         srand(time(NULL));//随机种子的设置
         for(int i =0 ;i<n;i++)
             arr[i]=rand() %(rangeR-rangeL+1)+rangeL;
         return arr;
     }

   // 打印arr数组的所有内容
     template<typename T>
     void printArray(T arr[], int n) {

         for (int i = 0; i < n; i++)
             cout << arr[i] << " ";
         cout << endl;

         return;
 }

}
#endif // SORTTESTHELPER_H