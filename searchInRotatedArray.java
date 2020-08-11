import java.util.*;
import java.io.*;

public class searchInRotatedArray {

	public static int search(int arr[], int start, int end, int key) {
		if (start > end) {
			return -1;
		}

		int mid = start + (end - start) / 2;

		if (arr[mid] == key) {
			return mid;
		}

		if (arr[mid] <= arr[end]) {
			if (key >= arr[mid] && key <= arr[end]) {
				return search(arr, mid + 1, end, key);
			} else {
				return search(arr, start, mid - 1, key);
			}
		}

		else if (arr[start] <= arr[mid]) {
			if (key >= arr[start] && key <= arr[mid]) {
				return search(arr, start, mid - 1, key);
			} else {
				return search(arr, mid + 1, end, key);
			}
		}
		return -1;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = 10;
		int[] arr = new int[n];
		for (int i = 0; i < 10; i++) {
			arr[i] = sc.nextInt();
		}
		int key = 8;
		int ans = search(arr, 0, n - 1, key);
		System.out.println(ans);
	}
}