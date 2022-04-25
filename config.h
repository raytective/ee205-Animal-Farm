///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_clion - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#define PROGRAM_NAME "Animal Farm"
#define MAX_NAME (50)
#define UNKNOWN_WEIGHT (-1)
#define BAD_CAT -1

typedef float Weight;
typedef int NumCats;

enum Gender{ UNKNOWN_GENDER=0, MALE, FEMALE };
enum Breed{ UNKNOWN_BREED=0, MAINE_COON, MANX,
    SHORTHAIR, PERSIAN, SPHYNX };
enum Color{ BLACK=0, WHITE, RED, BLUE, GREEN,
    PINK };