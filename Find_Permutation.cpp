/*
Given a positive integer n and a string s consisting only of letters D or I, you have to find any permutation of first n positive integer that satisfy the given input string.

D means the next number is smaller, while I means the next number is greater.

Notes

    Length of given string s will always equal to n - 1
    Your solution should run in linear time and space.

Example :

Input 1:

n = 3

s = ID

Return: [1, 3, 2]
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> findPerm(const string A, int B) {
    vector<int> ans;
    int s=1,l=B;
    for(int i=0;i<A.size();i++){
        if(A[i]=='I'){
            ans.push_back(s);
            s++;
        }
        else{
            ans.push_back(l);
            l--;
        }
    }
    if(A[A.size()-1]=='I'){
        ans.push_back(s);
    }
    else{
        ans.push_back(l);
    }
    return ans;
}


int main() {
   	int n;
   	cin>>n;
    string s;
    cin>>s;
	vector<int> res  = findPerm(s,n);
	for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
	return 0;
}

