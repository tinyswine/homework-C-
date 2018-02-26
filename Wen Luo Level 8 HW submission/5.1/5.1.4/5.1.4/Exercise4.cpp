#include "boost/random.hpp"
#include <ctime>			// std::time
#include <map>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Mersenne Twister.
	boost::random::mt19937 myRng;

	//Set the seed.
	myRng.seed(static_cast<boost::uint32_t> (std::time(0)));

	//Uniform in range [1,6]
	boost::random::uniform_int_distribution<int> six(1, 6);

	map <int, long> statistics; //Structure to hold outcome + frequencies
	int outcome;  //Current outcome

	long total = 1000000;

	for (int i = 1; i <= 6; i++)
	{
		statistics[i] = 0;   //initialization
	}

	for (long i = 0; i < total; i++)
	{
		outcome = six(myRng);  //get the outcome
		statistics[outcome] ++;   //count
	}

	double percent;

	for (int i = 1; i <= 6; i++)
	{
		percent = 1.0 * statistics[i] / total;
		cout << "Trial " << i << " has " << setprecision(6) << percent << "% outcomes" << endl;
	}

	return 0;

	
}