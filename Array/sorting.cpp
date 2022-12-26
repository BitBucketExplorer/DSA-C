#include <bits/stdc++.h>
#include <math.h>
#include <climits>
using namespace std;
/**
 * Selection Sort
 * "Find the minimum element in unsorted array and swap it with element at begining"
 */
int *selectionSort(int arr[], int n)
{
    int temp = 0;
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return arr;
}

/**
 *  --Bubble Sort
 * " Reapetedly swap two adjacent elements if they are in wrong order"
 */
int *bubbleSort(int arr[], int n)
{
    int temp = 0;
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = 0; j < n - i + 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

/**
 *  --Insertion Sort
 *  "Insert an element from unsorted array to its correct position in sorted array"
 */
int *insertionSort(int arr[], int n)
{
    for (size_t i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    return arr;
}

int chocolatPuzzel(int n)
{
    int wrapper = 0, chocolat = 0, xnm = 0;
    chocolat = n;
    wrapper = n;
    while (wrapper >= 3)
    {
        xnm = wrapper / 3;
        chocolat += xnm;
        wrapper = wrapper - (xnm * 3) + xnm;
    }
    return chocolat;
}

int main()
{
    int n = 0;
    int *sortedArr;
    cout << "Enter the size :";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements :\n";
    for (size_t i = 0; i < n; i++)
        cin >> arr[i];

    sortedArr = selectionSort(arr, n);
    sortedArr = bubbleSort(arr, n);
    sortedArr = insertionSort(arr, n);

    for (size_t i = 0; i < n; i++)
        cout << sortedArr[i] << " ";

    // cout << endl
    //      << "Chocolate Puzzel :" << endl;
    // cout << chocolatPuzzel(n) << endl;

    return 0;
}