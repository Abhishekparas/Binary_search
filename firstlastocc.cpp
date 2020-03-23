#include<iostream>
using namespace std;
int lastocc(int arr[100],int n,int key){
	int s = 0;
	int e = n-1;
	int res = -1;
	while(s<=e){
		int mid  = (s+e)/2;
		if(arr[mid] == key){
			res = mid;
			s = mid+1;
		}
		else if(arr[mid]>key){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
	}
	return res;
			
}
int firstocc(int arr[100],int n,int key){
	int start = 0;
	int end  = n-1;
	int ans = -1;
	while(start<=end){
		int mid  = (start+end)/2;
		if(arr[mid] == key){
			ans = mid;
			end  = mid-1;
		}
		else if(arr[mid] >key){
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return ans;
			
}
int main(){
	int arr[100] = {1,2,2,2,2,3,4,5};
	int n = 8;
	cout<<firstocc(arr,n,2);
	cout<<lastocc(arr,n,2);
	
	return 0;
}
