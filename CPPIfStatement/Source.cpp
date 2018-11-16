#include <iostream>
#include <string>

//This is for the std::precision for showing man decimal digits
#include <iomanip>

using namespace std;

//If statements


int main()
{
	
	double P = 8542.3547;
	double x = 6502.532;
	double y = 10;

	double r = y * x;
	double t = y * P;


	double f = 56.4678;
	double g = 43.15;
	double h = 100;

	double v = y * g;
	double b = y * f;

	double n = (x * y) / g;
	double m = (P * y) / f;



	if (r < t)
	{
		if (m > n)
		{

			//You can use multiple cout under each other
			cout << "Good news" << endl;
			cout << "You have some USD and LTC profit" << endl;
			
		}
		
		
	}
	

	else if (r > t)
	{
		cout << "Buy Buy Buy" << endl;
	}

	else if (r == t)
	{
		cout << "Wait Wait Wait" << endl;
	}

	else
	{
		cout << "None of the conditions are met in both currencies profit" << endl;
	}
	

	// Showing lots of decimal digits
	double test = 10.0 / 3.0;
	std::cout << std::setprecision(100) << test;


	cin.get();
	return 0;

}