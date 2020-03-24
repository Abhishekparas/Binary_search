#include<iostream>
#include<algorithm>
 
using namespace std;
bool ispossibble(int *arr,int n,int c,int ans){
	c--; //placed 1 c at 0th position
	int lastcplaced = 0;
	for(int i=1; i<n; i++){
		int diff = arr[i] - arr[lastcplaced];
		if(diff >= ans){
			lastcplaced =i;
			c--;
		}
		
	}
	if(c<=0){
		return true;
	}
	return false;
}
int aggc(int *arr,int n,int c){
	sort(arr,arr+n);
	int finalans =0;
	int start =0;
	int end = arr[n-1] - arr[0];
	while(start<=end){
		int mid  = (start+end)/2;
		if(ispossibble(arr,n,c,mid)){
			finalans = mid;
			start = mid+1;
		}
		else{
			end =mid-1;
		}
	}
	return finalans;
}
int main(){
	int arr[100];
	int n,c;
	cin>>n>>c;
	for(int i=0 ;i<n; i++){
		cin>>arr[i];
	}
	int result = aggc(arr,n,c);
	cout<<result<<endl;
	return 0;
	
}
