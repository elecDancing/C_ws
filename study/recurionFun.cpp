/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2023-03-15 13:24:33
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2023-03-15 13:46:45
 */
#include<iostream>
#include<vector>
using namespace std;
	vector<int> a;
int num[100005]={0,1,2,3,4,5,6,7,8,9};
int function(int x){
	if(x < 10)
		return x;
	else
		return a[0] * num[x - 1] + a[1] * num[x - 2] 
        + a[2] * num[x - 3]+ a[3] * num[x - 4] 
        + a[4] * num[x - 5] + a[5] * num[x - 6] 
		+ a[6] * num[x - 7] + a[7] * num[x - 8] 
        + a[8] * num[x - 9] + a[9] * num[x - 10];

	}
int main(){
	int k, m;
	cin >> k >> m;
	int temp;
	for(int i = 0; i < 10; ++i){
		cin >> temp;
		a.push_back(temp);
	}
    for (int j = 10; j <= k; j++) {
		num[j] = function(j) % m;
	}
    cout << num[k];
    return 0;
}