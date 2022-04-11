///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Rachel Watananbe <rkwatanao@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "Cat.h"
#include "catDatabase.h"
#include "convertCats.h"

using namespace std;

bool printAllCats() {
    Cat* current = catDatabaseHeadPointer;

    validateDatabase();
    while( current != nullptr ) {
        current->print();
        current = current->next;
    }

    return true;
}