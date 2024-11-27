#include <iostream>
using namespace std;

double CalculateROI(double initialInvest, double finalInvestValue) {
    double roi = 0.0;
    double netProfit = finalInvestValue - initialInvest;

    if (initialInvest != 0) {
        roi = (netProfit / initialInvest) * 100;
        cout << "Net Profit: " << netProfit << endl;
        cout << "ROI: " << roi << "%" << endl;
    } else {
        cout << "Initial investment cannot be zero." << endl;
    }
    return roi; 
}

int main() {
    double initialInvest, finalInvestValue;
    cout << "Enter initial investment: ";
    cin >> initialInvest;
    cout << "Enter final investment value: ";
    cin >> finalInvestValue;
    double roi = CalculateROI(initialInvest, finalInvestValue);
    return 0;
}
