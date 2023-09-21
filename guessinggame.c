#include<stdio.h>
#include<stdlib.h>


int main()
{

    int secretnumber = 9;
    int guess;
    int guesscount = 0;
    int guessslimit = 3;
    int outof_guess = 0;


    while (guess!= secretnumber && outof_guess ==0){
      if(guesscount<guessslimit)
        {
          printf("enter the no:");
          scanf("%d",&guess);
          guesscount++;
        }
     else{
         outof_guess = 1;
        }
        if ("")
    if (outof_guess == 1){
    
    
     printf("out of guess");

    }
    else{
    printf("you win");
        }
    } 
        
   
     return 0;

}