/*
 **********************************************************************
 *** Project #3.A: Conversions                                      ***
 *** Program:     Conversions                                       ***
 *** Author:      Tri Pham (tri.g.pham-1@ou.edu)                    ***
 *** Class:       CS 1313 010 Computer Programming, Spring 2017     ***
 *** Lab:         Sec 012 Fridays 1:00pm                            ***
 *** Description: A Program to convert area in square miles to      ***
 ***              hectares and speed in Knots to meters per second  ***
 **********************************************************************
 */

#include <stdio.h>

int main ()
{ /* main */
    /* 
     ********************* Declaration Section ***********************
     *
     ***************** Named Constant Declarations *******************
     *
     *************** Float Named Constant Declarations ***************
     */
    /* Acres per Hectare */
     const float acres_per_hectare = 2.471;
    /* Miles per Hour per Knot */
     const float mph_per_knot = 1.150779;
    /* Kilometers per Mile */
     const float kilometers_per_mile = 1.609344;
    /*
     ************* Integer Named Constant Declarations *************
     */
    /* Acres per Square Mile */
     const int acres_per_square_mile = 640;
    /* Meters per Kilometer */
     const int meters_per_kilometer = 1000;
    /* Minutes per Hour */
     const int minutes_per_hour = 60;
    /* Seconds per Minute */
     const int seconds_per_minute = 60;
    /*
     ****************** Variable Declarations **********************
     *
     ***************** Float Variable Declarations *****************
     */
    /* User's Input of Area in Square Miles */
     float area_in_square_miles;
    /* User's Input of Speed in Knots */
     float speed_in_knots;
    /* Result in Hectares */
     float area_in_hectares;
    /* Result in meters per second */
     float speed_in_meters_per_second;
    /*
     **************** Integer Variable Declarations ****************
     *				 (None)
     */
    /*
     ********************** Execution Section ********************** 
     *
     ********************* Greeting Subsection *********************
     */
    /* 
     * The following lines will print the greeting messages
     * to the user on the computer screen 
     */
     printf("This Program will Convert the Area in Square Miles ");
     printf("to Hectares and the Speed in Knots to Meters per Second");
     printf("\n");
    /*
     ********************** Input Subsection ***********************
     */
    /*
     * Prompt the request and ask them to input the area in square miles
     */
     printf("Please Input the Area in Square Miles.\n");
     printf("Your Input: ");
     scanf("%f", &area_in_square_miles);
    /*
     * Prompt the request and ask them to input the speed in knots
     */
     printf("Please Input the Speed in Knots.\n");
     printf("Your Input: ");
     scanf("%f", &speed_in_knots);
    /*
     ***************** Calculation Subsection **********************
     */
    /* Convert the area to hectares */
     area_in_hectares = area_in_square_miles *
			acres_per_square_mile /
			acres_per_hectare;
    /* Convert the speed to meters per second */	
     speed_in_meters_per_second = speed_in_knots *
				  mph_per_knot * 
		 	          kilometers_per_mile * 
			          meters_per_kilometer / 
			          minutes_per_hour /
			          seconds_per_minute;
    /*
     ******************* Output Subsection *************************
     * Print the conversion results to the terminal screen
     */
    /* Print the area in both square miles and hectares */
     printf("The Area is %f square mile(s) or %f Hectare(s).\n"
		,area_in_square_miles, area_in_hectares);
    /* Print the speed in both knots and meters per second */
     printf("The speed is %f knots or %f meters per second.\n"
		,speed_in_knots, speed_in_meters_per_second);

} /* main */
