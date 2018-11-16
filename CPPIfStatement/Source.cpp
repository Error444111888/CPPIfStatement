#include <iostream>
#include <string>

//This is for the std::precision for showing man decimal digits
#include <iomanip>

using namespace std;

//If statements


int main()
{
	
	double CurrentBTCUSDPrice = 8542.3547;
	double InitialBTCPrice = 6502.532;
	double BoughtBTCAmount = 10;

	double InitialBTCTotalUSD = BoughtBTCAmount * InitialBTCPrice;
	double CurrentBTCTotalUSD = BoughtBTCAmount * CurrentBTCUSDPrice;


	double CurrentLTCUSDPrice = 56.4678;
	double InitialLTCUSDPrice = 43.15;
	double BoughtLTCAmount = 100;

	double InitialLTCTotalUSD = BoughtBTCAmount * InitialLTCUSDPrice;
	double CurrentLTCTotalUSD = BoughtBTCAmount * CurrentLTCUSDPrice;

	double InitialLTCValue = (InitialBTCPrice * BoughtBTCAmount) / InitialLTCUSDPrice;
	double CurrentLTCValue = (CurrentBTCUSDPrice * BoughtBTCAmount) / CurrentLTCUSDPrice;



	// If there`s profit in the BTC
	if (InitialBTCTotalUSD < CurrentBTCTotalUSD)
	{
		if (CurrentLTCValue > InitialLTCValue)
		{

			//You can use multiple cout under each other
			cout << "Good news" << endl;
			cout << "You have some USD and LTC profit" << endl;
			cout << "You can collect them if you sell. Sooooo..." << endl;
			cout << "Sell! Sell! Sell!" << endl;
		}
		
		
	}
	

	else if (InitialBTCTotalUSD > CurrentBTCTotalUSD)
	{
		cout << "Buy Buy Buy" << endl;
	}

	else if (InitialBTCTotalUSD == CurrentBTCTotalUSD)
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