#include <iostream>
using namespace std;

bool isSparseMatrix(int matrix[][3], int rows, int cols)
{
    int zeroCount=0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
      if(matrix[i][j]==0)
      {
        zeroCount++;
      }
        }
    }
    if(zeroCount>(rows*cols)/2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int matrix[3][3]={
        {0,0,2},
        {2,0,3},
        {0,1,0}
    };
cout<<"Is SparseMatrix: "<<isSparseMatrix(matrix,3,3);
}