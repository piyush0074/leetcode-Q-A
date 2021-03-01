/*
Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers for a given array A of size N.

If such arrangement is not possible, it must be rearranged as the lowest possible order i.e., sorted in an ascending order.

Note:

1. The replacement must be in-place, do **not** allocate extra memory.
2. DO NOT USE LIBRARY FUNCTION FOR NEXT PERMUTATION. Use of Library functions will disqualify your submission retroactively and will give you penalty points.

Input Format:

The first and the only argument of input has an array of integers, A.

Output Format:

Return an array of integers, representing the next permutation of the given array.

Constraints:

1 <= N <= 5e5
1 <= A[i] <= 1e9

Examples:

Input 1:
    A = [1, 2, 3]

Output 1:
    [1, 3, 2]

Input 2:
    A = [3, 2, 1]

Output 2:
    [1, 2, 3]
    
Input 3:
    A = [1, 1, 5]

Output 3:
    [1, 5, 1]

Input 4:
    A = [20, 50, 113]

Output 4:
    [20, 113, 50]
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> nextPermutation(vector<int> &A) {
    if(A.size() == 1) return A;
    int index = -1, n = A.size();
    for(int i=n-2;i>=0;i--){
        if(A[i] < A[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        sort(A.begin(),A.end());
    }
    else if(index+1 < n){
        sort(A.begin()+index+1,A.end());
        for(int i=index+1;i<n;i++){
            if( A[i] > A[index]){
                int tmp = A[i];
                A[i] = A[index];
                A[index] = tmp;
                break;
            }
        }
    }
    return A;
}

int main() {
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		arr.push_back(tmp);
	}
	vector<int> res = nextPermutation(arr);
	for(int i=0;i<res.size();i++)
		cout<<res[i]<<" ";
}

