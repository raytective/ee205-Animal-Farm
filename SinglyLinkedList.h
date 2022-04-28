///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.h
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "List.h"

class SinglyLinkedList: public List {
public:
    SinglyLinkedList();

public:
    void push_front( Node *newNode );
    Node* pop_front() noexcept override;
    void insert_after ( Node* currentNode, Node* newNode );
    void dump() const noexcept override;
    bool validate() const noexcept override;

};
