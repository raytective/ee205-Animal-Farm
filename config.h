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
#include <iostream>
#include <iomanip>

using namespace std;

#define PROGRAM_NAME "Animal Farm 3"
#define MAX_NAME (50)       /// @TODO delete after u get the name stuff down
#define UNKNOWN_WEIGHT (-1)

#define FORMAT_LINE_FOR_DUMP( className, member )         \
    cout << setfill( ' ' )                  \
              << left                       \
              << boolalpha                  \
              << setw( 8) << (className)    \
              << setw(20) << (member)       \
              << setw(52)

#define PRINT_HEADING_FOR_DUMP std::cout << setw(80) << setfill( '=' ) << "" << endl

typedef float Weight;
typedef int NumCats;


enum Breed{ UNKNOWN_BREED=0, MAINE_COON, MANX,
    SHORTHAIR, PERSIAN, SPHYNX };


/// @TODO DELETE CONVERTCATS GENDER/BREED STUFF >> OR transfer??
enum class Gender { UNKNOWN_GENDER=0, MALE, FEMALE };

inline ostream& operator<<( ostream& lhs_stream, const Gender& rhs_Gender ) {
    switch( rhs_Gender ) {
        case Gender::UNKNOWN_GENDER:
            lhs_stream << "Unknown gender";
            break;
        case Gender::MALE:
            lhs_stream << "Male";
            break;
        case Gender::FEMALE:
            lhs_stream << "Female";
            break;
        default:
            throw out_of_range(PROGRAM_NAME ": Gender not mapped to a string" ) ;

    }

    return lhs_stream;

}



enum class Color { UNKNOWN_COLOR=0, BLACK, BROWN, WHITE, RED, BLUE, GREEN,
                    GINGER, CREAM, CINNAMON, CALICO };

inline ostream& operator<<( ostream& lhs_stream, const Color& rhs_Color ) {
    switch ( rhs_Color ) {
        case Color::UNKNOWN_COLOR:
            lhs_stream << "Unknown color" ;
            break;
        case Color::BLACK:
            lhs_stream << "Black" ;
            break;
        case Color::BROWN:
            lhs_stream << "Brown" ;
            break;
        case Color::WHITE:
            lhs_stream << "White" ;
            break;
        case Color::RED:
            lhs_stream << "Red" ;
            break;
        case Color::BLUE:
            lhs_stream << "Blue" ;
            break;
        case Color::GREEN:
            lhs_stream << "Green" ;
            break;
        case Color::GINGER:
            lhs_stream << "Ginger" ;
            break;
        case Color::CREAM:
            lhs_stream << "Cream" ;
            break;
        case Color::CINNAMON:
            lhs_stream << "Cinnamon" ;
            break;
        case Color::CALICO:
            lhs_stream << "Calico" ;
            break;
        default:
            throw out_of_range( PROGRAM_NAME ": Color isn't mapped to a string" ) ;

    }

    return lhs_stream;

}