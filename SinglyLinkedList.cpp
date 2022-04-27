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
#include <cassert>

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



}


