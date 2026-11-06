/*
========================================================
Problem: Selection Sort

Time Complexity: O(n2)
Space Complexity: O(1)
========================================================
*/

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selectionSort(arr, n);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}