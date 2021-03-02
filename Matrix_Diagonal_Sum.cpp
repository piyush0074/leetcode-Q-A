/*
https://leetcode.com/problems/matrix-diagonal-sum/
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        for(int i=0;i<mat.size();i++){
            ans+=mat[i][i];
        }
        for(int i=0;i<mat.size();i++){
            ans+=mat[i][mat.size()-1-i];
            if(i == mat.size()-1-i) ans-=mat[i][mat.size()-1-i];
        }
        return ans;
    }
};

int main() {
	vector<vector<int>> arr{{1,2,3},{4,5,6},{7,8,9}};
	Solution fun;
	int res = fun.diagonalSum(arr);
	cout<<res;
}

