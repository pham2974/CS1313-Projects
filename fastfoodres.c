/*
 **********************************************************************
 *** Project #4:  Fast Food Restaurant                              ***
 *** Program:     fastfoodres                                       ***
 *** Author:      Tri Pham (tri.g.pham-1@ou.edu)                    ***
 *** Class:       CS 1313 010 Computer Programming, Spring 2017     ***
 *** Lab:         Sec 012 Fridays 1:00pm                            ***
 *** Description: Simulating greeting customers, taking orders,     ***
 ***              calcualting the bill and producing the check      ***
 **********************************************************************
 */

#include <stdio.h>
#include <stdlib.h>
int main()

{ /* main */
   /* 
    ********************* Declaration Section ***********************
    *
    ***************** Named Constant Declarations *******************
    *
    *************** Float Named Constant Declarations ***************
    */
   /* Entrees' Prices */ 
    const float Beef_Mush_Burger_Small = 4.75;
    const float Beef_Mush_Burger_Large = 6.50;
    const float Chicken_Wings_Small = 5.00;
    const float Chicken_Wings_Large = 6.25;
    const float Fish_Fillet_Small = 5.50;
    const float Fish_Fillet_Large = 6.50;
   /* Side Dishes' Price */
    const float French_Fries_Small = 1.50;
    const float French_Fries_Large = 2.00;
    const float Fried_Rice_Small = 1.25;
    const float Fried_Rice_Large = 1.75;
    const float Onion_Rings_Small = 2.00;
    const float Onion_Rings_Large = 2.75;
   /* Drinks' Prices */ 
    const float Soda_Small = 1.75;
    const float Soda_Large = 2.25;
    const float Coffee_Small = 2.50;
    const float Coffee_Large = 3.00;
    const float Ice_Tea_Small = 1.50;
    const float Ice_Tea_Large = 2.00;
   /* Sale Tax Rate */
    const float sale_tax_rate = 0.0825;
   /*
    ************* Integer Named Constant Declarations *************
    */
    const int program_failure_code = -1;
    const int small_size_code = 1;
    const int large_size_code = 2;
    const int burger_code = 1;
    const int chicken_code = 2;
    const int fish_code = 3;
    const int french_fries_code = 1;
    const int fried_rice_code = 2;
    const int onion_rings_code = 3;
    const int soda_code = 1;
    const int coffee_code = 2;
    const int ice_tea_code = 3;
    const int no_selection_code = 0;
   /*
    **************** Float Variable Declarations ****************
    */
    float entree_price = 0.0;
    float side_dish_price = 0.0;
    float drink_price = 0.0 ;
    float sub_total_price = 0.0;
    float tax_price = 0.0;
    float total_price = 0.0;
   /*
    **************** Integer Variable Declarations ****************
    */
    int entree_selection;
    int side_selection;
    int drink_selection;
    int entree_size;
    int side_dish_size;
    int drink_size;
   /*
    ********************** Execution Section ********************** 
    *
    ********************* Greeting Subsection *********************
    * 
    *    The following lines will print the greeting messages
    *            to the user on the computer screen 
    */
    printf("     ( ＾ｖ＾)  いらっしゃいませ  ( ＾ｖ＾）\n"
           "Irasshaimase. Welcome to the Takeda Clan Restaurant!!!\n"
	   "    We are the Best Choice for American Food Lover\n "
           "            in the Greater Tokyo Area.\n"
           "              Here You Can Enjoy the\n "
	   "        Best of American Fast Food (｡^‿^｡) \n"
	   "\n"
	   );
   /*
    ******************** Input Subsection ********************
    *
    ***************** Input Customer Orders ******************
    *
    ******************** Entree Selection ********************
    */
    printf("We Will Now Ask You to Make Your Order\n");
    printf("What Would You Like for Your Entree?\n"
	   "Please enter: \n"
	   "0 for no Entree\n"
           "1 for Beef Mushroom Burger\n"
	   "2 for Chicken Wings\n"
           "3 for Fish Fillets\n"
	  );

    printf("Please Input Your Selection: ");    
    scanf("%d", &entree_selection);
   /* Idiotproofing for entry selection. Program will exit if
    * error encountered 
    */
    if ((entree_selection != no_selection_code) &&
        (entree_selection != burger_code) &&
        (entree_selection != chicken_code) &&
        (entree_selection != fish_code)) {
        printf("Error: Invalid Input %d for entree item encountered.\n"
		,entree_selection);
        printf("Program will now exit. Sorry for any inconvenience.\n");
        exit(program_failure_code);
    } /* if entree_selection != no_selection code && ... */
    else if (entree_selection != no_selection_code) {
        printf("\n");
        printf("Please Select the Size for your Order\n"
	       "Please Enter: \n"
               "1 for Small Size\n"
               "2 for Large Size\n"
               );
        printf("Please Input Your Selection: ");
        scanf("%d", &entree_size);
       /* Idiotproof for size selection. Program will exit if
        * error encountered 
        */
        if ((entree_size != small_size_code) &&
           (entree_size != large_size_code)) {
           printf("Invalid Input %d for size selection.\n"
                  ,entree_size);
           printf("Program will now exit. Sorry for any"
                  " inconvenience.\n"
                 );
           exit(program_failure_code);
        } /* if entree_size != size_code */
        printf("\n");
    } /* if entree_selection != no_selection_code */


   /* 
    ****************** Side Dish Selection ******************
    */
    printf("What Would You Like for Your Side Dish?\n"
           "Please enter: \n"
           "0 for no Side Dish\n"
           "1 for French Fries\n"
           "2 for Yakimeshi Fried Rice\n"
           "3 for Onion Rings\n"
          );
    printf("Please Input Your Selection: ");
    scanf("%d", &side_selection);
   /* Idiotproof for side dish selection. Program will exit if 
    * error encountered
    */
    if ((side_selection != no_selection_code) &&
        (side_selection != french_fries_code) &&
        (side_selection != fried_rice_code) &&
        (side_selection != onion_rings_code)) {
        printf("Error: Invalid Input %d for side item encountered.\n"
                ,side_selection);
        printf("Program will now exit. Sorry for any inconvenience.\n");
        exit(program_failure_code);
    } /* if side_selection != no_selection code && ... */
    else if (side_selection != no_selection_code) {
            printf("\n");
            printf("Please Select the Size for your Order\n"
                   "Please Enter: \n"
                   "1 for Small Size\n"
                   "2 for Large Size\n"
                  );
            printf("Please Input Your Selection: ");
            scanf("%d", &side_dish_size);
           /* Idiotproof for size selection. Program will exit if
            * error encountered
            */
            if ((side_dish_size != small_size_code) &&
                (side_dish_size != large_size_code)) {
                printf("Invalid Input %d for size selection.\n"
                       ,side_dish_size);
                printf("Program will now exit. Sorry for any ");
                printf("inconvenience.\n");
                exit(program_failure_code);
                } /* if side_dish_size != size_code */
            printf("\n");
    } /* else if side_selection != no_selection_code */

   /*
    ***************** Beverage Selection *******************
    */
     printf("What Would You Like for Your Drink?\n"
           "Please enter: \n"
           "0 for no Drink\n"
           "1 for Soda\n"
           "2 for Coffee\n"
           "3 for Ice Tea\n"
          );
    printf("Please Input Your Selection: ");
    scanf("%d", &drink_selection);
   /* Idiotproof for drink selection. Program will exit if
    * error encountered
    */
    if ((drink_selection != no_selection_code) &&
        (drink_selection != coffee_code) &&
        (drink_selection != ice_tea_code) &&
        (drink_selection != soda_code)) {
        printf("Error: Invalid Input %d for drink item encountered.\n"
                ,drink_selection);
        printf("Program will now exit. Sorry for any inconvenience.\n");
        exit(program_failure_code);
    } /* if (drink_selection != no_selection_code && ... */
    else if (drink_selection != no_selection_code) {
             printf("\n");
             printf("Please Select the Size for your Order\n"
                    "Please Enter: \n"
                    "1 for Small Size\n"
                    "2 for Large Size\n"
                   );
             printf("Please Input Your Selection: ");
             scanf("%d", &drink_size);
            /* Idiotproof for size selection. Program will exit if
             * error encountered
             */
             if ((drink_size != small_size_code) &&
                 (drink_size != large_size_code)) {
                 printf("Invalid Input %d for size selection.\n"
                        ,drink_size);
                 printf("Program will now exit. Sorry for any"
                        " inconvenience.\n"
                       );
                 exit(program_failure_code);
             } /* if drink_size != size_code */
             printf("\n");
    } /* else if drink_selection != no_selection code */
   /*
    ****************** Customer Chose Nothing *******************
    */
    if (entree_selection == no_selection_code &&
        side_selection == no_selection_code &&
        drink_selection == no_selection_code) {
        printf("Thank You for Coming."
               " We Hope to See You Again.\n"
              );
        exit(program_failure_code);
    } /* if entree_selection == no_selection_code && ... */

   /*
    ***************** Calculation Subsection ******************
    *
    *************** Entree Choice Calculation *****************
    */
    if (entree_selection == burger_code) {
        if (entree_size == small_size_code)
            entree_price = Beef_Mush_Burger_Small;
        else if (entree_size == large_size_code)
            entree_price = Beef_Mush_Burger_Large;
     } /* if entree_selection == burger_code */

    else if (entree_selection == chicken_code) {
             if (entree_size == small_size_code)
                 entree_price = Chicken_Wings_Small;
             else if (entree_size == large_size_code)
                 entree_price = Chicken_Wings_Large;
    } /* entree_selection == chicken_code */

    else if (entree_selection == fish_code) {
             if (entree_size == small_size_code)
                 entree_price = Fish_Fillet_Small;
             else if (entree_size == large_size_code)
                 entree_price = Fish_Fillet_Large;
    } /* entree_selection == fish_code */
    
   /*
    ************* Side Dish Choice Calculation ***************
    */
    if (side_selection == french_fries_code) {
        if (side_dish_size == small_size_code)
            side_dish_price = French_Fries_Small;
        else if (side_dish_size == large_size_code)
            side_dish_price = French_Fries_Large;
    } /* if side_selection == french_fries_code */

    else if (side_selection == fried_rice_code) {
        if (side_dish_size == small_size_code)
            side_dish_price = Fried_Rice_Small;
        else if (side_dish_size == large_size_code)
            side_dish_price = Fried_Rice_Large;
    } /* if entree_selection == fried_rice_code */
    
    else if (side_selection == onion_rings_code) {
        if (side_dish_size == small_size_code)
            side_dish_price = Onion_Rings_Small;
        else if (side_dish_size == large_size_code)
            side_dish_price = Onion_Rings_Large;
    } /* if side_dish_selection == onion_rings_code */
   
   /*
    *************** Drink Choice Calculation ******************
    */
    if (drink_selection == soda_code) {
        if (drink_size == small_size_code)
            drink_price = Soda_Small;
        else if (drink_size == large_size_code)
            drink_price = Soda_Large;
    } /* if drink_selection == soda_code */

    else if (drink_selection == coffee_code) {
        if (drink_size == small_size_code)
            drink_price = Coffee_Small;
        else if (drink_size == large_size_code)
            drink_price = Coffee_Large;
    } /* if drink_selection == coffee_code */

    else if (drink_selection == ice_tea_code) {
        if (drink_size == small_size_code)
            drink_price = Ice_Tea_Small;
        else if (drink_size == large_size_code)
            drink_price = Ice_Tea_Large;
    } /* if drink_selection == ice_tea_code */

   /*
    ************** Total Price Calculation *******************
    *
    * Calculate the price of customer's selections before tax
    */
    if (entree_selection != no_selection_code &&
        side_selection != no_selection_code &&
        drink_selection != no_selection_code) {
        sub_total_price = entree_price + 
        side_dish_price + drink_price;
    } /* if entree_selection != no_selection_code && ... */
   
   /* Preventing exceeedingly large output number */
    else if (entree_selection == no_selection_code) {
        entree_price = 0;
        sub_total_price = side_dish_price + drink_price;
    } /* if entree_selection == no_selection_code */
    else if (side_selection == no_selection_code) {
        side_dish_price = 0;
        sub_total_price = entree_price + drink_price;
    } /* if side_selection == no_selection_code */
    else if (drink_selection == no_selection_code) {
        drink_price = 0;
        sub_total_price = entree_price + side_dish_price;
    } /* if drink_selection == no_selection_code */
    else if (entree_selection == no_selection_code &&
             side_selection == no_selection_code &&
             drink_selection != no_selection_code)  {
        entree_price = 0;
        side_dish_price = 0;
        sub_total_price = drink_price;
    } /* if entree == no_ && side == no_ */
    else if (entree_selection == no_selection_code &&
             drink_selection == no_selection_code &&
             side_selection != no_selection_code) {
        entree_price = 0;
        drink_price = 0;
        sub_total_price = side_dish_price;
    } /* if entree == no_ && side = no_ */
    else if (side_selection == no_selection_code &&
             drink_selection == no_selection_code &&
             entree_selection != no_selection_code) {
        side_dish_price = 0;
        drink_price = 0;
        sub_total_price = entree_price;
    } /* if side == no_ && drink == no_ */


   /*
    ******************* Tax Calculation **********************
    */
    tax_price = sub_total_price * sale_tax_rate;
   /*
    **************** Total Price Calculation *****************
    */
    total_price = sub_total_price + tax_price;

   /*
    ********************* Recipe Printout ********************
    */
    printf("-----------------------------------------------\n");
    printf("             Takeda Clan Restaurant            \n"); 
    printf("                    Receipt                    \n");
    printf("-----------------------------------------------\n");
    printf(" Your Order:                                   \n");
    printf("-----------------------------------------------\n");
    if (entree_selection == burger_code && 
        entree_size == small_size_code) {
        printf(" Beef Mushroom Burger Small           $ %5.2f  \n"
               , entree_price);
    } /* if entree_selection == burger_code && ... small */
    else if (entree_selection == burger_code &&
             entree_size == large_size_code) {
        printf(" Beef Mushroom Burger Large           $ %5.2f  \n"
               , entree_price);
    } /* if entree_selection == burger_code && ... large */
    else if (entree_selection == chicken_code &&
             entree_size == small_size_code) {
        printf(" Chicken Wings Small                  $ %5.2f  \n"
               , entree_price);
    } /* if entree_selection == chicken_code && ... small */
    else if (entree_selection == chicken_code &&
             entree_size == large_size_code) {
        printf(" Chicken Wings Small                  $ %5.2f  \n"
               , entree_price);
    } /* if entree_selection == chicken_code && ... large */
    else if (entree_selection == fish_code &&
             entree_size == small_size_code) {
        printf(" Fish Fillets Small                   $ %5.2f  \n"
               , entree_price);
    } /* if entree_selection == fish_code && ... small */
    else if (entree_selection == fish_code &&
             entree_size == large_size_code) {
        printf(" Fish Fillets Large                   $ %5.2f  \n"
               , entree_price);
    } /* if entree_selection == fish_code && ... large */
    
    if (side_selection == french_fries_code &&
        side_dish_size == small_size_code) {
        printf(" French Fries Small                   $ %5.2f  \n"
               , side_dish_price);
    } /* if_side_selection == french_fries_code && ... small */
    else if (side_selection == french_fries_code &&
             side_dish_size == large_size_code) {
        printf(" French Fries Large                   $ %5.2f  \n"
               , side_dish_price);
    } /* if_side_selection == french_fries_code && ... large */
    else if (side_selection == fried_rice_code &&
             side_dish_size == small_size_code) {
        printf(" Yakimeshi Rice Small                 $ %5.2f  \n"
               , side_dish_price);
    } /* if side_selection == fried_rice_code && ... small */
    else if (side_selection == fried_rice_code &&
             side_dish_size == large_size_code) {
        printf(" Yakimeshi Rice Large                 $ %5.2f  \n"
               , side_dish_price);
    } /* if side_selection == fried_rice_code && ... large */
    else if (side_selection == onion_rings_code &&
             side_dish_size == small_size_code) {
        printf(" Onion Rings Small                    $ %5.2f  \n"
               , side_dish_price);
    } /* if side_selection == onion_rings_code && ... small */
    else if (side_selection == onion_rings_code &&
             side_dish_size == large_size_code) {
        printf(" Onion Rings Large                    $ %5.2f  \n"
               , side_dish_price);
    } /* if side_selection == onion_rings_code && ... large */
    
    if (drink_selection == soda_code &&
        drink_size == small_size_code) {
        printf(" Soda Small                           $ %5.2f  \n"
               , drink_price);
    } /* if drink_selection == soda_code && ... small */
    else if (drink_selection == soda_code &&
             drink_size == large_size_code) {
        printf(" Soda Large                           $ %5.2f  \n"
               , drink_price);
    } /* if drink_selection == soda_code && ... large */
    else if (drink_selection == coffee_code &&
             drink_size == small_size_code) {
        printf(" Coffee Small                         $ %5.2f  \n"
               , drink_price);
    } /* if drink_selection == coffee_code && ... small */
    else if (drink_selection == coffee_code &&
             drink_size == large_size_code) {
        printf(" Coffee Large                         $ %5.2f  \n"
               , drink_price);
    } /* if drink_selection == coffee_code && ... large */
    else if (drink_selection == ice_tea_code &&
             drink_size == small_size_code) {
        printf(" Ice Tea Small                        $ %5.2f  \n"
               , drink_price);
    } /* if drink_selection == ice_tea_code && ... small */
    else if (drink_selection == ice_tea_code &&
             drink_size == large_size_code) {
        printf(" Ice Tea Large                        $ %5.2f  \n"
               , drink_price);
    } /* if drink_selection == ice_tea_code && ... large */

    printf("-----------------------------------------------\n");
    printf(" Subtotal:                            $ %5.2f  \n"
           , sub_total_price);
    printf(" Tax:                                 $ %5.2f  \n"
           , tax_price);
    printf("-----------------------------------------------\n");
    printf(" Grand Total:                         $ %5.2f  \n"
           , total_price);
    printf("\n");
    printf("-----------------------------------------------\n");
    printf("             Arigatougozaimashita              \n");
    printf(" Thank You for Choosing Takeda Clan Restaurant \n");
    printf("           We Hope to See You Again            \n");
    printf("-----------------------------------------------\n");

} /* main */    
