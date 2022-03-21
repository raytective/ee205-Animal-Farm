///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "catDatabase.h"

extern int updateCatName(int index, const char* newName);
extern int fixCat(int index);
extern int updateCatWeight(int index, float newWeight);
int updateCatCollar1( int index, enum Color );
int updateCatCollar2( int index, enum Color );
extern int updateLicense( int index, unsigned long long newLicense );
