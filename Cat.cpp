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

// Constructors
Cat::Cat() {

}

Cat::Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight) {

}

// Getters
Gender Cat::getGender() const {
    return UNKNOWN_GENDER;
}

Breed Cat::getBreed() const {
    return PERSIAN;
}

bool Cat::isCatFixed() const {
    return false;
}

Weight Cat::getWeight() const {
    return 0;
}

// Setters
void Cat::setName(const char *newName) {

}

void Cat::setGender(Gender newGender) {

}

void Cat::setBreed(Breed newBreed) {

}

bool Cat::fixCat() {
    return false;
}

void Cat::setWeight(Weight newWeight) {

}

const char *Cat::getName() const {
    return nullptr;
}




