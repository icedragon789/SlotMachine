//
// Created by benjp on 018, 3/18/2020.
//

#include "SlotMachine.hpp"
#include "Reel.hpp"
#include "PayoutTable.cpp"

#define cost 1

SlotMachine::SlotMachine() {
    vector<char> toReel;
    toReel.push_back('A');
    toReel.push_back('A');
    toReel.push_back('A');
    toReel.push_back('A');
    toReel.push_back('B');
    toReel.push_back('B');
    toReel.push_back('B');
    toReel.push_back('C');
    toReel.push_back('C');
    toReel.push_back('7');
    ptr1 = r1.setUpReel(toReel);
    ptr2 = r2.setUpReel(toReel);
    ptr3 = r3.setUpReel(toReel);
}

template <typename N>
vector<N> SlotMachine::Spin() {
    vector<N> results;
    int rand1;
    int rand2;
    int rand3;

    srand(time(NULL));
    rand1 = (rand() % 101) + 1;
    rand2 = (rand() % 101) + 1;
    rand3 = (rand() % 101) + 1;

    N res1 = ptr1->spinCLList(ptr1, rand1);
    N res2 = ptr2->spinCLList(ptr2,rand2);
    N res3 = ptr3->spinCLList(ptr3,rand3);

    results.push_back(res1);
    results.push_back(res2);
    results.push_back(res3);

    cout << endl;

    return results;
}

SlotMachine::~SlotMachine() {
    delete ptr1;
    delete ptr2;
    delete ptr3;
}