#include <iostream>
using namespace std;

void sort(int* arr);

int main()
{
    int arr[4]{};
    for(int i = 0; i < 4; ++i)
        cin >> arr[i];
    sort(arr);
    for(int i = 0; i < 4; ++i)
        cout << arr[i] << " ";
    return 0;
}

void sort(int* arr)
{
    int low1, low2, high1, high2, lowest, highest, middle1, middle2;
    if(arr[0] < arr[1])
    {
        low1 = arr[0];
        high1 = arr[1];
    } else {
        low1 = arr[1];
        high1 = arr[0];
    }
    if(arr[2] < arr[3])
    {
        low2 = arr[2];
        high2 = arr[3];
    } else {
        low2 = arr[3];
        high2 = arr[2];
    }
    if(low1 < low2)
    {
        lowest = low1;
        middle1 = low2;
    } else {
        lowest = low2;
        middle1 = low1;
    }
    if(high2 < high1)
    {
        highest = high1;
        middle2 = high2;
    } else {
        highest = high2;
        middle2 = high1;
    }
    arr[0] = lowest;
    arr[3] = highest;
    if(middle1 < middle2)
    {
        arr[1] = middle1;
        arr[2] = middle2;
    } else {
        arr[1] = middle2;
        arr[2] = middle1;
    }
}