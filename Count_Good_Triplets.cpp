/*
https://leetcode.com/problems/count-good-triplets/
*/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ans=0;
        for(int i=0;i<arr.size()-2;i++){
            for(int j=i+1;j<arr.size()-1;j++){
                if(i<j && abs(arr[i]-arr[j])<=a){
                    for(int k=j+1;k<arr.size();k++){
                        if(j<k && abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c) ans+=1;
                    }
                }
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
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	Solution fun;
	int res = fun.countGoodTriplets(arr,a,b,c);
	cout<<res;
}

