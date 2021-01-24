#include "tools.h"

void push_back(int *&arr, int &count, const int value) 
{
    int *new_arr = new int[count + 1];
    for(int i = 0; i < count; ++i)
        new_arr[i] = arr[i];
    new_arr[count++] = value;
    delete[] arr;
    arr = new_arr;
}

bool search(const int *arr, const int size, const int value)
{
    bool isMatched = false;
    for(int i = 0; i < size; ++i)
        if(arr[i] == value) {isMatched = true; break;};
    return isMatched;
}

void sort(int *arr, const int n)
{
	for(int i = 1; i < n; i++)
    {
		for(int j = i; j > 0 && arr[j-1] > arr[j]; j--)
        {
			int tmp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = tmp;
		}
	}
}