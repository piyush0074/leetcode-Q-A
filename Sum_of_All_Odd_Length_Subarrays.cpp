/*
https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
*/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0,s=3;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        while(s<=arr.size()){  
            int windowstart=0,windowend=s,tmp=0;
            for(int i=windowstart;i<windowend;i++){
            tmp+=arr[i];
            }
            sum+=tmp;
            while(windowend<arr.size()){
                tmp-=arr[windowstart];
                windowstart++;
                windowend++;
                tmp+=arr[windowend-1];
                sum+=tmp;
            }
            s+=2;
        }
        return sum;
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
	int res = fun.sumOddLengthSubarrays(arr);
	cout<<res;
}

