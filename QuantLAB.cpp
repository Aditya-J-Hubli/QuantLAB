#include <iostream>
#include <cmath>
#include "finance.h"
using namespace std;

int main() {
	double spotPrice, strikePrice, riskfreeRate, volatility_sigma, tau_T;
	cout << "Enter SPOT price: ";
	cin >> spotPrice;

	cout << "Enter STRIKE price: ";
	cin >> strikePrice;

	cout << "Enter RISK-FREE rate (as a decimal): ";
	cin >> riskfreeRate;

	cout << "Enter Volatility (as a decimal): ";
	cin >> volatility_sigma;

	cout << "Enter Time to Maturity: ";
	cin >> tau_T;

	financialCalculator calculator(spotPrice, strikePrice, riskfreeRate, volatility_sigma, tau_T);

	double pv, fv;
	int years;
	cout << "enter present Value: ";
	cin >> pv;

	cout << "enter future Value: ";
	cin >> fv;

	cout << "Enter number of years: ";
	cin >> years;

	
	cout << "Future Value: " << calculator.calculateFutureValue(pv, riskfreeRate, years) << '\n';
	cout << "Present Value: " << calculator.calculatePresentValue(fv, riskfreeRate, years) << '\n';
	cout << "Black-Scholes call Price: " << calculator.calculateBlackScholesCall(spotPrice, strikePrice, riskfreeRate, volatility_sigma, tau_T) << '\n';

	return 0;
}
