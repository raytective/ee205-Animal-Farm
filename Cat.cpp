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
#include <stdexcept>
#include <cstring>
#include "Cat.h"
#include "convertCats.h"
#include "config.h"

#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

using namespace std;

// Constructors
Cat::Cat() {
    next = nullptr;
    setName( "");
    setGender( UNKNOWN_GENDER );
    setBreed( UNKNOWN_BREED );
    isCatFixed = false;
    setWeight(UNKNOWN_WEIGHT );
}

Cat::Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight) {
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

bool Cat::fixCat() noexcept {
    return false;
}

Cat::~Cat() {
    Cat();
}

bool Cat::validateName(const char *newName) {
    if( newName == nullptr ) {
        throw invalid_argument(PROGRAM_NAME ": Name can't be null");
    }
    if( newName == "" ) {
        throw invalid_argument(PROGRAM_NAME ": Name can't be empty");
    }
    if(strlen(newName) > MAX_NAME ) {
        throw length_error(PROGRAM_NAME ": Name too long");
    }
    return true;
}

bool Cat::validateGender(const Gender newGender){
    if( newGender == UNKNOWN_GENDER ) {
        throw invalid_argument(PROGRAM_NAME ": Gender must be known");
    }
    return true;
}

bool Cat::validateBreed(const Breed newBreed) {
    if( newBreed == UNKNOWN_BREED ) {
        throw invalid_argument(PROGRAM_NAME ": Breed must be known");
    }
    return true;
}

bool Cat::validateWeight(const Weight newWeight) {
    if( newWeight < 0 ) {
        throw invalid_argument(PROGRAM_NAME ": Weight can't be < 0");
    }
    return true;
}

bool Cat::validate() const noexcept {
    validateName( name );
    validateGender( gender );
    validateBreed( breed );
    validateWeight( weight );
    return true;
}




