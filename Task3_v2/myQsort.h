#pragma once
#include <iostream>
using namespace std;
namespace QsortH {
	template <typename T>

	class myQsort
	{
	public :
		myQsort() {};;
		int Partition(T arr[], int start, int end);

		void Qsort(T arr[], int start, int end);

		void PrintArray(T arr[], int n);

	};

	

	template <typename T>

	int  Partition(T arr[], int start, int end) {
		int p = end;
		int j = start;
		for (int i = start; i < end; ++i) {
			if (arr[i] < arr[p]) {
				swap(arr[i], arr[j]);
				j++;
			}
		}
		swap(arr[j], arr[p]);
		return j;
	}

	template <typename T>
	void Qsort(T arr[], int start, int end) {

		if (start < end) {
			int p = Partition(arr, start, end);
			Qsort(arr, start, p - 1);
			Qsort(arr, p + 1, end);
		}

	}

	template <typename T>
	void  PrintArray(T arr[], int n) {
		for (int i = 0; i < n; ++i)
			cout << arr[i] << " ";
		cout << "\n\n";
	}

	

}