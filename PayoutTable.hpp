//
// Created by benjp on 018, 3/18/2020.
//

#ifndef SLOTS_PAYOUTTABLE_HPP
#define SLOTS_PAYOUTTABLE_HPP

#include <vector>
#include <algorithm>

class PayoutTable {
private:
    double balance;
public:
    double getBal() { return balance; }
    PayoutTable();
    double updateBal(double payout, double costPerSpin);
    template <typename N>
    double detCombo(vector<N> myvector);
};


#endif //SLOTS_PAYOUTTABLE_HPP
