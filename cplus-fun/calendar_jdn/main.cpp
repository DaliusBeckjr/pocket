// Program : lab 4 - More with Julain Day Numbers
// Author : Dalius Beck
// Description : The program prompts the user to enter today's date and their
// birthday, then computes the JDN for both dates, the number
// fot the user's birthday.
//

#include <iostream>
#include <iomanip>
//
//
//

void get_date(int& year, int& month, int& day);
void compute_jdn(int year, int month, int day, int& jdn);
void compute_dow(int year, int month, int day, int& dow);
void compute_days(int& jdn1, int& jdn2, int days_between);
void display_date(int year, int month, int day);
void display_results(int today_year, int today_month, int today_day, int today_jdn,
int birthday_year, int birthday_month, int birthday_day, int birthday_jdn, int birthday_dow, int days_between);


int birthday_program()
{
int today_year, // original jdn section
today_month,
today_day,
today_jdn;

int birthday_year, // birthday jdn section
birthday_month,
birthday_day,
birthday_jdn;


int days_between,
birthday_dow;// extra section?

// input section
std::cout << "For today's date..." << std::endl;
get_date(today_year, today_month, today_day);
std::cout << "For your birthday..." << std::endl;
get_date(birthday_year, birthday_month, birthday_day);

// processing section

compute_jdn( today_year, today_month, today_day, today_jdn);
compute_jdn( birthday_year, birthday_month, birthday_day, birthday_jdn);
compute_dow( birthday_year, birthday_month, birthday_day, birthday_dow);
compute_days(today_jdn, birthday_jdn, days_between);

}
//
// An input module that retrieves the components of a date (month, day, year) from the user.
//
void get_date(int& year, int& month, int& day)
{

std::cout << "Enter month number (jan=1, Feb=2, etc): ";
std::cin >> month;
std::cout << "Enter day number : "; // added to the prgram
std::cin >> day;
std::cout << "Enter year using four digits: ";
std::cin >> year;

}


//
// a processing module that computes the JDN for the given date
//

void compute_jdn(int year, int month, int day, int& jdn)
{
int a, //declaring discriminant
m,
y,
leap_days;

a = ((14 - month) / 12);
m = (month - 3) + (12 * a);
y = year + 4800 - a;
leap_days = (y / 4) - (y / 100) - (y / 400);
jdn = day + (((153 * m) + 2) / 5) + (365 * y) + leap_days - 32045;
}


//
// a processing module that computes the "day of the week" (DOW) number
//

void compute_dow(int year, int month, int day, int& dow)
{
int jdn;
compute_jdn(year, month, day, jdn);
dow = (jdn + 1) % 7;
}

//
// A processing module that computes the number of days between two given JDNs
//

void compute_days(int& jdn1, int& jdn2, int days_between)
{
days_between = jdn2 - jdn1;
}

//
// An output module that displays the given date in the form “m/d/yyyy”.
// for todays date
//

void display_date(int year, int month, int day)
{
std::cout << month << "/" << day << "/" << year;
}


//
// An output module that displays today's date (as input by the user) and
// corresponding JDN, the user's birthday and corresponding JDN, the weekday
// number of the user's birthday, and number of days since the user was born.
//

void display_results(int today_year, int today_month, int today_day, int today_jdn,
int birthday_year, int birthday_month, int birthday_day, int birthday_jdn, int birthday_dow, int days_between)
{
// wouldn't let me keep the pluses bec of two pointer error

std::cout << "The JDN for ";
display_date(today_year, today_month, today_day);
std::cout << " is " << today_jdn;
std::cout << "The JDN for your birthday on ";
display_date(birthday_year, birthday_month, birthday_day);
std::cout << " was " << birthday_jdn;
std::cout << "The DOW on your birthday was " << birthday_dow << " (0=Sun, 1=Mon, etc.)";
std::cout << "It has been " << days_between << " days since you were born";
}