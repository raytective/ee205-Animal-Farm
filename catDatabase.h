///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <stddef.h>
#include <stdbool.h>

#define MAX_CATS 1024
#define MAX_NAME 50
#define BAD_CAT -1

extern int currentCats;

enum Gender{ UNKNOWN_GENDER=0, MALE, FEMALE };
enum Breed{ UNKNOWN_BREED=0, MAINE_COON, MANX,
    SHORTHAIR, PERSIAN, SPHYNX };
enum Color{ BLACK=0, WHITE, RED, BLUE, GREEN,
    PINK };

struct catData {
    char names[MAX_NAME] ;
    enum Gender catGender ;
    enum Breed catBreed ;
    bool catFixed ;
    float catWeight ;
    enum Color collarColor1 ;
    enum Color collarColor2 ;
    unsigned long long license ;
};

extern struct catData cats[MAX_CATS];

/*
extern char catNames[MAX_CATS] [MAX_NAME] ;
extern enum gender catGender[MAX_CATS] ;
extern enum breed catBreed[MAX_CATS] ;
extern bool catFixed[MAX_CATS] ;
extern float catWeight[MAX_CATS] ;
*/

