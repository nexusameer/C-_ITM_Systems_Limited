// Percentage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int total_marks_q1, total_marks_q2, total_marks_q3, total_marks_q4, total_marks_q5, total_marks;
    float obtain_marks_q1, obtain_marks_q2, obtain_marks_q3, obtain_marks_q4, obtain_marks_q5, obtain_marks;
    float percentage;
    cout << "Enter Total Marks for Quiz # 1 :";
    cin >> total_marks_q1;
    cout << "Enter Obtained Marks for Quiz # 1 : ";
    cin >> obtain_marks_q1;
    cout << "Enter Total Marks for Quiz # 2 :";
    cin >> total_marks_q2;
    cout << "Enter Obtained Marks for Quiz # 2 :";
    cin >> obtain_marks_q2;
    cout << "Enter Total Marks for Quiz # 3 :";
    cin >> total_marks_q3;
    cout << "Enter Obtained Marks for Quiz # 3 :";
    cin >> obtain_marks_q3;
    cout << "Enter Total Marks for Quiz # 4 :";
    cin >> total_marks_q4;
    cout << "Enter Obtained Marks for Quiz # 4 :";
    cin >> obtain_marks_q4;
    cout << "Enter Total Marks for Quiz # 5 :";
    cin >> total_marks_q5;
    cout << "Enter Obtained Marks for Quiz # 5 :";
    cin >> obtain_marks_q5;
    total_marks = total_marks_q1 + total_marks_q2 + total_marks_q3 + total_marks_q4 + total_marks_q5;
    obtain_marks = obtain_marks_q1 + obtain_marks_q2 + obtain_marks_q3 + obtain_marks_q4 + obtain_marks_q5;
    percentage = obtain_marks / total_marks * 100.0;
    cout << percentage<<"% of " << total_marks;
    return 0;
}