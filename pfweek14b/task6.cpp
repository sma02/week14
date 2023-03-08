#include <iostream>
using namespace std;

void mergeArray(int arr1[], int arr2[], int arr3[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = size1; i < size1 + size2; i++)
    {
        arr3[i] = arr2[i - size1];
    }
}
int main()
{
    int size1 = 6;
    int size2 = 5;
    int arr1[size1] = {2, 3, 4, 5, 6, 7};
    int arr2[size2] = {22, 56, 76, 44, 11};
    int temp[size1 + size2];
    mergeArray(arr1, arr2, temp, size1, size2);
    for (int i = 0; i < 11; i++)
    {
        cout << temp[i] << ' ';
    }
}