# include <stdio.h>

int main () 
{
    // take a variable to store the Year value

    int year; 

    // take input as Year from the user

    printf("Enter any year \n");
    scanf("%d", &year);

    // conditional statement to check the leap year
 
    if (( year % 4 == 0 ) && ( year % 400 != 0 ) ) 
    {
        printf("this year is leap year");
        
    }
    
    else 
    {
        printf("This year is not leap year");

    }
    
}