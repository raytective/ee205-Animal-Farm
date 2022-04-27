///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "List.h"
#include <cassert>

bool List::empty() const noexcept {
    if( count == 0 && head == nullptr ) {
        return true;
    }

    return false;
}

unsigned int List::size() const noexcept {
    return count;
}

bool List::isIn(Node *aNode) const {
    if( aNode == nullptr ) {
        throw invalid_argument( "Node can't be nullptr");
    }

    Node* current = head;
    while( head != nullptr ) {
        if( current == aNode ) {
            return true;
        }
        current = current->next;
    }

    return false;
}

bool List::isSorted() const noexcept {
    for( Node* current = head; current->next != nullptr; current = current->next) {
        if( current->next > current) {
            return false;
        }
    }

    return true;
}

Node *List::get_first() const noexcept {
    if( head == nullptr ) {
        return nullptr;
    }
    return head->next;

}

void List::deleteAllNotes() noexcept {
    assert( validate() );
    while( head != nullptr ) {
        pop_front();
    }
#ifdef DEBUG
    cout << PROGRAM_NAME << ": All Nodes have been deleted" << endl ;
#endif
    assert( validate() );
}

Node *List::get_next(const Node *currentNode) {
    if( currentNode == nullptr ) {
        throw invalid_argument( "Current Node can't be pointing to NULL" );
    }

    return currentNode->next;
}

