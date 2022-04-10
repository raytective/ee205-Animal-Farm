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

#include "config.h"

class Cat {
public:

    Cat* next;

    Cat();
    Cat( const char* newName
         ,const Gender newGender
         ,const Breed newBreed
         ,const Weight newWeight );

    const char* getName() const noexcept;
    Gender getGender() const noexcept;
    Breed getBreed() const noexcept;
    bool isFixed() const noexcept;
    Weight getWeight() const noexcept;

    void setName( const char* newName );
    bool fixCat() noexcept;
    void setWeight ( Weight newWeight );

    bool print() const noexcept;
    bool validate() const noexcept;

    virtual ~Cat();

protected:
    char name[MAX_NAME] ;
    enum Gender gender ;
    enum Breed breed ;
    bool isCatFixed ;
    Weight weight ;

    void setGender( Gender newGender );
    void setBreed( Breed newBreed );

};