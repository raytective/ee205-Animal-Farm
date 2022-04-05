///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_clion - EE 205 - Spr 2022
///
/// @file convertCats.cpp
/// @version 1.0
///
/// @author Rachel Watananbe <rkwatanao@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <string.h>

#include "catDatabase.h"
#include "convertCats.h"

const char* genderName( const enum Gender gen ) {

    static char gender[MAX];

    switch( gen )
    {
        case 0:
            strcpy(gender, "Unknown");
            break;
        case 1:
            strcpy(gender, "Male");
            break;
        case 2:
            strcpy(gender, "Female");
            break;
    }

    return gender;

}

const char* breedName( const enum Breed type ) {

    static char breed[MAX];

    switch( type )
    {
        case 0:
            strcpy(breed, "Unknown");
            break;
        case 1:
            strcpy(breed, "Maine Coon");
            break;
        case 2:
            strcpy(breed, "Manx");
            break;
        case 3:
            strcpy(breed, "Shorthair");
            break;
        case 4:
            strcpy(breed, "Persian");
            break;
        case 5:
            strcpy(breed, "Sphynx");
            break;
    }

    return breed;

}


const char* colorName( const enum Color col ) {

    static char color[MAX];

    switch( col )
    {
        case 0:
            strcpy(color, "Black");
            break;
        case 1:
            strcpy(color, "White");
            break;
        case 2:
            strcpy(color, "Red");
            break;
        case 3:
            strcpy(color, "Blue");
            break;
        case 4:
            strcpy(color, "Green");
            break;
        case 5:
            strcpy(color, "Pink");
            break;
    }

    return color;

}