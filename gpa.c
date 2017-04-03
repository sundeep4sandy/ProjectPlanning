#include<stdio.h>


float CalculateGPA(char grades[100]);
/* Declare CalculateGPA Function */

void main()
{
    int i=0;
    char inputValue = '*'; /* Initialize to "end of array" flag. */
    float gp=0.000;
    char grades[100];
    
    for(i=0 ; i<100; i++)
    {
        printf("Enter a valid grade.If no more grades enter *.\n"); 
        scanf("%s",&inputValue);
        grades [i] = inputValue;
        if(grades[i] == '*')break;
    }
    gp = CalculateGPA(grades); 
    printf("The GPA calculated is: %f\n\n", gp);
   
 }

/*   Define  CalculateGPA()        */

float CalculateGPA(char grades[])
{

   /*Internal Variables*/

 /* (note that the gpa return variable declaration is provided as an example. You
 *  need to add your own list of internal variables. */
    float gpa=0.0; /* Calculated grade point average & input status.
		* gpa set as follows:
		* gpa = total sum of Grade Points/# of valid grades if every element
		*    of grades[] contains ‘A’,’B’,’C’,’D’,’F’,’I’ or ‘*’
		*    AND grades[] does not contain all ‘I’s.
		* gpa = -1.0 if all grades[] elements are ‘I’s
		* gpa = -2.0 if grades[] contains any element that
		*          is not ‘A’,’B’,’C’,’D’,’F’,’I’ or ‘*’.
		* gpa = -3.0 if grades[] is empty. (grades[0]  = ‘*’ ) */

                                    YOUR CODE GOES HERE

      return gpa;

}