/*
https://leetcode.com/problems/decompress-run-length-encoded-list/submissions/
*/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i=i+2){
            for(int j=0;j<nums[i];j++){
                ans.push_back(nums[i+1]);
            }
        }
        return ans;
    }
};

int main() {
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		arr.push_back(tmp);
	}
	Solution fun;
	vector<int> res = fun.decompressRLElist(arr);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
}

