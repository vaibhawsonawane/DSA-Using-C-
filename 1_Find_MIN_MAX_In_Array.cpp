#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    // int arr[100];
    int size;
    cout << "Enter Size of Array" << endl;
    cin >> size;
    int arr[size];

    cout << "Taking Aray From User.." << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Print MAximum Element i n Array is = " << getMax(arr, size) << endl;
    cout << "Print Minimum Element in Array is = " << getMin(arr, size);

    return 0;
}
