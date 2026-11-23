#include <iostream>
#include <cmath>
#include "finance.h"
using namespace std;

// constructor for financialCalculator class
financialCalculator::financialCalculator(double spot, double strike, double riskfree, double vol, double tau) {
	spotPrice = spot;
	strikePrice = strike;
	riskfreeRate = riskfree;
	volatility_sigma = vol;
	tau_T = tau;
}

double financialCalculator::calculateFutureValue(double presentValue, double rate, int years) {
	return presentValue * pow(1 + rate, years);
}
//double futureValue(double presentValue, double rate, int years) {
//	return presentValue * pow(1 + rate, years);
//}

double financialCalculator::calculatePresentValue(double futureValue, double rate, int years) {
	return futureValue / pow(1 + rate, years);
}
//double PresentValue(double futureValue, double rate, int years) {
//	return futureValue / pow(1 + rate, years);
//}

double normalCDF(double x) {
	return 0.5 * (1 + erfc(-x / sqrt(2.0)));
}

double financialCalculator::calculateBlackScholesCall(double S, double K, double r, double sigma, double T) {
	double d1 = (log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * sqrt(T));
	double d2 = d1 - sigma * sqrt(T);
	return S * normalCDF(d1) - K * exp(-r * T) * normalCDF(d2);
}
//double BlackScholesCall(double S, double K, double r, double sigma, double T) {
//	double d1 = (log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * sqrt(T));
//	double d2 = d1 - sigma * sqrt(T);
//	return S * normalCDF(d1) - K * exp(-r * T) * normalCDF(d2);
//}

void printResults(double PresentValue, double futureValue, double BlackScholesCall) {
	cout << "Present Value : " << PresentValue << '\n';
	cout << "Future Value : " << futureValue << '\n';
	cout << "Black-Scholes Call Price : " << BlackScholesCall << '\n';
}