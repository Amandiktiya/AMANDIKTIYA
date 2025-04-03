
#include <iostream>
#include <map>
#include <string>

using namespace std;

// Function to convert currency
double convertCurrency(double amount, const string& fromCurrency, const string& toCurrency) {
    // Exchange rates (as of a specific date)
    map<pair<string, string>, double> exchangeRates = {
            {make_pair("USD", "EUR"), 0.89},
            {make_pair("USD", "GBP"), 0.77},
            {make_pair("USD", "JPY"), 109.35},
            // Add more exchange rates as needed
    };

    // Check if conversion rates exist for the given currencies
    if (exchangeRates.find(make_pair(fromCurrency, toCurrency)) != exchangeRates.end()) {
        double exchangeRate = exchangeRates[make_pair(fromCurrency, toCurrency)];
        return amount * exchangeRate;
    } else {
        cout << "Conversion not available for the provided currencies." << endl;
        return 0.0;
    }
}

int main() {
    double amount;
    string fromCurrency, toCurrency;

    // Input amount and currencies
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter from currency (e.g., USD): ";
    cin >> fromCurrency;
    cout << "Enter to currency (e.g., EUR): ";
    cin >> toCurrency;

    // Convert currency
    double convertedAmount = convertCurrency(amount, fromCurrency, toCurrency);

    // Output result
    if (convertedAmount != 0.0) {
        cout << amount << " " << fromCurrency << " is equivalent to " << convertedAmount << " " << toCurrency << endl;
    }

    return 0;
}