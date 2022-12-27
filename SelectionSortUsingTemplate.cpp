#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void input(vector<T> &a, int size)
{
	cout << "Enter the elements of the array: \n";
	for(int i = 0; i < size; i++) {
		cin >> a[i];
	}
}

template<typename T>
// Code for selection sort
void SelectionSort(vector<T> &a, int size)
{
	int min;
	for(int i = 0; i < size; i++)
	{
		min = i;
		for(int j = i+1; j < size; j++)
		{
			if(a[j] < a[min])
				min = j;
		}
		swap(a[i], a[min]);
	}
}

template<typename T>
void display(vector<T> &a, int size)
{
	for(int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	cout << "Enter the no. of elements in the array: ";
	int size;
	cin >> size;
	cout << "For int data type: \n";
	vector<int> arr1(size);
	input(arr1, size);
	cout << "Elements before sorting\n";
	display(arr1,size);
	cout << "Elements after sort\n";
	SelectionSort(arr1, size);
	display(arr1, size);
	cout << endl;
	cout << "For float data type: \n";
	vector<float> arr2(size);
	input(arr2, size);
	cout << "Elements before sorting: \n";
	display(arr2, size);
	cout << "Elements after sorting: \n";
	SelectionSort(arr2, size);
	display(arr2, size);
	return 0;
}






















