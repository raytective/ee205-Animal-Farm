///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   25_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "config.h"
/// FINISHED ; RECHECK LATER

class Node {
    friend class List;
    friend class SinglyLinkedList;

public:
    virtual void dump() const {
        PRINT_HEADING_FOR_DUMP;
        FORMAT_LINE_FOR_DUMP( "Node", "this" ) << this << endl;
    }

    virtual bool validate() const noexcept {
        if( next == nullptr ) {
            return true;
        }
        if( next == next->next ) {
            return false;
        }
        return true;
    }

    virtual bool operator>( const Node &rightSide ) {
        return compareByAddress(this, &rightSide);
    }

protected:
    static bool compareByAddress( const Node *node1, const Node *node2 ) {
        if( node1 > node2 ) {
            return true;
        }
        return false;
    }

    Node* next = nullptr;
};


