/*
https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/
*/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ans = 0;
        for(int i=0;i<startTime.size();i++){
            if(startTime[i] < queryTime){
                if(endTime[i] >= queryTime){
                    ans++;
                }
            }
            else if(startTime[i] == queryTime) ans++;
        }
        return ans;
    }
};

int main() {
	int n,q;
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
	cin>>q;
	Solution fun;
	int res = fun.busyStudent(arr,arr2,q);
	cout<<res;
}

