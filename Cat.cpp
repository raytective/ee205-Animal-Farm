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
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Cat.h"
#include "convertCats.h"

#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

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
Gender Cat::getGender() const noexcept {
    return gender;
}

Breed Cat::getBreed() const noexcept {
    return breed;
}

Weight Cat::getWeight() const noexcept {
    return weight;
}

bool Cat::isFixed() const noexcept {
    return false;
}


// Setters
void Cat::setName(const char *newName) {
    for( long unsigned j=0; j <= strlen(newName); j++ ) {
        Cat::name[j] = newName[j];
    }

}

void Cat::setGender(Gender newGender) {
    Cat::gender = newGender;
}

void Cat::setBreed(Breed newBreed) {
    Cat::breed = newBreed;
}


void Cat::setWeight(Weight newWeight) {
    Cat::weight = newWeight;

}

const char *Cat::getName() const noexcept {
    return name;
}

bool Cat::print() const noexcept {
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genderName( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedName( getBreed() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}

bool Cat::validate() const noexcept {
    return false;
}

bool Cat::fixCat() noexcept {
    return false;
}

Cat::~Cat() {
}





