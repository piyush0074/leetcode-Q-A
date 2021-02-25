/*
Given an array of integers, find if the array      contains any duplicates.
Your function should return true if any value appears at least twice in the array,
and it should return false if every element is distinct.
 Example 1:
 Input: [1,2,3,1]  =1
 Output: true

 Example 2:
 Input: [1,2,3,4] = 0
 Output: false

 Example 3:
 Input: [1,1,1,3,3,4,3,2,4,2]= 4
 Output: true


*/


#include <sstream>
#include <vector>
#include <iostream>
#include<unordered_map>
using namespace std;

bool duplicate(vector<int> &arr, int n){
	if(n == 1) return false ;
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
	mp[arr[i]]++;
	}
	for(auto it:mp){
		if(it.second == 2) return true;
	}
	return false;
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
	cout<<duplicate(arr,n);
}

