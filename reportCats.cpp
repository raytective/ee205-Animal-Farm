///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Rachel Watananbe <rkwatanao@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>
#include <string.h>

#include "config.h"
#include "catDatabase.h"
#include "convertCats.h"

void printCat( int index ) {

    if( index < 0 ) {
        fprintf( stderr, "%s: Bad cat [%d]\n", PROGRAM_NAME, index );
        return;
    }
    if( index > currentCats ) {
        fprintf( stderr, "%s: Bad cat [%d]\n", PROGRAM_NAME, index);
        return;
    }

    printf("cat index = [%d] ", index);
    printf("name=[%s] ", cats[index].names);
    printf("gender=[%s] ", genderName(cats[index].catGender));
    printf("breed=[%s] ", breedName(cats[index].catBreed));
    printf("isFixed=[%d] ", cats[index].catFixed);
    printf("weight=[%.2f] ", cats[index].catWeight);
    printf("color1=[%s] ", colorName(cats[index].collarColor1));
    printf("color2=[%s] ", colorName(cats[index].collarColor2));
    printf("license=[%lld]\n", cats[index].license);
}


void printAllCats() {

    for( int i=0; i < currentCats; i++ ) {
        printCat(i);
    }
}


int findCat( const char* name ) {
    for( int i=0; i < currentCats; i++ ) {
        if( strcmp(name, cats[i].names) == 0 ){
            return i;
        }
    }
    return BAD_CAT;
}
*/
