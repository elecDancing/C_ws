/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-21 23:10:28
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-22 10:56:38
 */
#include<iostream>
#include<vector>
using namespace std;
//!归并排序的核心思想其实还是利用递归分治的思想,重点在于区分快速排序:

// 快速排序是先排序后递归;归并排序是先递归后排序
// 二者在排序的时候类似,都是基于双指针, 但是快速排序是利用swap, 归并排序是利用了一个temp容器
// 归并排序需要注意点两个点主要有: 每一次递归完要把temp里排好的数据更新到原容器中; 不要忘了把剩余部分append到temp的尾部
// 快速排序是用中间点的值作为分段点; 归并排序是用中间点的位置作为分段点
vector<int> temp;

/* void merge_sort(vector<int>& nums, int l, int r){
        //0.递归的终止条件
        if(l>=r) return;
        //1.以中间位置分区间
        int mid = (l+r)/2;
        //2.开始递归
        merge_sort(nums,l,mid), merge_sort(nums,mid+1,r);
        //3. 使用双指针开始归并排序这两段
     //(比较好的理解方式:这两个小区间已经是有序了,接下来只需要合并就可以了)
        int i = l, j = mid+1,k=0;
        while(i<=mid && j<= r){
            if(nums[i]<=nums[j]) temp[k++] = nums[i++];
            else temp[k++] = nums[j++];
        }
        //把某一段的剩余后半部分append到temp尾部
        while(i<=mid) temp[k++] = nums[i++];
        while(j<=r) temp[k++] = nums[j++];
        //4.把临时容器temp中的数据更新到原容器nums中以方便上一层递归进行排序
        int p = l,q=0;
        while(p<=r){
            nums[p++] = temp[q++];
            
        }
    }
 */
void merge_sort(vector<int>& nums, int l, int r){
    if(l >= r)
        return;
    int mid = l + (r - l) / 2;
    merge_sort(nums, l, mid);
    merge_sort(nums, mid + 1, r);
    int i = l, j = mid + 1, k = 0;
    while(i <= mid && j<= r){
        if(nums[i] < nums[j])
            temp[k++] = nums[i++];
        else
            temp[k++] = nums[j++];
    }
    while(i <= mid)
        temp[k++] = nums[i++];
    while(j <= r)
        temp[k++] = nums[j++];

    int p = l,q=0;
    while(p<=r){
        nums[p++] = temp[q++];      
    }
}
int main() {
	vector<int> nums = {-2, 11, -4, 13, -5, -2}; 
	temp.resize(nums.size());           // 注意类似于先进行一个初始化, 否则的话就会引起null pointer
        merge_sort(nums,0,nums.size()-1);
        for (int i = 0; i < nums.size(); ++i)
            cout << nums[i] << " ";
        return 0;
}
