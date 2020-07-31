#include<bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int* arr, int start, int end, int key) {

	if (start > end) {
		return -1;
	}

	int mid = (start + end) / 2;

	if (arr[mid] == key) {
		return mid;
	}

	else if (arr[mid] < key) {
		return binarySearchRecursive(arr, mid + 1, end, key);
	}
	else {
		return binarySearchRecursive(arr, start, mid - 1, key);
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int n;
	n = 6;
	int arr[n] = {1, 4, 5, 6, 8, 9};
	cout << binarySearchRecursive(arr, 0, n - 1, 4);
	return 0;
}