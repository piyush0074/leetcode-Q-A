/*
Given an array (or string), the task is to reverse the array/string.

* i/p : [1,2,3,4]
* o/p: [4,3,2,1]

*/


#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

void reverse(vector<int> &arr, int n){
	if(n == 1) return ;
	int start=0,end=n-1;
	while(start<end){
		int tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;
		start++;
		end--;
	}

}

int main() {
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		arr.push_back(tmp);
	}
	reverse(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

