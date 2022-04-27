///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   05_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <cstring>
#include "Mammal.h"
#include "config.h"


class Cat: public Mammal {
public:
    static const string SPECIES_NAME;
    static const Weight::t_weight MAX_WEIGHT;

public:
    explicit Cat(const string &newName) :
            Mammal(MAX_WEIGHT, SPECIES_NAME) {
        if (validateName(newName) == false) {
            throw out_of_range("Cat must have name");
        }
        name = newName;
        isCatFixed = false;
    }

    Cat( const string &newName, const Color newColor,
         const bool newIsFixed, const Gender newGender,
         const Weight::t_weight newWeight ): Mammal( newColor, newGender, newWeight,
                                                     MAX_WEIGHT, SPECIES_NAME ) {
        if( validateName( newName ) == false ) {
            throw out_of_range( "Cat must have name" );
        }
        name = newName;
        isCatFixed = newIsFixed;
    }

    string getName() const noexcept;
    void setName(const string &newName);

    bool isFixed() const noexcept;
    void fixCat() noexcept;

    string speak() const noexcept override;
    void dump() const noexcept override;
    bool validate() const noexcept override;

    static bool validateName(const string &newName);

protected:
    string name;
    bool isCatFixed;

};

    /*
    string getName() const noexcept;
    Gender getGender() const noexcept;
    Breed getBreed() const noexcept;
    bool isFixed() const noexcept;
    float getWeight() const noexcept;

    void setName( const string &newName );
    bool fixCat() noexcept;
    void setWeight ( float newWeight );

    bool print() const noexcept;
    bool validate() const noexcept;

    static bool validateName( const char *newName );
    static bool validateGender( const Gender newGender );
    static bool validateBreed( const Breed newBreed );
    static bool validateWeight( const float newWeight );

    virtual ~Cat();

    void setGender( Gender newGender );

    void setBreed( Breed newBreed );

protected:
    string name;
    bool isCatFixed = false;

};
     */