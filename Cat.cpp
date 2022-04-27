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
    memset(name, 0, MAX_NAME);
    gender = Gender::UNKNOWN_GENDER;
    breed = UNKNOWN_BREED;
    isCatFixed = false;
    weight = -1;
    //weight = UNKNOWN_WEIGHT;
}

Cat::Cat(const char *newName, const Gender newGender, const Breed newBreed, const float newWeight) {
    setName( newName );
    setGender( newGender );
    setBreed( newBreed );
    isCatFixed = false;
    setWeight( newWeight );
}

// Getters
const char *Cat::getName() const noexcept {
    return name;
}

Gender Cat::getGender() const noexcept {
    return gender;
}

Breed Cat::getBreed() const noexcept {
    return breed;
}

float Cat::getWeight() const noexcept {
    return weight;
}

bool Cat::isFixed() const noexcept {
    return isCatFixed;
}


// Setters
void Cat::setName(const char *newName) {
    validateName( newName );
    memset(name, 0, MAX_NAME);
    strcpy(Cat::name, newName );
}

void Cat::setGender(Gender newGender) {
    if( gender != Gender::UNKNOWN_GENDER ) {
        throw invalid_argument(PROGRAM_NAME ": Can't change known gender");
    }
    Cat::gender = newGender;
}

void Cat::setBreed(Breed newBreed) {
    if( breed != UNKNOWN_BREED ) {
        throw invalid_argument(PROGRAM_NAME ": Can't change known breed");
    }
    Cat::breed = newBreed;
}

void Cat::setWeight(float newWeight) {
    validateWeight( newWeight );
    Cat::weight = newWeight;
}


bool Cat::print() const noexcept {
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) <<  getGender() << endl ;
    FORMAT_LINE( "Cat", "breed" ) << getBreed() << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}

bool Cat::fixCat() noexcept {
    Cat::isCatFixed = true;
    return true;
}

Cat::~Cat() {
}


bool Cat::validateName(const char *newName) {
    if( newName == nullptr ) {
        throw invalid_argument(PROGRAM_NAME ": Name can't be null");
    }
    if( strlen( newName ) <= 0 ) {
        throw length_error( PROGRAM_NAME ": name can't be blank");
    }
    if(strlen(newName) > MAX_NAME ) {
        throw length_error(PROGRAM_NAME ": Name too long");
    }
    return true;
}

bool Cat::validateGender(const Gender newGender){
    if( newGender == Gender::UNKNOWN_GENDER ) {
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

bool Cat::validateWeight(const float newWeight) {
    if( newWeight <= 0 ) {
        throw invalid_argument(PROGRAM_NAME ": Weight can't be <= 0");
    }
    return true;
}

bool Cat::validate() const noexcept {
    try{
        validateName( name );
        validateGender( gender );
        validateBreed( breed );
        validateWeight( weight );
    } catch (exception) {
        cout<< PROGRAM_NAME ": Validation failed" << endl;
        return false;
    }

    return true;
}




