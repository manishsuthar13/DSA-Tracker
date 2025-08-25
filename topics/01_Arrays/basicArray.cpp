//basic code for finding max, min element and reverse an array
//time complexity: O(n)

#include <iostream>
using namespace std;

void findMaxMin(int arr[], int n, int &maxi, int &mini)
{
    maxi = arr[0];
    mini = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
        if (arr[i] < mini)
            mini = arr[i];
    }
}

void reverseArray(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxi, mini;
    findMaxMin(arr, n, maxi, mini);
    cout << "Maximum element: " << maxi << endl;
    cout << "Minimum element: " << mini << endl;

    reverseArray(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}