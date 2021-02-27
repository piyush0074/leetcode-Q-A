/*
https://leetcode.com/problems/create-target-array-in-the-given-order/
*/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans(0,0);
        for(int i=0;i<index.size();i++){
            ans.insert(ans.begin()+index[i],nums[i]);
        }
        return ans;
    }
};

int main() {
	int n,s;
	cin>>n;
	vector<int> arr,arr2;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		arr.push_back(tmp);
	}
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		arr2.push_back(tmp);
	}
	Solution fun;
	vector<int> res = fun.createTargetArray(arr,arr2);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
}

