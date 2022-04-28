///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "SinglyLinkedList.h"
#include "config.h"
#include <cassert>

SinglyLinkedList::SinglyLinkedList() {
    assert(SinglyLinkedList::validate());
}


void SinglyLinkedList::push_front(Node *newNode) {
    if( newNode == nullptr ) {
        throw invalid_argument( "newNode can't be null" );
    }
    if( newNode->validate() == false ) {
        throw domain_error( "newNode isn't valid" );
    }
    if(isIn( newNode ) == true ) {
        throw logic_error( "Node already exists in container" );
    }

    SinglyLinkedList::validate();
    if( head != nullptr ) {
        newNode->next = head;
        head = newNode;
    } else {
        newNode->next = nullptr;
        head = newNode;
    }
    count++;
}

Node *SinglyLinkedList::pop_front() noexcept {
    SinglyLinkedList::validate();
    if( head == nullptr ) {
        return nullptr;
    }

    Node* temp = head;
    head = head->next;

    delete temp;
    count--;

    SinglyLinkedList::validate();
    return head;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    if( head == nullptr ) {
        throw logic_error( "List empty" );
    }
    if( currentNode == nullptr ) {
        throw invalid_argument( "Current node can't be nullptr");
    }
    if( isIn( currentNode ) == false ) {
        throw logic_error( "Node not found in list" );
    }

    if( newNode == nullptr ) {
        throw invalid_argument( "Can't insert node to nullptr" );
    }
    if( newNode->Node::validate() == false ) {
        throw domain_error( "New node not valid" );
    }
    if( isIn( newNode ) == true ) {
        throw logic_error("Node already in list :(");
    }

    SinglyLinkedList::validate();
    newNode->next = currentNode->next;
    currentNode->next = newNode;
    count++;
    SinglyLinkedList::validate();
}

void SinglyLinkedList::dump() const noexcept {
    SinglyLinkedList::validate();

    cout << "SinglyLinkedList:  head=[" << head << "]" << endl;
    for( Node* temp=head ; temp != nullptr ; temp=temp->next ) {
        temp->dump();
    }
}

bool SinglyLinkedList::validate() const noexcept {
    unsigned int counter=0;
    Node* tmp = head;

    while( tmp != nullptr ) {
        counter++;
        tmp = tmp->next;
    }

    if( counter == count ) {
        return true;
    } else {
        return false;
    }

}
