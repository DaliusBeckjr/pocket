// Program : LabX1- Digit Sum
// Author : Dalius Beck
// Date : Spring 2020
// Description : let the user enter a four digit number and get a sum 
//

#include <iostream>
#include <iomanip>

void input_data(int& wholeNumb);
void perform_calculations(int wholeNumb, int& ones, int& tens, int& hundreds, int& thousands, int& sum);
void output_data(int ones, int tens, int hundreds, int thousands, int wholeNumb, int sum);

int main()
{
int wholeNumb;
int ones;
int tens;
int hundreds;
int thousands;
int sum;

input_data(wholeNumb);
perform_calculations(wholeNumb, ones, tens, hundreds, thousands, sum);
output_data(ones, tens, hundreds, thousands, wholeNumb, sum);
}

//
//
//
void input_data(int& wholeNumb)
{
std::cout << "Enter a four digit number: " << std::endl;
std::cin >> wholeNumb;
}

//
//
//
void perform_calculations(int wholeNumb, int& ones, int& tens, int& hundreds, int& thousands, int &sum)
{
ones = wholeNumb % 10;
tens = (wholeNumb / 10) % 10;
hundreds = (wholeNumb / 100) % 10;
thousands = (wholeNumb / 1000) % 10;
sum = ones + tens + hundreds + thousands;
}

//
//
//
void output_data(int ones, int tens, int hundreds, int thousands, int whole_numb, int sum)
{
std::cout << " ones digit : " << ones << std::endl;
std::cout << " tens digit : " << tens << std::endl;
std::cout << " hundreds digit : " << hundreds << std::endl;
std::cout << " thousands digit : " << thousands << std::endl;

std::cout << " The sum of the digits in the number "
<< whole_numb << " is " << sum;
}