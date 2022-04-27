///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file Weight.cpp
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   25_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Weight.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include <cassert>
using namespace std;

#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

static const Weight::t_weight UNKNOWN_WEIGHT = -1;
static const Weight::t_weight KILOS_IN_A_POUND = 0.453592;
static const Weight::t_weight SLUGS_IN_A_POUND = 0.031081;
static const std::string POUND_LABEL = "Pound";
static const std::string KILO_LABEL = "Kilo";
static const std::string SlUG_LABEL = "Slug";

///// CONVERSIONS /////
float Weight::fromKilogramToPound(Weight::t_weight kilogram) noexcept {
    return kilogram / ::KILOS_IN_A_POUND;
}

float Weight::fromPoundToKilogram(Weight::t_weight pound) noexcept {
    return pound * ::KILOS_IN_A_POUND;
}

float Weight::fromSlugToPound(Weight::t_weight slug) noexcept {
    return slug / ::SLUGS_IN_A_POUND ;
}

float Weight::fromPoundToSlug(Weight::t_weight pound) noexcept {
    return pound * ::SLUGS_IN_A_POUND;
}

float Weight::convertWeight(Weight::t_weight fromWeight, Weight::UnitOfWeight fromUnit, Weight::UnitOfWeight toUnit) noexcept {
    Weight::t_weight newWeight = ::UNKNOWN_WEIGHT;
    switch( fromUnit ) {
        case POUND:
            newWeight = fromWeight;
            break;
        case KILO:
            newWeight = fromKilogramToPound(fromWeight);
            break;
        case SLUG:
            newWeight = fromSlugToPound(fromWeight);
            break;
        default:
            assert(false);
    }

    Weight::t_weight finalWeight = ::UNKNOWN_WEIGHT;
    switch( toUnit )
    {
        case POUND:
            finalWeight = newWeight;
            break;
        case KILO:
            finalWeight = fromPoundToKilogram( newWeight );
            break;
        case SLUG:
            finalWeight = fromPoundToSlug( newWeight );
            break;
        default:
            assert(false);
    }

    return finalWeight;
}


///// GETTERS/SETTERS /////
void Weight::setWeight(Weight::t_weight newWeight) {
    isWeightValid( newWeight );
    Weight::weight = newWeight;
    Weight::bIsKnown = true;
}

void Weight::setWeight(Weight::t_weight newWeight, Weight::UnitOfWeight weightUnits) {
    isWeightValid(newWeight);
    Weight::weight = convertWeight(newWeight,weightUnits,Weight::unitOfWeight);
    Weight::bIsKnown = true;
}

void Weight::setMaxWeight(Weight::t_weight newMaxWeight) {
    if( bHasMax == true ) {
        throw invalid_argument( "Max weight can't be changed" );
    }
    if( isWeightValid( newMaxWeight ) == false ) {
        throw out_of_range( "Max weight can't be <= 0");
    }

    Weight::maxWeight = newMaxWeight;
    bHasMax = true;
}

float Weight::getWeight() const noexcept {
    if( bIsKnown == false ) {
        return ::UNKNOWN_WEIGHT;
    }
    return weight;
}

float Weight::getWeight(Weight::UnitOfWeight weightUnits) const noexcept {
    float newWeight = convertWeight( Weight::weight, unitOfWeight, weightUnits );

    return newWeight;
}


float Weight::getMaxWeight() const noexcept {
    if( bHasMax == false ) {
        return ::UNKNOWN_WEIGHT;
    }

    return maxWeight;
}

Weight::UnitOfWeight Weight::getWeightUnit() const noexcept {
    return unitOfWeight;
}

bool Weight::isWeightKnown() const noexcept {
    return bIsKnown;
}

bool Weight::hasMaxWeight() const noexcept {
    return bHasMax;
}


///////// CONSTRUCTORS //////////
// don't look at these they're a mess
Weight::Weight() noexcept {
    weight = ::UNKNOWN_WEIGHT;
    maxWeight = ::UNKNOWN_WEIGHT;
    unitOfWeight = POUND;
    bIsKnown = false;
    bHasMax = false;
    assert(validate());
}

Weight::Weight(Weight::t_weight newWeight) {
    setWeight( newWeight );
    maxWeight = ::UNKNOWN_WEIGHT;
    unitOfWeight = POUND;
    bIsKnown = true;
    bHasMax = false;
    assert(validate());
}

Weight::Weight(Weight::UnitOfWeight newUnitOfWeight) noexcept {
    weight = ::UNKNOWN_WEIGHT;
    maxWeight = ::UNKNOWN_WEIGHT;
    unitOfWeight = newUnitOfWeight;
    bIsKnown = false;
    bHasMax = false;
    assert(validate());
}

Weight::Weight(Weight::t_weight newWeight, Weight::UnitOfWeight newUnitOfWeight) {
    setWeight(newWeight);
    maxWeight = ::UNKNOWN_WEIGHT;
    unitOfWeight = newUnitOfWeight;
    bIsKnown = true;
    bHasMax = false;
    assert(validate());
}

