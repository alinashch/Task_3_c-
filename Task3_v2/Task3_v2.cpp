#include<iostream>
#include "myQsort.h"
using namespace std;
using namespace QsortH;



int main() {
	int arr[] = { 1 , 10 , 11 , 9 , 14 , 3 , 2 , 20 , 19, 43, 57, 3, 2 };
	string arr1[] = { "qq", "v", "uihc", "cvx", "aaa", "vt", "zzz" };
	int n = sizeof(arr) / sizeof(int);
	int n1 = sizeof(arr1) / sizeof(string);


	cout << "Array Before Sorting: " << endl;
	PrintArray(arr, n);

	Qsort(arr, 0, n - 1);

	cout << "Array After Sorting: " << endl;
	PrintArray(arr, n);


	cout << "Array Before Sorting: " << endl;
	PrintArray(arr1, n1);

	Qsort(arr1, 0, n1 - 1);

	cout << "Array After Sorting: " << endl;
	PrintArray(arr1, n1);
}