# include <stdio.h>

int main ()
{
    int maths, science, english;

    printf("Enter your marks of maths, \n");
    scanf("%d", &maths);

    printf("Enter your marks of science \n");
    scanf("%d", &science);

    printf("Enter your marks of english \n");
    scanf("%d", &english);
    
    int total_marks = maths + science + english;

    int avg=total_marks/3;

    // print the marks of all subjects

    printf("Your maths marks is %d \n", maths);
    printf("your science marks is %d \n", science);
    printf("your science marks is %d \n", english);
    printf("your average is %d \n", avg);   

    if (avg <= 40 || ( maths < 33 || science < 33 || english < 33))

        printf("you are failed \n");
       

    else 

        printf("You are passed \n");

    
    if (avg > 90)
    {
        printf("Your grade is A+ \n");
    }

    else if (avg > 80 && avg <= 90)
    {
        printf("Your Grade is A \n");
    }
    
    else if (avg > 70 && avg <= 80)
    {
        printf("Your Grade is B+ \n");
    }

    else if (avg > 60 && avg <=70)
    {
        printf("Your Grade is B");
    }

    else if (avg > 50 && avg <= 60)
    {
        printf("Your Grade is C+");
    }

    else if (avg > 40 && avg <= 50)
    {
        printf("Your Grade is D");
    }

}

