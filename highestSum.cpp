#include<iostream>
using namespace std;
int highestSum(int a[], int size){
	int maxNow=0, maxSum=0;
	for(int i=0; i<size;i++){
		maxNow = maxNow + a[i];
		if(maxSum<maxNow){
			maxSum = maxNow;
		}
		if(maxNow<0){
			maxNow=0;
		}
	}
	cout<<maxSum;
}
int main(){
	int n, a[10];
	cout<<"Enter Size of matrix";
	cin>>n;
	cout<<"Enter the Matrix"<<endl;
	for(int j=0;j<n;j++){
		cin>>a[j];
	}
	
	int final = highestSum(a,n);
	return 0;
}