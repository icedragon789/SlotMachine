//
// Created by benjp on 018, 3/18/2020.
//

#ifndef SLOTS_REEL_HPP
#define SLOTS_REEL_HPP
#include <iostream>
#include <vector>

#include "ReelNode.hpp"

using namespace std;

template <typename R>
class Reel {
public:
    Node<R> *head;
    Node<R>* setUpReel(vector<R> v) {
        Node<R> *head = NULL;
        for(int i =0; i<v.size();i++) {
            head->push(&head, v[i]);
        }
        return head;
    }
    ~Reel() { delete head; }
};

#endif //SLOTS_REEL_HPP
