#include <bits/stdc++.h>
#include <math.h>
#include <climits>
using namespace std;

void MinMaxNum(int n, int arr[])
{
    int maxNo = INT_MIN, minNo = INT_MAX;
    for (size_t i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout << "Max :" << maxNo << endl;
    cout << "Min :" << minNo << endl;
}
// 34 35 65 68 69 98 234 789
int linearSearch(int arr[], int n, int key)
{
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
/**
 * Time Complexity
 * O(n)
 */

// 34 35 65 68 69 98 234 789
int binarySearch(int arr[], int n, int key)
{
    int in = 0, end = n, mid = 0;
    while (in <= end)
    {
        mid = (in + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            key > arr[mid] ? in = mid + 1 : end = mid - 1;
        }
    }
    return -1;
}
/**
 *  Time complexity
 *  O(logn base 2)
 */
int main()
{
    int n, key;
    cout << "Enter Array Size : ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " number : \n";
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key : ";
    cin >> key;

    MinMaxNum(n, arr);
    cout << "Key persent on index " << linearSearch(arr, n, key) << endl;
    cout << "Key persent on index : " << binarySearch(arr, n, key) << endl;
}