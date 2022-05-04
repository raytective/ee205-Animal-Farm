///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Animal.h"

class Mammal: public Animal {
public:
    static const string MAMMAL_NAME;

    Mammal(const Weight::t_weight newMaxWeight, const string &newSpecies
    ) : Animal(newMaxWeight, MAMMAL_NAME, newSpecies) {};

    Mammal(const Color newColor, const Gender newGender,
           const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
           const string &newSpecies) :
           Animal(newGender, newWeight, newMaxWeight, MAMMAL_NAME,
                  newSpecies) { setColor(newColor); };

    Color getColor() const noexcept;
    void setColor( const Color newColor ) noexcept;

    void dump() const noexcept override;

protected:
    Color color = Color::UNKNOWN_COLOR;

};