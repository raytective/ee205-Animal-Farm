///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"

static const string KINGDOM_NAME = "Animalia";

// @TODO add in maxweight once we get cat up and running again

Animal::Animal(const Weight::t_weight newMaxWeight, const string &newClassification, const string &newSpecies) {
    classification = newClassification;
    species = newSpecies;
}

Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const string &newClassification, const string &newSpecies) {
    setGender(newGender);
    weight = Weight( newWeight, newMaxWeight );
    classification = newClassification;
    species = newSpecies;
}

string Animal::getKingdom() const noexcept {
    return ::KINGDOM_NAME;
}

string Animal::getClassification() const noexcept {
    return classification;
}

string Animal::getSpecies() const noexcept {
    return species;
}

Gender Animal::getGender() const noexcept {
    return gender;
}

Weight::t_weight Animal::getWeight() const noexcept {
    return weight.getWeight();
}

void Animal::setWeight(const Weight::t_weight newWeight) {
    weight.setWeight(newWeight);
}

void Animal::dump() const noexcept {
    Node::dump();

    FORMAT_LINE_FOR_DUMP( "Animal", "this" ) << this << endl;
    FORMAT_LINE_FOR_DUMP( "Animal","kingdom" ) << getKingdom() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "classification" ) << getClassification() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "species" ) << getSpecies() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "gender" ) << getGender() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "weight" ) << getWeight() << endl;
}

bool Animal::validate() const noexcept {
    ///@TODO do validation
    return true;
}

/// @TODO CHECK AFTER CLASS IF THIS IS CORRECT VALIDATION
bool Animal::validateClassification(const string &checkClassification) noexcept {
    if( checkClassification.empty() == true ) {
        return false;
    }
    return true;
}

bool Animal::validateSpecies(const string &checkSpecies) noexcept {
    if( checkSpecies.empty() == true ) {
        return false;
    }
    return true;
}

void Animal::setGender(const Gender newGender) {
    gender = newGender;

}
