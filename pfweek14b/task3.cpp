#include <iostream>
using namespace std;

void swapNumbers(int &num1,int &num2)
{
int temp=num1;
num1=num2;
num2=temp;
}

int main()
{
    int number1=10;
    int number2=20;
    swapNumbers(number1,number2);
    cout<<"Number1: "<<number1<<endl;
    cout<<"Number2: "<<number2<<endl;
}