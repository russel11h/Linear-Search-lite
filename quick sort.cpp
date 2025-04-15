#include <iostream>
using namespace std;


int partition(int *a, int low, int high)
{
    int left, right, pivot;
    pivot = a[low];
    left = low;
    right = high;

    while (left < right)
    {
        while (a[left] <= pivot)
            left++;


        while (a[right] > pivot)
            right--;

        if (left < right)
            swap(a[left], a[right]);
    }


    a[low] = a[right];
    a[right] = pivot;

    return right;
}

void quicksort(int *a, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(a, low, high);
        quicksort(a, low, pivotIndex - 1);
        quicksort(a, pivotIndex + 1, high);
    }
}

int main()
{
    int a[6] = {34, 7, 23, 32, 5, 62};


    cout << "Original array: ";
    for (int i = 0; i<6; i++)
        cout << a[i] << " ";
    cout << endl;

    quicksort(a, 0, 5);

    cout << "Sorted array: ";
    for (int i=0; i<6; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}

