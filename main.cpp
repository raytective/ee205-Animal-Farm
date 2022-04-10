///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file main.c
/// @version 1.0
///
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"
#include "convertCats.h"
#include "config.h"
#include "Cat.h"

using namespace std;

int main(){

    cout << "Starting " << PROGRAM_NAME << endl;

    Cat Loki = Cat("Loki", MALE, PERSIAN, 1.0),
        Milo = Cat("Milo", MALE, MANX, 1.1),
        Bella = Cat("Bella", FEMALE, MAINE_COON, 1.2),
        Kali = Cat("Kali", FEMALE, SHORTHAIR, 1.3),
        Trin = Cat("Trin", FEMALE, MANX, 1.4),
        Chili = Cat("Chili", MALE, SHORTHAIR, 1.5);

    addCat( &Loki );
    addCat( &Milo );
    addCat( &Bella );
    addCat( &Kali );
    addCat( &Trin );
    addCat( &Chili );

    printAllCats();






    cout << "Done with " << PROGRAM_NAME << endl;

    /*
    printf("Starting Animal Farm 1\n");
#ifdef DEBUG
    addCat( "", FEMALE, MAINE_COON, false, 10.0 ) ;
   addCat( "MeowMeowMeowMeowMeowMeowMeowM", MALE, MANX, true, 8.7 );
   addCat( "MeowMeowMeowMeowMeowMeowMeowMe", MALE, MANX, true, 8.7 );
   addCat( "MeowMeowMeowMeowMeowMeowMeowMeo", MALE, MANX, true, 8.7 );
   addCat( "Mewmew", FEMALE, PERSIAN, false, 0.0 ) ;
   addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0 ) ;
   addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0 ) ;

   printCat(-1);
   deleteCat(0);
   deleteAllCats();
   printAllCats();
   printf("\n\n");
#endif

    addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;
    addCat( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;
    addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;
    addCat( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;
    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;

    printAllCats();

    int kali = findCat( "Kali" ) ;
    updateCatName( kali, "Chili" ) ; // this should fail
    printCat( kali ) ;
    updateCatName( kali, "Capulet" ) ;
    updateCatWeight( kali, 9.9 ) ;
    fixCat( kali ) ;
    printCat( kali ) ;

    int chili = findCat( "Chili" ) ;
    updateCatCollar1( chili, GREEN) ;
    updateCatCollar2( chili, PINK ) ;
    updateLicense( chili, 110 ) ;
    printCat( chili ) ;

    printAllCats() ;

    deleteAllCats() ;
    printAllCats() ;

    printf("Done with Animal Farm 1\n") ;
*/
}

