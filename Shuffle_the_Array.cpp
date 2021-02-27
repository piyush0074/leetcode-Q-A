/*
https://leetcode.com/problems/shuffle-the-array/submissions/
*/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
        return ans;
    }
};

int main() {
	int n,s;
	cin>>n;
	cin>>s;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		arr.push_back(tmp);
	}
	Solution fun;
	vector<int> res = fun.shuffle(arr,s);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
}

