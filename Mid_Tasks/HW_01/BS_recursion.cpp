#include<iostream>
using namespace std;

int binarySearchR(int arr[], int first, int last, int element)
{
    if (last >= first) {
        int mid = first + (last - first) / 2;

        if (arr[mid] == element)
            return mid;

        if (arr[mid] > element)
            return binarySearchR(arr, first, mid - 1, element);

        return binarySearchR(arr, mid + 1, last, element);
    }
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int element = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearchR(arr, 0, n - 1, element);
    if(result == -1)
        {
      cout << "Element is not present in array"<< endl;
        }
    else
        {
         cout << "Element is present at index " << result;
        }
    return 0;
}

