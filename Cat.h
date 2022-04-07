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
#include "catDatabase.h"

#pragma once

class Cat {
public:
    Cat();
    Cat( const char* newName
         ,const Gender newGender
         ,const Breed newBreed
         ,const Weight newWeight );

    const char* getName() const;
    Gender getGender() const;
    Breed getBreed() const;
    bool isCatFixed() const;
    Weight getWeight() const;

    void setName( const char* newName );
    bool fixCat();
    void setWeight ( Weight newWeight );

    bool print() const ;
    bool validate() const;

protected:
    char name[MAX_NAME] ;
    enum Gender gender ;
    enum Breed breed ;
    bool isFixed ;
    Weight weight ;

    void setGender( Gender newGender );
    void setBreed( Breed newBreed );

};

