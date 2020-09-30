//
// Created by benjp on 018, 3/18/2020.
//

#ifndef SLOTS_REELNODE_HPP
#define SLOTS_REELNODE_HPP

#include <iostream>

using namespace std;

template <typename N>
class Node {
public:
    N data;
    Node *next;
    Node* getNext() { return next; }

    //add an element
    void push(Node **head_ref, N data) {
        Node *ptr1 = new Node();

        Node<N> *temp = *head_ref;
        ptr1->data = data;
        ptr1->next = *head_ref;

        // If linked list is not null, set the next of last node.
        if (*head_ref != NULL) {
            while (temp->next != *head_ref)
                temp = temp->next;
            temp->next = ptr1;
        } else {
            ptr1->next = ptr1;
        }
        *head_ref = ptr1;
    }
    //print elements
    void printCLList(Node *head) {
        Node<N> *temp = head;
        if (head != NULL) {
            do {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp != head);
        cout << endl;
        } else {
            cout << "List empty";
        }
    }

    N spinCLList(Node *head, int num) {
        //creates an empty value of type N.
        N x;
        Node<N> *temp = head;
        int i = 0;
        if (i<num) {
            do {
                temp = temp->next;
                i++;
            } while (i<num);
            cout << temp->data << " ";
        } else {
            cout << "List empty";
            return x;
        }
        return temp->data;
    }
    ~Node() { delete next; }
};


#endif //SLOTS_REELNODE_HPP
