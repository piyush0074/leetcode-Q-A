/*
https://leetcode.com/problems/number-of-good-pairs/submissions/
*/

#include <vector>
#include<unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        
        for(auto j:mp){
            if(j.second > 1){
                ans+= j.second*(j.second-1)/2;
            }
        }
        return ans;
    }
};

int main() {
	int n,s;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		arr.push_back(tmp);
	}
	Solution fun;
	int res = fun.numIdenticalPairs(arr);
	cout<<res;
}

