///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Weight.h"
#include "Node.h"

class Animal: public Node {
public:
    static const string KINGDOM_NAME;

    Animal( const Weight::t_weight newMaxWeight, const string &newClassification,
            const string &newSpecies );
    Animal( const Gender newGender, const Weight::t_weight newWeight,
            const Weight::t_weight newMaxWeight, const string &newClassification,
            const string &newSpecies );

    string getKingdom() const noexcept;
    string getClassification() const noexcept;
    string getSpecies() const noexcept;
    Gender getGender() const noexcept;
    Weight::t_weight getWeight() const noexcept;

    void setWeight( const Weight::t_weight newWeight );

    virtual string speak() const noexcept=0;
    void dump() const noexcept override;
    bool validate() const noexcept override;

    static bool validateClassification( const string &checkClassification ) noexcept;
    static bool validateSpecies( const string &checkSpecies ) noexcept;

protected:
    void setGender( const Gender newGender );

private:
    string species;
    string classification;
    Gender gender = Gender::UNKNOWN_GENDER;
    Weight weight;
};
