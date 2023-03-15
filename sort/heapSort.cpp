/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-30 10:46:12
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-10-08 08:28:08
 */
/*
    使用一维数组表示完全二叉树 （宽度遍历）
    假设当前节点的编号为i
    父亲节点编号为（i-1）/2 取下整
    左右子节点的编号分别为2*i + 1 和 2*i + 2
    1.将无序序列建成堆
    2.输出堆顶元素，用最后一个元素代替堆顶元素
    3.将剩下的n-1个元素调成一个堆
    4.重复执行，直到堆中只剩一个元素

    把数组构造成一个大顶堆，然后把堆顶（最大值）与数组最后一个元素交换，
    这样最大值就在最后，把数组长度n-1 ,再进行构造堆
    找到堆中最大的放在最后，直至排序完成

    1.对于快速排序来说，数据是顺序访问的。而对于堆排序来说，数据是跳着访问的。这样对 CPU 缓存是不友好的

2.相同的的数据，排序过程中，堆排序的数据交换次数要多于快速排序。

所以上面两条也就说明了在实际开发中，堆排序的性能不如快速排序性能好。
    
*/
//todo 复杂度O(nlogn)
#include<iostream>
using namespace std;
//!伪代码
// void heapSort(int R[],int n){
//     int i;
//     for (i = n / 2; i >= 1;--i){//从最后一个非叶子节点开始到
//         heapAdjust(R,i,n)//建立初始堆
//     }
//     for (i = n; i > 1;--i){
//         Swap(R[1], R[i]);//交换根与最后一个元素
//         heapAdjust(R, 1, i - 1);//对R[1]到R[i-1重新建堆
//     }
// }

class Solution {
    public int[] sortArray(int[] nums) {

        int len = nums.length;
        int[] a = new int[len + 1];

        for (int i = 0; i < nums.length; ++i) {
            a[i+1] = nums[i];
        }          
        //下沉建堆
        for (int i = len/2; i >= 1; --i) {
            sink(a,i,len);
        }

        int k = len;
        //排序
        while (k > 1) {
            swap(a[l],a[k--]);
            sink(a,1,k);
        }
        for (int i = 1; i < len+1; ++i) {
            nums[i-1] = a[i];
        }
        return nums;
    }
    public void sink (int[] nums, int k,int end) {
        //下沉
        while (2 * k <= end) {
            int j = 2 * k;
            //找出子节点中最大或最小的那个
            if (j + 1 <= end && nums[j + 1] > nums[j]) {
                j++;
            }
            if (nums[j] > nums[k]) {
                swap(nums[j], nums[k]);
            } else {
                break;
            }
            k = j;
        }
    }

    
}

