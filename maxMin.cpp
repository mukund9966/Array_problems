//to find max and min in array
#include<iostream>
using namespace std;
struct node{
		int min;
		int max;
	};
struct node maxMin(int a[], int n)
{
	struct node minmax;
	if(n==1){
		minmax.max = a[0]; 
        minmax.min = a[0];  
		return minmax;
	}
	
		if(a[0]>a[1]){
			minmax.max = a[0];
			minmax.min = a[1];
		}
		else {
			minmax.max = a[1];
			minmax.min = a[0];
		}
	
	for(int i=2;i<n;i++){
		if(a[i]>minmax.max){
			minmax.max = a[i];
		}
		else if(a[i]<minmax.min){
			minmax.min = a[i];
		}
	
	}
	return minmax;
	}
	int main(){
		int size, a[100];
	cout<<"Enter the size of array";
	cin>>size;
	cout<<"Enter the array"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	struct node minmax = maxMin(a,size);
	cout<<"max number is  "<< minmax.max<<endls;
	cout<<"min number is   "<<minmax.min;
	return 0;
	}
