///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "catDatabase.h"
#include "Cat.h"
using namespace std;

bool addCat( Cat* newCat ) {
    validateDatabase();
    newCat->validate();

    newCat->next = catDatabaseHeadPointer;
    catDatabaseHeadPointer = newCat;
    validateDatabase();
    return true;
}
