///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   05_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Cat.h"
#include <iostream>
using namespace std;

// Constructors
Cat::Cat() {
    setName( "");
    setGender( UNKNOWN_GENDER );
    setBreed( UNKNOWN_BREED );
    setWeight(UNKNOWN_WEIGHT );
}

Cat::Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight) {
    Cat();
    setName( newName );
    setGender( newGender );
    setBreed( newBreed );
    setWeight( newWeight );

}

// Getters
Gender Cat::getGender() const {
    return gender;
}

Breed Cat::getBreed() const {
    return breed;
}

bool Cat::isCatFixed() const {
    return isFixed;
}

Weight Cat::getWeight() const {
    return weight;
}


// Setters
void Cat::setName(const char *newName) {

}

void Cat::setGender(Gender newGender) {
    if( gender != UNKNOWN_GENDER && newGender != UNKNOWN_GENDER )
        cout << "pee" << endl;

    Cat::gender = newGender;

}

void Cat::setBreed(Breed newBreed) {
    if( breed != UNKNOWN_BREED && newBreed != UNKNOWN_BREED )
        cout << "pee" << endl;

    Cat::breed = newBreed;
}

bool Cat::fixCat() {
    return true;
}

void Cat::setWeight(Weight newWeight) {
    if( newWeight <= 0 )
        cout << "pee" << endl;

    Cat::weight = newWeight;

}

const char *Cat::getName() const {
    return nullptr;
}

bool Cat::print() const {
    return false;
}

bool Cat::validate() const {
    return false;
}



