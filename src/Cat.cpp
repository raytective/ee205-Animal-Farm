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
#include <cassert>
#include "Cat.h"

using namespace std;

const string Cat::SPECIES_NAME = "Felis Catus";
const Weight::t_weight Cat::MAX_WEIGHT = 40;


string Cat::getName() const noexcept {
    return name;
}

void Cat::setName(const string &newName) {
    if(validateName( newName ) == false ) {
        throw out_of_range( "Can't give Cat a blank name" );
    }
    name = newName;
}

bool Cat::isFixed() const noexcept {
    return isCatFixed;
}

void Cat::fixCat() noexcept {
    Cat::isCatFixed = true;
    Cat::validate();
}

string Cat::speak() const noexcept {
    return "Meow";
}

void Cat::dump() const noexcept {
    Mammal::dump();

    Cat::validate();
    FORMAT_LINE_FOR_DUMP( "Cat", "name" ) << name << endl;
    FORMAT_LINE_FOR_DUMP( "Cat", "isFixed" ) << isFixed() << endl;
}

bool Cat::validate() const noexcept {
    Animal::validate();
    assert(validateName(name ));

    return true;
}

bool Cat::validateName(const string &newName) {
    if( newName.empty() == true ) {
        return false;
    }
    return true;
}