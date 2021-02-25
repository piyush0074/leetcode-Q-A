/*
You are in an infinite 2D grid where you can move in any of the 8 directions

 (x,y) to 
    (x+1, y), 
    (x - 1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 

You are given a sequence of points and the order in which you need to cover the points.. Give the minimum number of steps in which you can achieve it. You start from the first point.

Input Format

Given two integer arrays A and B, where A[i] is x coordinate and B[i] is y coordinate of ith point respectively.


Output Format

Return an Integer, i.e minimum number of steps.


Example Input

Input 1:

 A = [0, 1, 1]
 B = [0, 1, 2]
 
 Example Output

Output 1:

 2



Example Explanation

Explanation 1:

 Given three points are: (0, 0), (1, 1) and (1, 2).
 It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).
*/
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;


int steps(vector<int> &a,vector<int> &b){
	int res = 0,s=a.size();
	for(int i=0;i<s-1;i++){
		int tmpa=0,tmpb=0;
		tmpa = abs(a[i+1]-a[i]);
		tmpb = abs(b[i+1]-b[i]);
		if (tmpa == tmpb) res+=tmpa;
		else if(tmpa>tmpb) res+=tmpa;
		else res+=tmpb;
	}
	return res;
}

int main() {
   	int s,ans=0;
   	cin>>s;
    vector<int> a , b;
	for(int i=0;i<s;i++){
		int tmp;
		cin>>tmp;
		a.push_back(tmp);
	}
	for(int i=0;i<s;i++){
		int tmp;
		cin>>tmp;
		b.push_back(tmp);
	}
	ans  = steps(a,b);
	cout<<ans;
	return 0;
}

