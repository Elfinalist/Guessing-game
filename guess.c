#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{

    int mynum, usernum;

    mynum = 6;

    printf("I have a number in my mind. Can you guess it?\n");

while(1)
{
        printf("Enter your Guess:\n");
        scanf("%d", &usernum);

        if( mynum == usernum){
            printf("You're Right!\n");
            break; //terminates while loop when user guesses correctly
        }else if(mynum > usernum) {
            printf("My number is greater than %d\n", usernum);
        }else {
            printf("My number is smaller than %d\n", usernum);
        }
}    
    return 0;
}