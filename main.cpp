//
//  main.cpp
//  focus
//
//  Created by Dalius Beck on 7/26/20.
//  Copyright © 2020 Dalius Beck. All rights reserved.


//Program:      self project - Johny's Peaches
//Author:       Dalius Beck jr.
//Description:  This program was made for the user to take their paycheck and seperate it into a budget             plan that breaks the users pay for needs(50%), wants(15%), savings(20%),
//              and invest (15%)
//
//              thank u for checking this out. feel free to edit and make it your own. I just did this
//              for the fun and I needed a budget to achieve my financial freedom.
//              -- if you are wondering I will be trying to do projects every 2 weeks. feel free to
//              message some ideas--


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void input_data(double& paycheck);
void compute_needs(double& needs, double paycheck);
void compute_wants(double& wants, double paycheck);
void compute_save(double& savings, double paycheck);
void compute_invest(double& invest, double paycheck);
void ouput_data(double needs, double wants, double savings, double invest, double paycheck);


int main()
{
    double paycheck,
    needs,
    wants,
    savings,
    invest;
    
    // data section
    input_data(paycheck);
    
    //compute data section
    compute_needs(needs, paycheck);
    compute_wants(wants, paycheck);
    compute_save(savings, paycheck);
    compute_invest(invest, paycheck);
    
    // output section
    ouput_data(needs, wants, savings, invest, paycheck);
}

//
//
//
void input_data(double& paycheck)
{
    std::cout << "how much is your paycheck?"
                << endl;
    std::cin >> paycheck;
}

//
//
//
void compute_needs(double& needs,
                    double paycheck)
{
    needs = .50 * paycheck;
}

//
//
//
void compute_wants(double& wants,
                        double paycheck)
{
    wants = .15 * paycheck;
}

//
//
//
void compute_save(double& savings,
                        double paycheck)
{
    savings = .20 * paycheck;
}

//
//
//
void compute_invest(double& invest,
                        double paycheck)
{
    invest = .15 * paycheck;
}

//
//
//
void ouput_data(double needs,
                    double wants,
                    double savings,
                    double invest,
                    double paycheck)
{
    std::cout << setprecision(9) << std::endl;
    std::cout << "your paycheck was : $" << paycheck << endl;
    std::cout << "your needs are    : $"
            << needs << std::endl;
    std::cout << "your wants are    : $"
            << wants << std::endl;
    std::cout << "your are saving   : $"
            << savings << std::endl;
    std::cout << "you are investing : $"
            << invest << std::endl;
}

//
// done!
//
