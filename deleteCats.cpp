///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <cstdlib>
#include "Cat.h"
#include "catDatabase.h"
using namespace std;
#include <iostream>

/*
bool deleteAllCats() {
    Cat* current = catDatabaseHeadPointer;
    Cat* tmp;
    validateDatabase();
    while (current != NULL) {
        tmp = current->next;
        free(current);
        current = tmp;
    }
    cout << "Deleted database" << endl;
    catDatabaseHeadPointer = nullptr;
    validateDatabase();

    return true;
}


bool deleteCat(Cat* deletedCat ) {
    Cat* tmp = catDatabaseHeadPointer;
    if( catDatabaseHeadPointer == nullptr ) {
        validateDatabase();
        return true;    // database already empty
    }

    if( deletedCat == catDatabaseHeadPointer ) {
        catDatabaseHeadPointer = tmp->next;
        free(tmp);
        validateDatabase();
        return true;
    }

    while( tmp != nullptr ){
        if( tmp->next == deletedCat ) {
            tmp->next = deletedCat->next;
            free(deletedCat);

            validateDatabase();
            return true;
        }
        tmp = tmp->next;
    }

    return false;

}

*/