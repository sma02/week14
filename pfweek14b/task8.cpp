#include <iostream>
#include <fstream>
using namespace std;

#define rows 13
#define cols 6
char seats[rows][cols];
void LoadSeatsArrangement()
{
    fstream file;
    file.open("seats.txt", ios::in);
    if (file)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                file >> seats[i][j];
            }
        }
    }
    file.close();
}
void storeSeatsArrangement()
{
    fstream file;
    file.open("seats.txt", ios::out);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            file << seats[i][j];
        }
    }
    file.close();
}
void printSeatArrangement(int startingRow, int endingRow)
{
    cout << '\t' << "A B C D E F" << endl;
    for (int i = startingRow; i <= endingRow; i++)
    {
        cout << "Row " << i + 1 << '\t';
        for (int j = 0; j < cols; j++)
        {
            cout << seats[i][j] << ' ';
        }
        cout << endl;
    }
}
int takeChoice()
{
    int choice;
    cout << ": ";
    cin >> choice;
    return choice;
}
int takeChoiceAlpha()
{
    char choice;
    cout << ": ";
    cin >> choice;
    choice -= 'A';
    return choice;
}
int ticketType()
{
    cout << "First Class=1,Business Class=2,Economy Class=3" << endl;
    cout << "Enter the ticket type";
    return takeChoice();
}
void init()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            seats[i][j] = '*';
        }
    }
    LoadSeatsArrangement();
}
void handleTicket()
{
    int ticketCategory = ticketType();
    if (ticketCategory == 1)
    {
        printSeatArrangement(0, 1);
    }
    else if (ticketCategory == 2)
    {
        printSeatArrangement(2, 6);
    }
    else if (ticketCategory == 3)
    {
        printSeatArrangement(7, 12);
    }
    cout << "Enter row ";
    int row = takeChoice() - 1;
    cout << "Enter col ";
    int col = takeChoiceAlpha();
    if (seats[row][col] != 'X')
    {
        seats[row][col] = 'X';
        cout << "Seat confirmed!";
    }
    else
    {
        cout << "Error:Seat occupied!";
    }
    system("pause");
}
int main()
{
    init();
    while (1)
    {
        cout << "PrintAllSeats=1,EnterTicket=2,Exit=3";
        int choice = takeChoice();
        if (choice == 1)
        {
            printSeatArrangement(0, 12);
        }
        else if (choice == 2)
        {
            handleTicket();
        }
        else
        {
            break;
        }
    }
    storeSeatsArrangement();
}