Weight::Weight(Weight::t_weight newWeight, Weight::t_weight newMaxWeight) {
    setWeight(newWeight);
    setMaxWeight(newMaxWeight);
    unitOfWeight = POUND;
    bIsKnown = true;
    bHasMax = true;
    assert(validate());
}

Weight::Weight(Weight::UnitOfWeight newUnitOfWeight, Weight::t_weight newMaxWeight) {
    weight = ::UNKNOWN_WEIGHT;
    setMaxWeight(newMaxWeight);
    unitOfWeight = newUnitOfWeight;
    bIsKnown = false;
    bHasMax = true;
    assert(validate());
}

Weight::Weight(Weight::t_weight newWeight, Weight::UnitOfWeight newUnitOfWeight, Weight::t_weight newMaxWeight) {
    setWeight(newWeight);
    setMaxWeight(newMaxWeight);
    unitOfWeight = newUnitOfWeight;
    bIsKnown = true;
    bHasMax = true;
    assert(validate());
}


///////// VALIDATION //////////
bool Weight::isWeightValid(Weight::t_weight checkWeight) const noexcept {
    if( checkWeight <= 0 ) {
        return false;
    }
    if( bHasMax == true && checkWeight > maxWeight ) {
        return false;
    }

    return true;
}

bool Weight::validate() const noexcept {
    if( bIsKnown == true && isWeightValid( Weight::weight ) == false ) {
        return false;
    }

    if( bHasMax == true && isWeightValid( Weight::maxWeight ) == false ) {
        return false;
    }

    return true;
}



///////// THIS SHOULD ALL BE FINE HOPEFULLY ////////
bool Weight::operator==(const Weight &rhs_Weight) const {
    float lhs_weight = (bIsKnown) ? getWeight(Weight::POUND) : 0;
    float rhs_weight = (rhs_Weight.bIsKnown) ? rhs_Weight.getWeight(Weight::POUND) : 0;

    return lhs_weight == rhs_weight;
}

bool Weight::operator<(const Weight &rhs_Weight) const {
    float lhs_weight = (bIsKnown) ? getWeight(Weight::POUND) : 0;
    float rhs_weight = (rhs_Weight.bIsKnown) ? rhs_Weight.getWeight(Weight::POUND) : 0;

    return lhs_weight < rhs_weight;
}

Weight &Weight::operator+=(Weight::t_weight rhs_addToWeight) {
    // Sus about this one
    this->weight += rhs_addToWeight;
    return *this;
}

std::ostream &operator<<(std::ostream &lhs_stream, const Weight::UnitOfWeight rhs_UnitOfWeight) {
    switch( rhs_UnitOfWeight ) {
        case Weight::POUND:
            return lhs_stream << POUND_LABEL;
        case Weight::KILO:
            return lhs_stream << KILO_LABEL;
        case Weight::SLUG:
            return lhs_stream << SlUG_LABEL;
        default:
            throw out_of_range("The unit can't be mapped to a string");
    }
}

std::ostream &operator<<(std::ostream &lhs_stream, const Weight &rhs_Weight) {
    float theLastNumberIprintedOut = 0 ;

    if( rhs_Weight.bIsKnown == false && rhs_Weight.hasMaxWeight() == false ) {
        lhs_stream << "Unknown";
    }

    if( rhs_Weight.bIsKnown == true && rhs_Weight.hasMaxWeight() == false ) {
        lhs_stream << rhs_Weight.getWeight() << " " << rhs_Weight.getWeightUnit();
        theLastNumberIprintedOut = rhs_Weight.getWeight();
    }

    if( rhs_Weight.bIsKnown == true && rhs_Weight.hasMaxWeight() == true ) {
        lhs_stream << rhs_Weight.getWeight() << " out of " << rhs_Weight.getMaxWeight() << " " << rhs_Weight.getWeightUnit();
        theLastNumberIprintedOut = rhs_Weight.getWeight();
    }

    if( rhs_Weight.bIsKnown == false && rhs_Weight.hasMaxWeight() == true ) {
        lhs_stream << "Unknown out of " << rhs_Weight.getMaxWeight() << " " << rhs_Weight.getWeightUnit();
        theLastNumberIprintedOut = rhs_Weight.getMaxWeight();
    }

    if(theLastNumberIprintedOut > 1 ) {
        lhs_stream << "s";
    }
    return lhs_stream;
}

void Weight::dump() const noexcept {
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Weight", "this" ) << this << endl ;
    FORMAT_LINE( "Weight", "isKnown" ) << bIsKnown << endl ;
    FORMAT_LINE( "Weight", "weight" ) << getWeight() << endl ;
    FORMAT_LINE( "Weight", "unitOfWeight" ) << Weight::unitOfWeight << endl ;
    FORMAT_LINE( "Weight", "hasMax" ) << bHasMax << endl ;
    FORMAT_LINE( "Weight", "maxWeight" ) << getMaxWeight() << endl ;

}