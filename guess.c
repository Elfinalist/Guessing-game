#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{

    int mynum, usernum;
    //implement random number generator
    //initialize random num var
    srand(time(NULL));
    mynum = rand() % 10;




    printf("I have a number in my mind (0 - 9). Can you guess it?\n");

while(1)
{
        printf("Enter your Guess:\n");
        scanf("%d", &usernum);

        if( mynum == usernum){
            printf("You're Right!\n");
            break; //terminates while loop when user guesses correctly
        }else if(mynum > usernum) {
            printf("My number is greater than %d. Try Again\n\n", usernum);
        }else {
            printf("My number is smaller than %d.Try Again\n\n", usernum);
        }
}    
    return 0;
}