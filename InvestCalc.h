/*
 * InvestCalc.h
 *
 *  Created on: Apr 2, 2020
 *      Author: 1766946_snhu
 */

#ifndef INVESTCALC_H_
#define INVESTCALC_H_

class InvestCalc {
	public:
		InvestCalc();
		void SetInitialInvest(double t_initialInvest);
		void SetMonthlyDeposit(double t_monDeposit);
		void SetAnnualInterest(double t_annInterest);
		void SetNumOfYears(int t_numOfYears);
		void SetOpenAmount(double t_openAmount);
		void SetTotalAmount(double t_totalAmount);
		void SetInterestAmount(double t_interestAmount);
		void SetClosingBalance(double t_closingBalance);
		void SetSumAnnInterest(double t_sumAnnInterest);
		void AddSumAnnInterest(double t_sumAnnInterest);
		const double GetInitialInvest();
		const double GetMonthlyDeposit();
		const double GetAnnualInterest();
		const int GetNumOfYears();
		const double GetOpenAmount();
		const double GetTotalAmount();
		const double GetInterestAmount();
		const double GetClosingBalance();
		const double GetSumAnnInterest();
		double CalcInterest(double t_openAmount, double t_monDeposit, double t_annInterest);

	private:
		double m_initialInvest;
		double m_monDeposit;
		double m_annInterest;
		int m_numOfYears;
		double m_openAmount;
		double m_totalAmount;
		double m_interestAmount;
		double m_closingBalance;
		double m_sumAnnInterest;
};



#endif /* INVESTCALC_H_ */
