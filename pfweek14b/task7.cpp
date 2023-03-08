#include <iostream>
using namespace std;

void rotateValuesLeft(int arr[], int size, int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = arr[0];
        for (int j = 1; j < size; j++)
        {
            arr[j - 1] = arr[j];
        }
        arr[size - 1] = temp;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    rotateValuesLeft(arr,9,3);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<' ';
    }
}