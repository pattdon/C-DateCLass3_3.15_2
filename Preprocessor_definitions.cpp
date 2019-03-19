#include <iostream>

#define SIZE 10

using namespace std;

int number[SIZE];

int main()
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number[i];
    }

    cout << "Numbers in array: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << number[i] << ", ";
    }

    return 0;
}
