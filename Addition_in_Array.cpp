/*
For a non-negative integer X,
  the array-form of X is an array of its digits in    left to right order.

For example, if X = 1231, then the array form is [1,2,3,1].

Given the array-form A of a non-negative integer X, return the array-form of the integer X+K
(X+K)*K

Input: A = [1,2,0,0], K = 34
Output: [1,2,3,4] / 1234
Explanation: 1200 + 34 = 1234

Input: A = [2,7,4], K = 181
Output: [4,5,5]
Explanation: 274 + 181 = 455


*/

#include <vector>
#include <iostream>
using namespace std;

vector<int> addition(vector<int> &arr, int n,int k){
	if(n == 1 && arr[0] <9 ){
		arr[0]++;
	 	return arr;
	 }
	 vector<int> ans;
	int c=0,tmp;
	for(int i=n-1;i>=0;i--){
		tmp = k%10;
		k/=10;
		tmp = tmp+arr[i]+c;
		c = 0;
		if(tmp >= 10){
			c = 1;
			tmp = tmp%10;
		}
		ans.push_back(tmp);
		tmp = 0;
	}
	int start=0,end=n-1;
	while(start< end){
		int tmp = ans[start];
		ans[start] = ans[end];
		ans[end] = tmp;
		start++;
		end--;
	}
	if(c!=0) ans.insert(ans.begin(),c);
	return ans;
}

int main() {
	int n,k;
	cin>>n;
	cin>>k;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		arr.push_back(tmp);
	}
	vector<int> res = addition(arr,n,k);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
}

