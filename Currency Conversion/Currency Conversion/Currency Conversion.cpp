// Currency Conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float AmountDue, AmountRecieved;
    int RemainingChange, oneThousand, fiveHundred, oneHundred, fifty, twenty, ten;
    cout << "Enter Due Amount";
    cin >> AmountDue;
    cout << "Enter Recieved Amount";
    cin >> AmountRecieved;
    int change = AmountRecieved - AmountDue;
    oneThousand = change / 1000;
    RemainingChange = change % 1000;
    fiveHundred = RemainingChange / 500;
    RemainingChange = RemainingChange % 500;
    oneHundred = RemainingChange / 100;
    RemainingChange = RemainingChange % 100;
    fifty = RemainingChange / 50;
    RemainingChange = RemainingChange % 50;
    twenty = RemainingChange / 20;
    RemainingChange = RemainingChange % 20;
    ten = RemainingChange / 10;
    RemainingChange = RemainingChange % 10;

    cout << oneThousand << "Thousand \n" << fiveHundred << "five Hundred \n" << oneHundred << "One Hundred \n" << fifty << "Fifty \n" << twenty << "twenty \n" << ten << "ten ";
}