/*
 * Driver.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: 1766946_snhu
 */
#include <iostream>
#include <iomanip>
#include "InvestCalc.h"
using namespace std;

int main(){
	InvestCalc Calc;

	double tempDouble;
	int tempInt;

	std::cout << "************Input Investment Values************" << std::endl;	//Render first input and accept first input for initial investment
	std::cout << "Initial Investment Amount: $";
	std::cin >> tempDouble;
	Calc.SetInitialInvest(tempDouble);
	Calc.SetOpenAmount(Calc.GetInitialInvest());
	cin.clear();
	cin.ignore(100,'\n');

	std::cout << "Monthly Deposit: $";												//Render second input and accept for monthly deposit
	std::cin >> tempDouble;
	Calc.SetMonthlyDeposit(tempDouble);
	cin.clear();
	cin.ignore(100,'\n');

	std::cout << "Annual Interest: %";												//Render third input and accept for annual interest
	std::cin >> tempDouble;
	Calc.SetAnnualInterest(tempDouble);
	cin.clear();
	cin.ignore(100,'\n');

	std::cout << "Number of years: ";												//Render fourth input and accept number of years for investment
	std::cin >> tempInt;
	Calc.SetNumOfYears(tempInt);
	cin.clear();
	cin.ignore(100,'\n');

	std::cout << string(100, '\n');													//Used to clear console
	std::cout << std::setprecision(2) << std::fixed;								//Used to set decimal precision

	std::cout << "************Input Investment Values************" << std::endl;
	std::cout << "Initial Investment Amount: $" << Calc.GetOpenAmount()<< std::endl;
	std::cout << "Monthly Deposit: $" << Calc.GetMonthlyDeposit() << std::endl;
	std::cout << "Annual Interest: %" << Calc.GetAnnualInterest() << std::endl;
	std::cout << "Number of years: " << Calc.GetNumOfYears() << std::endl;
	std::cout << "Press ENTER key to continue . . . " << std::endl;					//Reprints user inputs and waits for ENTER key to continue
	std::cin.get();

	std::cout << "Balance and Interest With Additional Monthly Deposits" << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << " Year    Year End Balance    Year End Earned Interest" << std::endl;
	std::cout << "=====================================================" << std::endl;
	for (int y = 0; y < Calc.GetNumOfYears(); y++){									//Loops for each year
		for (int m = 0; m < 12; m++){												//Loops for each month in the year

			tempDouble = Calc.GetOpenAmount() + Calc.GetMonthlyDeposit();
			Calc.SetTotalAmount(tempDouble);

			tempDouble = Calc.GetTotalAmount() + Calc.CalcInterest(Calc.GetOpenAmount(), Calc.GetMonthlyDeposit(), Calc.GetAnnualInterest());
			Calc.SetClosingBalance(tempDouble);

			Calc.AddSumAnnInterest(Calc.CalcInterest(Calc.GetOpenAmount(), Calc.GetMonthlyDeposit(), Calc.GetAnnualInterest()));

			Calc.SetOpenAmount(tempDouble);
		}
		std::cout << std::setw(2) << y+1 << std::setw(18) << Calc.GetClosingBalance() << std::setw(18) << Calc.GetSumAnnInterest() << std::endl;
		Calc.SetSumAnnInterest(0.00);
	}

	Calc.SetTotalAmount(0.00);
	Calc.SetClosingBalance(0.00);
	Calc.SetSumAnnInterest(0.00);
	Calc.SetOpenAmount(Calc.GetInitialInvest());									//Sets Open amount back to the value input by user

	std::cout << std::endl << std::endl;


	std::cout << "Balance and Interest Without Additional Monthly Deposits" << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << " Year    Year End Balance    Year End Earned Interest" << std::endl;
	std::cout << "=====================================================" << std::endl;
	for (int y = 0; y < Calc.GetNumOfYears(); y++){									//Loops for each year
		for (int m = 0; m < 12; m++){												//Loops for each month in the year

			tempDouble = Calc.GetOpenAmount();
			Calc.SetTotalAmount(tempDouble);

			tempDouble = Calc.GetTotalAmount() + Calc.CalcInterest(Calc.GetOpenAmount(), 0.00, Calc.GetAnnualInterest());
			Calc.SetClosingBalance(tempDouble);

			Calc.AddSumAnnInterest(Calc.CalcInterest(Calc.GetOpenAmount(), 0.00, Calc.GetAnnualInterest()));

			Calc.SetOpenAmount(tempDouble);
		}
		std::cout << std::setw(2) << y+1 << std::setw(18) << Calc.GetClosingBalance() << std::setw(18) << Calc.GetSumAnnInterest() << std::endl;
	}

	return 0;
}
