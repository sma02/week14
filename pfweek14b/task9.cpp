#include <iostream>
using namespace std;

void addMatrices(int matrix1[], int matrix2[], int result[], int rows, int cols)
{
    for(int i=0;i<rows+cols;i++)
    {
        result[i]=matrix1[i]+matrix2[i];
    }
}
void subtractMatrices(int matrix1[], int matrix2[], int result[], int rows, int cols)
{
    for(int i=0;i<rows+cols;i++)
    {
        result[i]=matrix1[i]-matrix2[i];
    }
}
void scalerMultiplication(int matrix[],int result[],int size,int factor)
{
for(int i=0;i<size;i++)
{
    result[i]=matrix[i]*factor;
}
}
int main()
{
}