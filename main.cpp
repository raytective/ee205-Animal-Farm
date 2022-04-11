///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file main.c
/// @version 1.0
///
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <assert.h>
#include <cstring>

#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"
#include "convertCats.h"
#include "config.h"
#include "Cat.h"

#define MAX_CAT_NAME "kFcUPVRagzPlZAPBAKZyXxtVuETYWnHGEDvnPTEMNfnVjDUAFa"
#define LONG_CAT_NAME "kFcUPVRagzPlZAPBAKZyXxtVuETYWnHGEDvnPTEMNfnVjDUAFaB"

using namespace std;

int main(){

    cout << "Starting " << PROGRAM_NAME << endl;

    initializeDatabase();
#ifdef DEBUG
    Cat badCat = Cat();
    assert(strlen(badCat.getName()) == 0);
    assert(badCat.getGender() == UNKNOWN_GENDER);
    assert(badCat.getBreed() == UNKNOWN_BREED);
    assert(badCat.isFixed() == false);
    assert(badCat.getWeight() == -1);
    assert(!badCat.validate());

    try {
        badCat.setName(nullptr);
        assert(false);
    } catch(exception) {
        cout << "nullptr exception caught" << endl;
    }
    try {
        badCat.setName("");
        assert(false);
    } catch(exception) {
        cout << "blank exception caught" << endl;
    }

    badCat.setName("a");
    badCat.setName(MAX_CAT_NAME);
    try{
        badCat.setName(LONG_CAT_NAME);
        assert(false);
    } catch(exception) {
        cout << "Long cat name caught" << endl;
    }

    badCat.setGender(MALE);
    try{
        badCat.setGender(FEMALE);
        assert(false);
    } catch(exception) {
        cout<< "Gender error caught" << endl;
    }

    badCat.setBreed(SPHYNX);
    try{
        badCat.setBreed(MAINE_COON);
        assert(false);
    } catch(exception) {
        cout<< "Breed error caught" << endl;
    }

    cout << badCat.isFixed() << endl;
    badCat.fixCat();
    cout << badCat.isFixed() << endl;

#endif

    addCat( new Cat("Loki", MALE, PERSIAN, 1.0));
    addCat( new Cat("Milo", MALE, MANX, 1.1));
    addCat(new Cat("Bella", FEMALE, MAINE_COON, 1.2));
    addCat(new Cat("Kali", FEMALE, SHORTHAIR, 1.3));
    addCat(new Cat("Trin", FEMALE, MANX, 1.4));
    addCat(new Cat("Chili", MALE, SHORTHAIR, 1.5));

    printAllCats();
    deleteAllCats();
    printAllCats();

    cout << "Done with " << PROGRAM_NAME << endl;

}

