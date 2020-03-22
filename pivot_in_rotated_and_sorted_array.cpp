#include<bits/stdc++.h>
using namespace std;
int pivotrot(int arr[10],int start,int end){
	
	
	while(start<= end){
		int mid  = start +(end-start)/2;
		
		if(mid<end && arr[mid]> arr[mid+1]){
			return arr[mid];
		}
		if( mid>start && arr[mid]<arr[mid-1]){
			return arr[mid-1];
		}
		if(arr[start]>= arr[mid]){
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
}
int main(){
	int arr[10] = {6,7,1,2,3,4,5};
	int n = 7;
	int start = 0;
	int end = n-1;
	int result = pivotrot(arr,start,end);
	cout<<"The pivot element is--------->"<<result;
	
	return 0;
}
