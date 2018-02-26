#include <boost/math/distributions/exponential.hpp>
#include <boost/math/distributions/poisson.hpp>
#include <boost/math/distributions.hpp> // For non-member functions of distributions
#include <iostream>
using namespace std;

int main()
{
	using namespace boost::math;  //namespace for the distribution
	double scaleParameter = 0.5;

	//Default type is 'double'
	exponential_distribution<> myExponential(scaleParameter);

	cout.precision(10); //Set precision

	cout << "Mean: " << mean(myExponential) << endl;
	cout << "Standard Deviation: " << standard_deviation(myExponential) << endl;

	// Distributional properties
	double x = 10.25;

	// Other properties
	cout << "\n***normal distribution: \n";
	cout << "mean: " << mean(myExponential) << endl;
	cout << "variance: " << variance(myExponential) << endl;
	cout << "median: " << median(myExponential) << endl;
	cout << "mode: " << mode(myExponential) << endl;
	cout << "kurtosis excess: " << kurtosis_excess(myExponential) << endl;
	cout << "kurtosis: " << kurtosis(myExponential) << endl;
	cout << "characteristic function: " << chf(myExponential, x) << endl;
	cout << "hazard: " << hazard(myExponential, x) << endl;
	
	//probability density function and cumulative distribution function
	cout << "pdf: " << pdf(myExponential, x) << endl;
	cout << "cdf: " << cdf(myExponential, x) << endl;

	poisson_distribution<double> myPoisson(2);

	cout << "Mean: " << mean(myPoisson) << endl;
	cout << "Standard Deviation: " << standard_deviation(myPoisson) << endl;

	int y = 5;

	cout << "pdf: " << pdf(myPoisson, y) << endl;
	cout << "cdf: " << cdf(myPoisson, y) << endl;

	vector<double> pdfList;
	vector<double> cdfList;

	int start = 0;
	int end = 60;
	long N = 30;		// Number of subdivisions

	y = 0.0;
	int h = (end - start) / N;

	for (long j = 1; j <= N; ++j)
	{
		pdfList.push_back(pdf(myPoisson, y));
		cdfList.push_back(cdf(myPoisson, y));

		y += h;
	}

	for (long j = 0; j < pdfList.size(); ++j)
	{
		cout << pdfList[j] << ", ";

	}

	cout << "***" << endl;

	for (long j = 0; j < cdfList.size(); ++j)
	{
		cout << cdfList[j] << ", ";

	}


	return 0;
}