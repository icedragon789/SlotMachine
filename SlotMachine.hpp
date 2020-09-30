//
// Created by benjp on 018, 3/18/2020.
//
#ifndef SLOTS_SLOTMACHINE_HPP
#define SLOTS_SLOTMACHINE_HPP

#include "Reel.hpp"
#include "ReelNode.hpp"
#include <cstdlib>

class SlotMachine {
private:
    Reel<char> r1;
    Reel<char> r2;
    Reel<char> r3;
    Node<char> *ptr1;
    Node<char> *ptr2;
    Node<char> *ptr3;
public:
    template <typename N>
    vector<N> Spin();
    SlotMachine();
    ~SlotMachine();
};


#endif //SLOTS_SLOTMACHINE_HPP
