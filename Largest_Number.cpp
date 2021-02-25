/*

 Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.

*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


bool compare(int a,int b){
    string x = to_string(a);
    string y = to_string(b);
    return ((x+y) > (y+x));
}
string largestNumber(const vector<int> &A) {
    if(A.size()==0) return "";
    string ans;
    vector<int> v;
    for(int i=0;i<A.size();i++) v.push_back(A[i]);
    sort(v.begin(),v.end(),compare);
    int count=0;
    for(int i=0;i<v.size();i++){ 
        if (v[i]==0) count++;
        ans+=to_string(v[i]);
    }
    if(v.size()==count) return "0";
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
	string res  = largestNumber(a);
	cout<<res;
	return 0;
}

