/*
https://leetcode.com/problems/find-the-highest-altitude/
*/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0,tmp=0;
        for(int i=0;i<gain.size();i++){
            tmp+=gain[i];
            ans = max(tmp,ans);
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
	int res = fun.largestAltitude(arr);
	cout<<res;
}

