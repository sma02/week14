#include <iostream>
using namespace std;

float averageOfArray(float array[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum/size;
}

int main()
{
    int arraySize=3;
    float numbers[arraySize]={1,2,3};
    cout<<averageOfArray(numbers,arraySize);
}