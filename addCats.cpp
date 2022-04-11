///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "catDatabase.h"
#include "Cat.h"
using namespace std;

bool addCat( Cat* newCat ) {
    validateDatabase();
    newCat->validate();

    newCat->next = catDatabaseHeadPointer;
    catDatabaseHeadPointer = newCat;
    validateDatabase();
    return true;
}

/*
#include "addCats.h"
#include <stdio.h>
#include <string.h>
#include "config.h"
#include "catDatabase.h"


int addCat(const char* name,enum Gender newGender,enum Breed newBreed,bool fixed,Weight weight, enum Color color1, enum Color color2, int license ) {
    NumCats cat = currentCats;

    if( currentCats >= MAX_CATS) {
        fprintf( stderr, "%s: Cat database is full.\n", PROGRAM_NAME );
        return BAD_CAT;
    }
    if( strlen(name) <= 0 ) {
        fprintf(stderr, "%s: Empty name.\n", PROGRAM_NAME );
        return BAD_CAT;
    }
    if( strlen(name) > MAX_NAME ) {
        fprintf(stderr, "%s: Name exceeds maximum length!\n", PROGRAM_NAME );
        return BAD_CAT;
    }
    if( weight <= 0 ) {
        fprintf(stderr, "%s: Can't have negative weight.\n", PROGRAM_NAME );
        return BAD_CAT;
    }

    // iterate through catNames
    for( int i=0; i < currentCats; i++ ) {
        // if two strings match
        if ( strcmp(name, cats[i].names) == 0 ) {
            fprintf( stderr, "%s: Name taken!\n", PROGRAM_NAME );
            return BAD_CAT;
        }
    }

    for( long unsigned j=0; j <= strlen(name); j++ ) {
        cats[currentCats].names[j] = name[j];
    }
    cats[currentCats].catGender = newGender;
    cats[currentCats].catBreed = newBreed;
    cats[currentCats].catFixed = fixed;
    cats[currentCats].catWeight = weight;
    cats[currentCats].collarColor1 = color1;
    cats[currentCats].collarColor2 = color2;
    cats[currentCats].license = license;

#ifdef DEBUG
    printf("current cat = %d\n", currentCats);
   printf("current cat name = %s\n", catNames[currentCats]);
   printf("length of name = %ld\n", strlen(name));
   printf("gender = %d\n", catGender[currentCats]);
   printf("breed =  %d\n", catBreed[currentCats]);
   printf("fixed = %d\n", catFixed[currentCats]);
   printf("weight = %f\n", catWeight[currentCats]);
   printf("\n");
#endif

    currentCats++;
    return cat;
}
 */
