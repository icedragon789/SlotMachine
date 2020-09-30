//
// Created by benjp on 018, 3/18/2020.
//

#include "PayoutTable.hpp"
#define pay1 7
#define pay2 20
#define pay3 75
#define pay4 600

using namespace std;

PayoutTable::PayoutTable() {
     balance = 100;
}

double PayoutTable::updateBal(double payout, double costPerSpin) {
    balance += payout-costPerSpin;
    cout << "\nBalance: $" << balance << endl;
}

template <typename N>
double PayoutTable::detCombo(vector<N> myvector){
    if( adjacent_find( myvector.begin(), myvector.end(), not_equal_to<>() ) == myvector.end() ) {
        if( myvector[0] == 'A') {
            return pay1;
        }
        else if( myvector[0] == 'B') {
            return pay2;
        }
        else if( myvector[0] == 'C') {
            return pay3;
        }
        else if( myvector[0] == '7') {
            cout << "JACKPOT!" << endl;
            return pay4;
        }
    }
    return 0;
}