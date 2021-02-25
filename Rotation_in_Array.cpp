/*
 Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.

   i/p: {1,2,3,4,5,6,7}
   o/p: {3,4,5,6,7,1,2}


*/


#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> rotate(vector<int> &arr, int n, int r){
	if(n == 1) return arr;
	if(r >= n) r = r%n;
	for(int i=0;i<r;i++){
		int tmp = arr[0];
		for(int j=0;j<n-1;j++){
			arr[j] = arr[j+1];
		}
		arr[n-1] = tmp;
	} 
	return arr;
}

int main() {
	int n,r;
	cin>>n;
	cin>>r;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		arr.push_back(tmp);
	}
	rotate(arr,n,r);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

