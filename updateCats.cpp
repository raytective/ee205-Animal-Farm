///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Rachel Watananbe <rkwatanao@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>
#include <string.h>

#include "config.h"
#include "updateCats.h"
#include "catDatabase.h"

int updateCatName(int index, const char* newName) {

    if( strlen(newName) == 0 ) {
        fprintf( stderr, "%s: Error can't find name.\n", PROGRAM_NAME );
        return BAD_CAT;
    }
    for( int i=0; i < currentCats; i++ ) {
        if( strcmp(newName, cats[i].names) == 0 ) {
            fprintf( stderr, "%s: Pre-existing name.\n", PROGRAM_NAME );
            return BAD_CAT;
        }
    }
#ifdef DEBUG
    printf("index is %d\n", index);
   printf("new name is %s\n", newName);
   printf("old name is %s\n", cats[index].names);
#endif

    for( int i=0; i < MAX_NAME; i++ ) {
        cats[index].names[i] = 0;
    }

    for( unsigned long i=0; i < strlen(newName); i++ ) {
        cats[index].names[i] = newName[i];}

#ifdef DEBUG
    printf("changed name is %s\n", cats[index].names);
#endif
    return 0;
}


int fixCat( int index ) {

    if( cats[index].catFixed == true ) {
        fprintf( stderr, "%s: Already fixed :(\n", PROGRAM_NAME);
        return BAD_CAT;
    }

    cats[index].catFixed=true;
    return 0;
}


int updateCatWeight( int index, float newWeight ) {
    if( newWeight <= 0 ) {
        fprintf( stderr, "%s: Invalid weight\n", PROGRAM_NAME );
        return BAD_CAT;
    }

    cats[index].catWeight = newWeight;

    return 0;
}


int updateCatCollar1( int index, enum Color newColor1 ) {
    if( cats[index].collarColor1 == newColor1 ) {
        fprintf( stderr, "%s: Collar is already that color.\n", PROGRAM_NAME );
        return BAD_CAT;
    }

    cats[index].collarColor1 = newColor1;

    return 0;
}


int updateCatCollar2( int index, enum Color newColor2 ) {
    if( cats[index].collarColor2 == newColor2 ) {
        fprintf( stderr, "%s: Collar is already that color.\n", PROGRAM_NAME );
        return BAD_CAT;
    }

    cats[index].collarColor2 = newColor2;

    return 0;
}


int updateLicense( int index, unsigned long long newLicense ) {
    if( cats[index].license == newLicense ) {
        fprintf( stderr, "%s: Collar is already that color.\n", PROGRAM_NAME );
        return BAD_CAT;
    }

    cats[index].license = newLicense;

    return 0;
}
*/
