/*
 * InvestCalc.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: 1766946_snhu
 */
#include "InvestCalc.h"
#include <iostream>
#include <iomanip>
using namespace std;

InvestCalc::InvestCalc(){
	m_initialInvest = 0.00;
	m_monDeposit = 0.00;
	m_annInterest = 0.00;
	m_numOfYears = 0;
	m_openAmount = 0.00;
	m_totalAmount = 0.00;
	m_interestAmount = 0.00;
	m_closingBalance = 0.00;
	m_sumAnnInterest = 0.00;
}

void InvestCalc::SetInitialInvest(double t_initialInvest){
	m_initialInvest = t_initialInvest;
}

void InvestCalc::SetMonthlyDeposit(double t_monDeposit){
	m_monDeposit = t_monDeposit;

}

void InvestCalc::SetAnnualInterest(double t_annInterest){
	m_annInterest = t_annInterest;
}

void InvestCalc::SetNumOfYears(int t_numOfYears){
	m_numOfYears = t_numOfYears;
}

void InvestCalc::SetOpenAmount(double t_openAmount){
	m_openAmount = t_openAmount;
}

void InvestCalc::SetTotalAmount(double t_totalAmount){
	m_totalAmount = t_totalAmount;
}

void InvestCalc::SetInterestAmount(double t_interestAmount){
	m_interestAmount = t_interestAmount;
}

void InvestCalc::SetClosingBalance(double t_closingBalance){
	m_closingBalance = t_closingBalance;
}

void InvestCalc::SetSumAnnInterest(double t_sumAnnInterest){
	m_sumAnnInterest = t_sumAnnInterest;
}

void InvestCalc::AddSumAnnInterest(double t_sumAnnInterest){
	m_sumAnnInterest += t_sumAnnInterest;
}

const double InvestCalc::GetInitialInvest(){
	return m_initialInvest;
}

const double InvestCalc::GetMonthlyDeposit(){
	return m_monDeposit;
}

const double InvestCalc::GetAnnualInterest(){
	return m_annInterest;
}

const int InvestCalc::GetNumOfYears(){
	return m_numOfYears;
}

const double InvestCalc::GetOpenAmount(){
	return m_openAmount;
}

const double InvestCalc::GetTotalAmount(){
	return m_totalAmount;
}

const double InvestCalc::GetInterestAmount(){
	return m_interestAmount;
}

const double InvestCalc::GetClosingBalance(){
	return m_closingBalance;
}

const double InvestCalc::GetSumAnnInterest(){
	return m_sumAnnInterest;
}

double InvestCalc::CalcInterest(double t_openAmount, double t_monDeposit, double t_annInterest){
	return (t_openAmount + t_monDeposit) * ((t_annInterest/100)/12);
}

