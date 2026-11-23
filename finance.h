#include <string>
#include <cmath>

class financialCalculator {
private:
	double spotPrice;
	double strikePrice;
	double riskfreeRate;
	double volatility_sigma;
	double tau_T;

public:
	financialCalculator(double spot, double strike, double riskfree, double vol, double tau);
	double calculateFutureValue(double presentValue, double rate, int years);
	double calculatePresentValue(double futureValue, double rate, int years);
	double calculateBlackScholesCall(double S, double K, double r, double sigma, double T);
};

