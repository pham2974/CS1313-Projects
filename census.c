/*
 **********************************************************************
 *** Project #2:  Census                                            ***
 *** Program:     Census                                            ***
 *** Author:      Tri Pham (tri.g.pham-1@ou.edu)                    ***
 *** Class:       CS 1313 010 Computer Programming, Spring 2017     ***
 *** Lab:         Sec 012 Fridays 1:00pm                            ***
 *** Description: A Program to ask three questions about census     ***
 *** subject by asking user to input two real quantities            ***
 **********************************************************************
 */

		 /* MAIN PROGRAM STARTS FROM THIS POINT */

#include <stdio.h>

int main ()
{ /* main */
      /*	 
       **********************************************************
       ****************** Declaration Section *******************
       **********************************************************
       *
       **********************************************************
       ************** Float Variables Declaration ***************
       **********************************************************
       */
      /*
       * Subject's number of servings of fruits  eaten per day
       */
       float average_daily_fruit_servings_eaten;
      /*
       * Subject's number of math problems solved per week
       */
       float average_weekly_math_problems_solved;
      /*
       **********************************************************
       ************* Integer Variables Declaration **************
       **********************************************************
       */
      /*
       * Subject's birth weight in pounds
       */
       int birth_weights_in_pounds;
      /*
       * Subject's birth weight in ounces
       */
       int birth_weights_in_ounces;

      /*
       **********************************************************
       ******************* Execution Section ******************** 
       **********************************************************
       *
       **********************************************************
       ****************** Greeting Subsection *******************
       **********************************************************
       */
      /* The following line will print the greeting messages
	        to the user on the computer screen */

       printf("This is the program used by the United States ");
       printf("Census Bureau. We will gather data by asking ");
       printf("you three questions, please provide the answers ");
       printf("as accurately as possible.\n");
       printf("\n");

      /*
       **********************************************************
       ******************** Input Subsection ********************
       **********************************************************
       */
      /*
       * Prompt the request and ask them to input the number of
       * servings of fruits eaten per day using scanf() function
       */
       printf("Please Input Your Average Number of Servings of ");
       printf("Fruit Eaten per Day\n");
       printf("Please Enter Your Answer?  ");
       scanf("%f", &average_daily_fruit_servings_eaten);
      /*
       * Prompt the request and ask them to input the number of 
       * of math problems sovled per week using scanf() function
       */ 
       printf("Please Input Your Average Number of Math Problems");
       printf(" Solved per Week\n");
       printf("Please Enter your Answer?  ");
       scanf("%f", &average_weekly_math_problems_solved);
      /*
       * Prompt the request and ask them to input the birth weight
       * into the computer using scanf() function
       */
       printf("Please Input Your Birth Weight in Pounds and Ounces");
       printf(" to the Nearest Ounce, Separated by a Blank Space\n");
       printf("Please Enter Your Answer?  ");
       scanf("%d %d", &birth_weights_in_pounds, 
		&birth_weights_in_ounces);

      /*
       **********************************************************
       ******************* Output Subsection ********************
       **********************************************************
       */
      /*
       * The following printf() will print the subject's results to
       * the computer screen
       */
	
      /* Output the Number of Servings of Fruits Eaten per Day */
       printf("You Eat an Average of %f of Fruit Servings per day.\n"
		,average_daily_fruit_servings_eaten);
       printf("\n");
	
      /*  Output the Number of Math Problems Solved per Week   */
       printf("You Solved an Average of %f Math Problem per week.\n"
		,average_weekly_math_problems_solved);
       printf("\n");
	
      /*        Output the Birth Weight of the Subject         */
       printf("Your Birth Weight is %d lb %d oz"
		,birth_weights_in_pounds, birth_weights_in_ounces);
       printf(" or %d Pound(s) and %d Ounce(s)\n"
		,birth_weights_in_pounds, birth_weights_in_ounces);

} /* main */

			/* The Program Ends Here */














