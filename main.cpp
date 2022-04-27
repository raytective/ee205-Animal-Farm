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

#include "Animal.h"
#include "Cat.h"
#include "config.h"
#include "SinglyLinkedList.h"
#include "List.h"
#include "Node.h"

#define MAX_CAT_NAME "kFcUPVRagzPlZAPBAKZyXxtVuETYWnHGEDvnPTEMNfnVjDUAFa"
#define LONG_CAT_NAME "kFcUPVRagzPlZAPBAKZyXxtVuETYWnHGEDvnPTEMNfnVjDUAFaB"

using namespace std;

int main(){

    cout << "Starting " << PROGRAM_NAME << endl;

    SinglyLinkedList catDB ;
    cout << "text" << endl;
    catDB.push_front( new Cat( "Loki", Color::CREAM, true, Gender::MALE, 1.0 ) ) ;
    cout << "text" << endl;
    catDB.push_front( new Cat( "Milo", Color::BLACK, true, Gender::MALE, 1.1 ) ) ;
    cout << "text" << endl;
    catDB.push_front( new Cat( "Bella", Color::BROWN, true, Gender::FEMALE, 1.2 ) ) ;
    cout << "text" << endl;
    catDB.push_front( new Cat( "Kali", Color::CALICO, true, Gender::FEMALE, 1.3 ) ) ;
    cout << "text" << endl;
    catDB.push_front( new Cat( "Trin", Color::WHITE, true, Gender::FEMALE, 1.4 ) ) ;
    cout << "text" << endl;
    catDB.insert_after(catDB.get_first(), new Cat( "Chili", Color::GINGER, true,
                                                   Gender::MALE, 1.5 ) );
    for( Animal* pAnimal = (Animal*)catDB.get_first() ; pAnimal != nullptr ; pAnimal =
                                                                                     (Animal*)List::get_next( (Node*)pAnimal ) ) {
        cout << pAnimal->speak() << endl;
    }
    catDB.validate() ;
    catDB.dump() ;
    catDB.deleteAllNodes() ;
    catDB.dump() ;

    /*
    initializeDatabase();

#ifdef DEBUG
    Cat badCat = Cat(); // :middle_finger:
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

    // fix default cat and check before and after it's fixed
    cout << "is not fixed? " << badCat.isFixed() << endl;
    badCat.fixCat();
    cout << "is fixed? " << badCat.isFixed() << endl;

    try {
        badCat.setWeight(0);
        assert(false);
    } catch(exception) {
        cout<< "Weight error caught" << endl;
    }


    badCat.setWeight(1.0/1024.0);
    cout << "Fractional weight? " << badCat.getWeight() << endl;

    Cat goodCat = Cat("Zazzy", FEMALE, SPHYNX, 5.0);
    assert(goodCat.validate());

    try {
        Cat testCat = Cat("", UNKNOWN_GENDER, UNKNOWN_BREED, UNKNOWN_WEIGHT);
        testCat.validate();
        assert(false);
    } catch(exception) {
        cout<< "Invalid cat caught" << endl;
    }
#endif

    addCat( new Cat("Loki", Gender::MALE, PERSIAN, 1.0));
    addCat( new Cat("Milo", Gender::MALE, MANX, 1.1));
    addCat(new Cat("Bella", Gender::FEMALE, MAINE_COON, 1.2));
    addCat(new Cat("Kali", Gender::FEMALE, SHORTHAIR, 1.3));
    addCat(new Cat("Trin", Gender::FEMALE, MANX, 1.4));
    addCat(new Cat("Chili", Gender::MALE, SHORTHAIR, 1.5));

    // confirm findCatByName returns correct cat
    findCatByName("Bella")->print();

    // confirm findCatByName returns null if cat isn't found
    if(findCatByName("Belinda") == nullptr)
        cout<< "Unable to find cat" << endl;


    printAllCats();
    deleteAllCats();
    printAllCats();
*/
    cout << "Done with " << PROGRAM_NAME << endl;

}

