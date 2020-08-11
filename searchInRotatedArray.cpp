#include<bits/stdc++.h>
using namespace std;

int searchInRotated(int* arr, int start, int end, int key) {
	if (start > end) {
		return -1;
	}

	int mid = start + (end - start) / 2;

	if (arr[mid] == key) {
		return mid;
	}

	if (arr[mid] <= arr[end]) {							//second part is sorted
		if (key >= arr[mid] and key <= arr[end]) {
			return searchInRotated(arr, mid + 1, end, key);
		}
		else {
			return searchInRotated(arr, start, mid - 1, key);
		}
	}
	else if (arr[start] <= arr[mid]) {						//first part is sorted
		if (key >= arr[start] and key <= arr[mid]) {
			return searchInRotated(arr, start, mid - 1, key);
		}
		else {
			return searchInRotated(arr, mid + 1, end, key);
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int n;
	n = 10;
	int arr[n] = {6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
	int key = 8;
	cout << searchInRotated(arr, 0, n - 1, key);
	return 0;
}