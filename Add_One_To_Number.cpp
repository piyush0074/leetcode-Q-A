/*

Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

Example:

If the vector has [1, 2, 3]

the returned vector should be [1, 2, 4]

as 123 + 1 = 124.



    NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer.
    For example, for this problem, following are some good questions to ask :

        Q : Can the input have 0’s before the most significant digit. Or in other words, is 0 1 2 3 a valid input?

        A : For the purpose of this question, YES
        Q : Can the output have 0’s before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
        A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.


*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> plusOne(vector<int> &A) {
    vector<int> ans;
    int n = A.size();
    if (n == 1){
        ans.push_back(A[0]+1);
        return ans;
    }
    int c=0;
    int tmp=1;
    for(int i=n-1;i>=0;i--){
         tmp = tmp+A[i]+c;
         c=0;
        if(tmp == 10 ){
            c=1;
            tmp = 0;
        }
        ans.push_back(tmp);
        tmp = 0;
    }
    int l=0,r=n-1;
    while(l< r){
        int tmp = ans[l];
        ans[l] = ans[r];
        ans[r] = tmp;
        l++;
        r--;
    }
    if(c==1) ans.insert(ans.begin(),1);
    while( ans[0] == 0 && ans.size() <= n){
    vector<int>::iterator it1;
    it1 = ans.begin();
    ans.erase(it1);
    }
    return ans;
}

int main() {
   	int s;
   	cin>>s;
    vector<int> a;
	for(int i=0;i<s;i++){
		int tmp;
		cin>>tmp;
		a.push_back(tmp);
	}
	vector<int> res  = plusOne(a);
	for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
	return 0;
}

