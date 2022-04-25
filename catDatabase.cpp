///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdexcept>
#include "Cat.h"

Cat* catDatabaseHeadPointer = nullptr;

void initializeDatabase() {
    if( catDatabaseHeadPointer != nullptr ){
        throw std::logic_error(PROGRAM_NAME ": Database already empty");
    }
/* what else is supposed to happen here i feel crazy */
}

bool isCatInDatabase( const Cat* aCat ) {
    if( aCat == nullptr ) {
        throw std::logic_error(PROGRAM_NAME ": Invalid pointer");
    }

    Cat* current = catDatabaseHeadPointer;
    while( current != nullptr ) {
        if( current == aCat ) {
            return true;
        }
        current = current->next;
    }
    return false;
}

bool validateDatabase() {
    Cat* current = catDatabaseHeadPointer;

    while( current != nullptr ) {
        if( !current->validate() ) {
            return false;
        }
        current = current->next;
    }

    return true;

}
/*
Cat* findCatByName( const char* name ) {
    Cat* current = catDatabaseHeadPointer;

    while( current != nullptr ) {
        if( current->getName() == name ) {
            return current;
        }
    }
    return nullptr;
}
*/
