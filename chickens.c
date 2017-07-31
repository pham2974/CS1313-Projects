/*
 **********************************************************************
 *** Project #3.C: Chickens                                         ***
 *** Program:     Chickens                                          ***
 *** Author:      Tri Pham (tri.g.pham-1@ou.edu)                    ***
 *** Class:       CS 1313 010 Computer Programming, Spring 2017     ***
 *** Lab:         Sec 012 Fridays 1:00pm                            ***
 *** Description: A Program to calculate how much a person is going ***
 ***              to get paid this week                             ***
 **********************************************************************
 */

#include <stdio.h>

int main ()
{ /* main */
    /* 
     ****************** Declaration Section *******************
     *
     ************** Named Constant Declarations ***************
     *
     *********** Float Named Constant Declarations ************
     */
    /* Hourly Wage */
     const float hourly_wage = 7.25;
    /* Pay per Chicken User Think of */
     const float pay_per_chicken = 5.25;
    /* Bonus for Brown Chicken Think of */
     const float bonus_for_brown_chickens = 4.50;
    /* Overtime Wage Rate */
     const float overtime_rate = 1.5;
    /*
     ********** Integer Named Constant Declarations ***********
     *				(None)
     */
    /*
     **************** Variable Declarations *******************
     *
     ************** Float Variable Declarations ***************
     */
    /* Number of Regular (Non-Overtime) Hours Worked */
     float number_of_regular_hours_worked;
    /* Number of Overtime Hours Worked */
     float number_of_overtime_hours_worked;
    /* Total Amount of Money User Get Paid */
     float amount_of_money_user_get_paid;
    /* Brown Chicken Pay Scale */
     float brown_chicken_pay_scale;
    /*
     ************* Integer Variable Declarations **************
     */
    /* Total Number of Chickens User Think of */
     int number_of_chickens_think_of;
    /* Number of Chicken that are Brown */
     int number_of_brown_chickens_think_of;

    /*
     ******************* Execution Section ******************** 
     *
     ****************** Greeting Subsection *******************
     */
    /* 
     * The following lines will print the greeting messages
     * to the user on the computer screen 
     */
     printf("This Program will Calculate How Much You Get Paid ");
     printf("Based on Hours Worked and Number of Chickens You ");
     printf("Think of.\n");
    /*
     ******************** Input Subsection ********************
     */
    /* 
     * Prompt the Request to ask user to input the number of 
     * Regular Hours worked
     */
     printf("Please Input the Number of Regular Hours You Worked ");
     printf("This Week.\n");
     printf("Your Input: ");
     scanf("%f", &number_of_regular_hours_worked);
 
    /* 
     * Prompt the Request to ask user to input the number of 
     * Overtime Hours worked
     */
     printf("Please Input the Number of Overtime Hours You Worked ");
     printf("This Week.\n");
     printf("Your Input: ");
     scanf("%f", &number_of_overtime_hours_worked);

    /*
     * Prompt the Request to ask user to input the number of 
     * Chickens Thought of
     */
     printf("Please Input the Number of Chickens You Thought of ");
     printf("This Week.\n");
     printf("Your Input: ");
     scanf("%d", &number_of_chickens_think_of);

    /* 
     * Prompt the Request to ask user to input the number of 
     * Brown Chickens Thought of
     */
     printf("Please Input the Number of Brown Chickens You Thought ");
     printf("of This Week. ");
     printf(" The Total Number of Chickens is %d.\n"
		,number_of_chickens_think_of);
     printf("Your Input: ");
     scanf("%d", &number_of_brown_chickens_think_of);
    /*
     ***************** Calculation Subsection ******************
     */
    /* Calculate the brown chicken pay scale */
     brown_chicken_pay_scale = pay_per_chicken + 
		    	       bonus_for_brown_chickens;

    /* Calculate how much money the user will be paid this week */
     amount_of_money_user_get_paid = 
     number_of_regular_hours_worked * hourly_wage + 
     number_of_overtime_hours_worked * overtime_rate * hourly_wage + 
     (number_of_chickens_think_of - number_of_brown_chickens_think_of) *
     pay_per_chicken + number_of_brown_chickens_think_of *
     (pay_per_chicken + bonus_for_brown_chickens);

    /*
     ******************* Output Subsection ********************
     */
    /* Output the Pay Scale */
     printf("Your Regular Hourly Wage is %f dollars.\n", hourly_wage);
     printf("Your Pay Scale per Chicken is %f dollars.\n"
		,pay_per_chicken);
     printf(
	    "Your Bonus Pay Scale per Brown Chicken is %f Dollars in"
            " Addition to the Pay Scale per Chicken or %f Dollars.\n",
	     bonus_for_brown_chickens, brown_chicken_pay_scale
           );
    /* Output the Input */
     printf("Your Regular Hours Worker This Week Are: %f Hours.\n"
		,number_of_regular_hours_worked);
     printf("Your Overtime Hours Worked This Week Are: %f Hours.\n"
		,number_of_overtime_hours_worked);
     printf("The Number of Chickens You Thought of is: %d Chickens.\n"
		,number_of_chickens_think_of);
     printf("The Associated Number of Brown Chickens is: %d Chickens.\n"
		,number_of_brown_chickens_think_of);
    /* Output the Payout */
     printf("Your Pay for This Week is: %f Dollars.\n"
		,amount_of_money_user_get_paid);
		

} /* main */
