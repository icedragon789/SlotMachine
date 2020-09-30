//
// Created by benjp on 018, 3/18/2020.
//

#ifndef SLOTS_GAME_HPP
#define SLOTS_GAME_HPP

#include <vector>
#include <cctype>
#include <iostream>
#include "Game.hpp"
#include "SlotMachine.cpp"

using namespace std;

class Game {
public:
    Game() {};
    template <typename G>
    //game loop
    int gameLoop() {
        char again;
        PayoutTable payment;
        double payout;
        //create a vector to be used for the slot machine
        vector<G> pass;
        SlotMachine startUp;
        cout << "Welcome to the slot machine program!" << endl;
        //while has funds
        while(payment.getBal() > 0) {
            cout << "Spin? (Y/N)" << endl;
            cin >> again;
            if(toupper(again) == 'N') {
                break;
            }
            pass = startUp.Spin<G>();
            payout=payment.detCombo(pass);
            payment.updateBal(payout, cost);
        }
        //out of funds
        if(payment.getBal()==0) {
            cout << "Balance: $" << payment.getBal() << endl;
            cout << "You are out of funds!" << endl;
        }
        cout << "Goodbye!";
        return 0;

    }
};


#endif //SLOTS_GAME_HPP
