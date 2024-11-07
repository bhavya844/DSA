#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 101;
        cout << arr[i] << " ";
    }
    cout << "Now let us reverse an array:"<<endl;;
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}