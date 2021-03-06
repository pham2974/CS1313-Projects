/* 
**********************************************************************
 *** Project #4:  Fast Food Restaurant                              ***
 *** Program:     fastfoodres                                       ***
 *** Author:      Tri Pham (tri.g.pham-1@ou.edu)                    ***
 *** Class:       CS 1313 010 Computer Programming, Spring 2017     ***
 *** Lab:         Sec 012 Fridays 1:00pm                            ***
 *** Description: Grade calculation software for special section    ***
 ***              of CS1313 (Quiz, Projects, Lab, Final Exam)       ***
 **********************************************************************
 */

#include <stdio.h>
#include <stdlib.h>
int main()

{ /* main */
   /* 
    ********************* DECLARATION SECTION ***********************
    *
    ****************** Named Constant Declaration *******************
    *
    ******************** Float Scalar Declaration *******************   
    */
    const float quiz_percent_worth = 10.00;
    const float project_percent_worth = 45.00;
    const float lab_percent_worth = 10.00;
    const float exam_percent_worth = 35.00;    
   /*
    ******************* Integer Scalar Declaration ******************
    */
    const int quiz1_max_score = 30;
    const int quiz2_max_score = 170;
    const int quiz3_max_score = 130;
    const int quiz4_max_score = 115;
    const int proj1_max_score = 250;
    const int proj2_max_score = 1000;
    const int proj3_max_score = 2000;
    const int lab_max_score = 12;
    const int exam_max_score = 800;
    const int program_failure_code = -1;
   /*
    ******************** Variable Declarations **********************
    *
    ********************* Array Declarations ************************
    *
    ******************* Char Array Declarations *********************
    */
    char* overall_letter_grade = (char*)NULL;

   /*
    ****************** Float Array Declarations *********************
    */
    float* quiz1_score = (float*)NULL;
    float* quiz2_score = (float*)NULL; 
    float* quiz3_score = (float*)NULL;
    float* quiz4_score = (float*)NULL;
    float* proj1_score = (float*)NULL;
    float* proj2_score = (float*)NULL;
    float* proj3_score = (float*)NULL;
    float* exam_score = (float*)NULL;
    float* lab_score = (float*)NULL;
    float* total_score = (float*)NULL;
    float* total_quiz_score = (float*)NULL;
    float* total_project_score = (float*)NULL;
    float* total_exam_score = (float*)NULL;
    float* total_lab_score = (float*)NULL;
   /*
    **************** Integer Array Declarations *********************
    */
    int* student_ID = (int*)NULL;
   /*
    ***************** Float Scalar Declarations *********************
    */
    float initial_score_sum = 0.0;
    float overall_score_sum;
    float overall_mean_score;
    float quiz1_mean_score, quiz2_mean_score;
    float quiz3_mean_score, quiz4_mean_score;
    float proj1_mean_score, proj2_mean_score;
    float proj3_mean_score;
    float lab_mean_score;
    float exam_mean_score;
    float quiz1_sum, quiz2_sum, quiz3_sum, quiz4_sum;
    float proj1_sum, proj2_sum, proj3_sum;
    float lab_score_sum;
    float exam_sum;
    float initial_quiz1_sum = 0.0;
    float initial_quiz2_sum = 0.0;
    float initial_quiz3_sum = 0.0;
    float initial_quiz4_sum = 0.0;
    float initial_proj1_sum = 0.0;
    float initial_proj2_sum = 0.0;
    float initial_proj3_sum = 0.0;
    float initial_lab_sum = 0.0;
    float initial_exam_sum = 0.0;
    float quiz1_lowest_score;
    float quiz2_lowest_score;
    float quiz3_lowest_score; 
    float quiz4_lowest_score;
    float proj1_lowest_score; 
    float proj2_lowest_score;
    float proj3_lowest_score;
    float exam_lowest_score;
    float lab_lowest_score;
    float quiz1_highest_score;
    float quiz2_highest_score;
    float quiz3_highest_score;
    float quiz4_highest_score;
    float proj1_highest_score;
    float proj2_highest_score;
    float proj3_highest_score;
    float exam_highest_score;
    float lab_highest_score;
    float overall_lowest_score;
    float overall_highest_score;
   /*
    **************** Integer Scalar Declarations ********************
    */
    int course_year;
    int semester;
    int first_student = 0;
    int number_of_students;
    int student;
    int line_number;
    int number_of_lines;
   /*
    ********************** EXECUTION SECTION ************************ 
    *
    ********************** Input Subsection *************************
    *
    ************ Dynamic Memory Allocation fo Arrays ****************
    *
    * Reading Course Year, Semester  from dr.Neeman's files
    */
    scanf("%d %d", &course_year, &semester);
   /* 
    * Idiotproofing for input course year value
    */ 
    if (course_year < 0) {
       printf("Invalid Course Year Value %d Encountered.\n", 
              course_year);
       exit(program_failure_code);
    } /* if course_year */
   /*
    * Idiotproofing for input semester value
    */
    if (semester < 1 || semester > 2) {
       printf("Invalid Semester Value %d Encountered.\n", 
              semester);
       exit(program_failure_code);
    } /* if course_year */
    scanf("%d", &number_of_students);
   /*
    * Idiotproofing for input number of students value
    */
    if (number_of_students <= 0) {
       printf("Invalid Number of Student Value %d Encountered.\n",
              number_of_students);
       exit(program_failure_code);
    } /* if course_year */
   /*
    ************ Dynamic Memory Allocation for Arrays ***************
    */
    overall_letter_grade = (char*)malloc(sizeof(char) * 
                            number_of_students);
    if (overall_letter_grade == (char*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if overall_letter_grade */
    quiz1_score = (float*)malloc(sizeof(float) * number_of_students);
    if (quiz1_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (quiz1_score) */
    quiz2_score = (float*)malloc(sizeof(float) * number_of_students);
    if (quiz2_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (quiz2_score) */
    quiz3_score = (float*)malloc(sizeof(float) * number_of_students);
    if (quiz3_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (quiz3_score) */
    quiz4_score = (float*)malloc(sizeof(float) * number_of_students);
    if (quiz4_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (quiz4_score) */
    proj1_score = (float*)malloc(sizeof(float) * number_of_students);
    if (proj1_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (proj1_score) */
    proj2_score = (float*)malloc(sizeof(float) * number_of_students);
    if (proj2_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (proj2_score) */
    proj3_score = (float*)malloc(sizeof(float) * number_of_students);
    if (proj3_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (proj3_score) */
    exam_score = (float*)malloc(sizeof(float) * number_of_students);
    if (exam_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (exam_score) */
    lab_score = (float*)malloc(sizeof(float) * number_of_students);
    if (lab_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (lab_score) */
    total_quiz_score = (float*)malloc(sizeof(float) *  
                        number_of_students);
    if (total_quiz_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (total_quiz_score) */
    total_project_score = (float*)malloc(sizeof(float) * 
                           number_of_students);
    if (total_project_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (total_project_score) */
    total_lab_score = (float*)malloc(sizeof(float) *
                       number_of_students);
    if (total_lab_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (total_lab_score) */
    total_exam_score = (float*)malloc(sizeof(float) *
                        number_of_students);
    if (total_exam_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (total_exam_score) */
    total_score = (float*)malloc(sizeof(float) *
                        number_of_students);
    if (total_score == (float*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (total_score) */
    student_ID = (int*)malloc(sizeof(int) * number_of_students);
    if (student_ID  == (int*)NULL) {
        printf("Failed Attempt to Allocate.\n");
        exit(program_failure_code);
    } /* if (student_ID) */
   /*
    * Reading Student ID and Grades from txt files
    */
    for (student = first_student; student < number_of_students;
        student++) {
        scanf("%d %f %f %f %f %f %f %f %f %f",
              &student_ID[student], &quiz1_score[student], 
              &quiz2_score[student], &quiz3_score[student],
              &quiz4_score[student], &proj1_score[student],
              &proj2_score[student], &proj3_score[student],
              &lab_score[student], &exam_score[student]);
   /*
    * Idiotproofing for all input values from Dr. Neeman's files
    */
        if (student_ID[student] < 0) {
           printf("Error encountered with invalid student ID value.\n");
           exit(program_failure_code);
        } /* if student_ID */
        if (lab_score[student] < 0 || lab_score[student] > 
            lab_max_score) {
           printf("Error encountered with invalid lab score value."
                  " Program will now exit.\n");
           exit(program_failure_code);
        } /* if (lab_score < 0 || ... */
        if ((quiz1_score[student] < 0 ||
             quiz1_score[student] > quiz1_max_score) ||
            (quiz2_score[student] < 0 ||
             quiz2_score[student] > quiz2_max_score) ||
            (quiz3_score[student] < 0 ||
             quiz3_score[student] > quiz3_max_score) ||
            (quiz4_score[student] < 0 ||
             quiz4_score[student] > quiz4_max_score)) {
           printf("Error encountered with quiz score values."
                  " Program will now exit.\n");
           exit(program_failure_code);
        } /* if ((quiz1_score < 0 || ... */
        if (exam_score[student] < 0 || 
            exam_score[student] > exam_max_score) {
           printf("Error encountered with invalid exam score values."
                  " Program will now exit.\n");
           exit(program_failure_code);
        } /* if (exam_score < 0 || ... */
        if ((proj1_score[student] < 0 || 
             proj1_score[student] > proj1_max_score) ||
            (proj2_score[student] < 0 || 
             proj2_score[student] > proj2_max_score) ||
            (proj3_score[student] < 0 || 
             proj3_score[student] > proj3_max_score)) {
            printf("Error encountered with invalid project" 
                   " score values."
                   " Program will now exit.\n");
            exit(program_failure_code);
        } /* if (proj1_score < 0 || ... */
    } /* for student */
   /*
    ******************* Calculation Subsection **********************
    *
    * Calculation of the grade for individual student
    * 
    * Calculate the total quiz grade for individual student
    */
    for (student = first_student; student < number_of_students;
         student++) {
        total_quiz_score[student] = 
        ((quiz1_score[student] + quiz2_score[student] + 
          quiz3_score[student] + quiz4_score[student]) /
         (quiz1_max_score + quiz2_max_score + quiz3_max_score +
          quiz4_max_score)) * quiz_percent_worth;
    } /* for student */
   /*
    * Calculate the total project grade for individual student
    */
    for (student = first_student; student < number_of_students;
         student++) {
        total_project_score[student] = 
        ((proj1_score[student] + proj2_score[student] + 
          proj3_score[student]) / (proj1_max_score +
          proj2_max_score + proj3_max_score)) * project_percent_worth;
    } /* for student */
   /*
    * Calculate the total exam grade for individual student
    */
    for (student = first_student; student < number_of_students;
         student++) {
        total_exam_score[student] = (exam_score[student] / 
        exam_max_score) * exam_percent_worth;
    } /* for student */
   /*
    * Calculate the total lab grade for individual student
    */
    for (student = first_student; student < number_of_students;
         student++) {
        total_lab_score[student] = (lab_score[student] /
        lab_max_score) * lab_percent_worth;
    } /* for student */
   /*
    * Calculate the overall grade for individual student
    */            
    for (student = first_student; student < number_of_students;
         student++) {
        total_score[student] = total_quiz_score[student] +
                               total_project_score[student] +
                               total_exam_score[student] + 
                               total_lab_score[student];
        if (total_score[student] > 100) {
           printf("Error encountered with total score value.\n");
           exit(program_failure_code);
        } /* if total_score */
    } /* for student */
   /*
    * Assign letter grade to individual student
    */
    for (student = first_student; student < number_of_students;
         student++) {
        if (total_score[student] >= 90) {
            overall_letter_grade[student] = 'A';
        } /* if total_score */
        else if (total_score[student] >= 80 && 
            total_score[student] < 90) {
            overall_letter_grade[student] = 'B';
        } /* else if total_score */
        else if (total_score[student] >= 70 &&
            total_score[student] < 80) {
            overall_letter_grade[student] = 'C';
        } /* else if total_score */
        else if (total_score[student] >= 60 &&
            total_score[student] < 70) {
            overall_letter_grade[student] = 'D';
        } /* else if total_score */
        else {
            overall_letter_grade[student] = 'F';
        } /* else */
    } /* for student */
   /*
    *************** Calculation for Each Assignment *****************
    *
    ************** Calculate the mean of quiz 1 score ***************
    */
    quiz1_sum = initial_quiz1_sum;    
    for (student = first_student; student < number_of_students;
         student++) {
   /*
    * Sum the quiz 1 grade of the student enrolled
    */
        quiz1_sum += quiz1_score[student];
    } /* for student */
    quiz1_mean_score = quiz1_sum / number_of_students;
   /*
    ************ Calculate the mean of quiz 2 score *****************
    */
    quiz2_sum = initial_quiz2_sum;
    for (student = first_student; student < number_of_students;
         student++) {
   /*
    * Sum the quiz 2 grade of the student enrolled
    */
        quiz2_sum += quiz2_score[student];
    } /* for student */
    quiz2_mean_score = quiz2_sum / number_of_students;
   /*
    ************ Calculate the mean of quiz 3 score *****************
    */
    quiz3_sum = initial_quiz3_sum;
    for (student = first_student; student < number_of_students;
         student++) {
   /*
    * Sum the quiz 3 grade of the student enrolled
    */
        quiz3_sum += quiz3_score[student];
    } /* for student */
    quiz3_mean_score = quiz3_sum / number_of_students;
   /*
    ************ Calculate the mean of quiz 4 score *****************
    */
    quiz4_sum = initial_quiz4_sum;
    for (student = first_student; student < number_of_students;
         student++) {
   /*
    * Sum the quiz 4 grade of the student enrolled
    */
        quiz4_sum += quiz4_score[student];
    } /* for student */
    quiz4_mean_score = quiz4_sum / number_of_students;
   /*
    *********** Calculate the mean of project 1 score ***************
    */
    proj1_sum = initial_proj1_sum;
    for (student = first_student; student < number_of_students;
         student++) {
   /*
    * Sum the project 1 grade of the student enrolled
    */
        proj1_sum += proj1_score[student];
    } /* for student */
    proj1_mean_score = proj1_sum / number_of_students;
   /*
    *********** Calculate the mean of project 2 score ***************
    */
    proj2_sum = initial_proj2_sum;
    for (student = first_student; student < number_of_students;
         student++) {
   /*
    * Sum the project 2 grade of the student enrolled
    */
        proj2_sum += proj2_score[student];
    } /* for student */
    proj2_mean_score = proj2_sum / number_of_students;
   /*
    *********** Calculate the mean of project 3 score ***************
    */
    proj3_sum = initial_proj3_sum;
    for (student = first_student; student < number_of_students;
         student++) {
   /*
    * Sum the project 3 grade of the student enrolled
    */
        proj3_sum += proj3_score[student];
    } /* for student */
    proj3_mean_score = proj3_sum / number_of_students;
   /*
    *************** Calculate the mean of lab score *****************
    */
    lab_score_sum = initial_lab_sum;
    for (student = first_student; student < number_of_students;
         student++) {
   /*
    * Sum the lab grade of the student enrolled
    */
        lab_score_sum += lab_score[student];
    } /* for student */
    lab_mean_score = lab_score_sum / number_of_students;
   /*
    *************** Calculate the mean of exam score ****************
    */
    exam_sum = initial_exam_sum;
    for (student = first_student; student < number_of_students;
         student++) {
   /*
    * Sum the exam grade of the student enrolled
    */
        exam_sum += exam_score[student];
    } /* for student */
    exam_mean_score = exam_sum / number_of_students;
   /*
    * Find the Quiz 1 lowest score
    */
    quiz1_lowest_score = quiz1_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (quiz1_score[student] < quiz1_lowest_score) {
           quiz1_lowest_score = quiz1_score[student];
        } /* if quiz1_score */
    } /* for student */
   /*
    * Find the Quiz 2 lowest score
    */
    quiz2_lowest_score = quiz2_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (quiz2_score[student] < quiz2_lowest_score) {
           quiz2_lowest_score = quiz2_score[student];
        } /* if quiz2_score */
    } /* for student */
   /*
    * Find the Quiz 3 lowest score
    */
    quiz3_lowest_score = quiz3_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (quiz3_score[student] < quiz3_lowest_score) {
           quiz3_lowest_score = quiz3_score[student];
        } /* if quiz3_score */
    } /* for student */
   /*
    * Find the Quiz 4 lowest score
    */
    quiz4_lowest_score = quiz4_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (quiz4_score[student] < quiz4_lowest_score) {
           quiz4_lowest_score = quiz4_score[student];
        } /* if quiz4_score */
    } /* for student */
   /*
    * Find the Project 1 lowest score
    */
    proj1_lowest_score = proj1_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (proj1_score[student] < proj1_lowest_score) {
           proj1_lowest_score = proj1_score[student];
        } /* if proj1_score */
    } /* for student */
   /*
    * Find the Project 2 lowest score
    */
    proj2_lowest_score = proj2_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (proj2_score[student] < proj2_lowest_score) {
           proj2_lowest_score = proj2_score[student];
        } /* if proj2_score */
    } /* for student */
   /*
    * Find the Project 3 lowest score
    */
    proj3_lowest_score = proj3_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (proj3_score[student] < proj3_lowest_score) {
           proj3_lowest_score = proj3_score[student];
        } /* if proj3_score */
    } /* for student */
   /*
    * Find the Lab lowest score
    */
    lab_lowest_score = lab_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (lab_score[student] < lab_lowest_score) {
           lab_lowest_score = lab_score[student];
        } /* if lab_score */
    } /* for student */
   /*
    * Find the Exam lowest score
    */
    exam_lowest_score = exam_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (exam_score[student] < exam_lowest_score) {
           exam_lowest_score = exam_score[student];
        } /* if exam_score */
    } /* for student */
   /*
    * Find the Quiz 1 highest score
    */
    quiz1_highest_score = quiz1_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (quiz1_score[student] > quiz1_highest_score) {
           quiz1_highest_score = quiz1_score[student];
        } /* if quiz1_score */
    } /* for student */
   /*
    * Find the Quiz 2 highest score
    */
    quiz2_highest_score = quiz2_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (quiz2_score[student] > quiz2_highest_score) {
           quiz2_highest_score = quiz2_score[student];
        } /* if quiz2_score */
    } /* for student */
   /*
    * Find the Quiz 3 highest score
    */
    quiz3_highest_score = quiz3_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (quiz3_score[student] > quiz3_highest_score) {
           quiz3_highest_score = quiz3_score[student];
        } /* if quiz3_score */
    } /* for student */
   /*
    * Find the Quiz 4 highest score
    */
    quiz4_highest_score = quiz4_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (quiz4_score[student] > quiz4_highest_score) {
           quiz4_highest_score = quiz4_score[student];
        } /* if quiz4_score */
    } /* for student */
   /*
    * Find the Project 1 highest score
    */
    proj1_highest_score = proj1_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (proj1_score[student] > proj1_highest_score) {
           proj1_highest_score = proj1_score[student];
        } /* if proj1_score */
    } /* for student */
   /*
    * Find the Project 2 highest score
    */
    proj2_highest_score = proj2_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (proj2_score[student] > proj2_highest_score) {
           proj2_highest_score = proj2_score[student];
        } /* if proj2_score */
    } /* for student */
   /*
    * Find the Project 3 highest score
    */
    proj3_highest_score = proj3_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (proj3_score[student] > proj3_highest_score) {
           proj3_highest_score = proj3_score[student];
        } /* if proj3_score */
    } /* for student */
   /*
    * Find the Lab highest score
    */
    lab_highest_score = lab_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (lab_score[student] > lab_highest_score) {
           lab_highest_score = lab_score[student];
        } /* if lab_score */
    } /* for student */
   /*
    * Find the Exam highest score
    */
    exam_highest_score = exam_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (exam_score[student] > exam_highest_score) {
           exam_highest_score = exam_score[student];
        } /* if exam_score */
    } /* for student */
   /*
    *************** Calculation for the Entire Class ****************
    *
    * Calculate mean of overall score
    */
    overall_score_sum = initial_score_sum;
    for (student = first_student; student < number_of_students;
         student++) {
   /*
    * Sum the grade of all the enrolled student
    */
        overall_score_sum += total_score[student];
    } /* for student */
    overall_mean_score = overall_score_sum / number_of_students;
   /*
    * Find the Overall lowest score
    */
    overall_lowest_score = total_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (total_score[student] < overall_lowest_score) {
           overall_lowest_score = total_score[student];
        } /* if total_score */
    } /* for student */
   /*
    * Find the Overall highest score
    */
    overall_highest_score = total_score[first_student];
    for (student = first_student; student < number_of_students;
         student++) {
        if (total_score[student] > overall_highest_score) {
           overall_highest_score = total_score[student];
        } /* if total_score */
    } /* for student */
   /*
    ********************** Output Subsection ************************
    */
    printf("CS1313-Programming for Non-Majors.\n");
    if (semester == 1) {
       printf("Semester: Spring %d.\n", course_year);
    } /* if semester */
    if (semester == 2) {
       printf("Semester: Fall %d.\n", course_year);
    } /* if semester */
    printf("Number of Students Enrolled: %d.\n", number_of_students);
    for (student = first_student; student < number_of_students;
         student++) {
        printf("Student ID: %d \n" 
               "Overall Score: %5.2f(%) Letter Grade: %c.\n",
               student_ID[student], total_score[student],
               overall_letter_grade[student]);  
    } /* for student */
    printf("\n");
    printf("Mean Score for Individual Assignment"
           "(Q for Quiz, PP for Project):\n"
           "Q1: %5.2f   Q2: %5.2f   Q3: %5.2f   Q4: %5.2f \n"
           "PP1: %5.2f   PP2: %5.2f   PP3: %5.2f \n"
           "Lab: %5.2f \n"   
           "Final Exam: %5.2f \n",
           quiz1_mean_score, quiz2_mean_score, quiz3_mean_score,
           quiz4_mean_score, proj1_mean_score, proj2_mean_score,
           proj3_mean_score, lab_mean_score, exam_mean_score);
    printf("\n");       
    printf("Lowest Score for Individual Assignment"
           "(Q for Quiz, PP for Project):\n"
           "Q1: %5.2f   Q2: %5.2f   Q3: %5.2f   Q4: %5.2f \n"
           "PP1: %5.2f   PP2: %5.2f   PP3: %5.2f \n"
           "Lab: %5.2f \n"  
           "Final Exam: %5.2f \n",
           quiz1_lowest_score, quiz2_lowest_score, 
           quiz3_lowest_score, quiz4_lowest_score, 
           proj1_lowest_score, proj2_lowest_score,
           proj3_lowest_score, lab_lowest_score, 
           exam_lowest_score);
    printf("\n");
    printf("Highest Score for Individual Assignment"
           "(Q for Quiz, PP for Project):\n"
           "Q1: %5.2f   Q2: %5.2f   Q3: %5.2f   Q4: %5.2f \n"
           "PP1: %5.2f   PP2: %5.2f   PP3: %5.2f \n"
           "Lab: %5.2f \n"
           "Final Exam: %5.2f \n",
           quiz1_highest_score, quiz2_highest_score,
           quiz3_highest_score, quiz4_highest_score,
           proj1_highest_score, proj2_highest_score,
           proj3_highest_score, lab_highest_score,
           exam_highest_score);
    printf("\n");
    printf("Class Statistic \n");
    printf("Overall Score Mean: %5.2f(%) \n"
           "Lowest Overall Score: %5.2f(%) \n"
           "Highest Overall Score: %5.2f(%) \n",
           overall_mean_score, overall_lowest_score,
           overall_highest_score);
   /*
    * Deallocating the arrays
    */
    free(overall_letter_grade);
    overall_letter_grade = (char*)NULL;
    free(quiz1_score);
    quiz1_score = (float*)NULL;
    free(quiz2_score);
    quiz2_score = (float*)NULL;
    free(quiz3_score);
    quiz3_score = (float*)NULL;
    free(quiz4_score);
    quiz4_score = (float*)NULL;
    free(proj1_score);
    proj1_score = (float*)NULL;
    free(proj2_score);
    proj2_score = (float*)NULL;
    free(proj3_score);
    proj3_score = (float*)NULL;
    free(exam_score);
    exam_score = (float*)NULL;
    free(lab_score);
    lab_score = (float*)NULL;
    free(total_score);
    total_score = (float*)NULL;
    free(total_quiz_score);
    total_quiz_score = (float*)NULL;
    free(total_project_score);
    total_project_score = (float*)NULL;
    free(total_exam_score);
    total_exam_score = (float*)NULL;
    free(total_lab_score);
    total_lab_score = (float*)NULL;
    free(student_ID);
    student_ID = (int*)NULL;
} /* main */
