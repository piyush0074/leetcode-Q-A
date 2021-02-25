/*

Find the contiguous subarray within an array, A of length N which has the largest sum.

Input Format:

The first and the only argument contains an integer array, A.

Output Format:

Return an integer representing the maximum possible sum of the contiguous subarray.

Constraints:

1 <= N <= 1e6
-1000 <= A[i] <= 1000

For example:

Input 1:
    A = [1, 2, 3, 4, -10]

Output 1:
    10

Explanation 1:
    The subarray [1, 2, 3, 4] has the maximum possible sum of 10.

Input 2:
    A = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

Output 2:
    6

Explanation 2:
    The subarray [4,-1,2,1] has the maximum possible sum of 6.



*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int maxSubArray(const vector<int> &A) {
    int max_curr = INT_MIN, max_end=0;
    for(int i=0;i<A.size();i++){
        max_end = max_end+A[i];
        if(max_curr < max_end) max_curr = max_end;
        if(max_end < 0) max_end = 0;
    }
    return max_curr;
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
	int res  = maxSubArray(a);
	cout<<res;
	return 0;
}

