#include<stdio.h>
#include<time.h>

int main(){                                             /*Name - Akhilesh Singh Butola      Roll no - 23 CE- 07*/
    float tm_hour; 
    float tm_second;  
    float tm_minute,minute;                                    /* converting hour into second and minute*/

    printf("Enter the time in hour:");
    scanf("%f",&tm_hour);

    tm_minute = tm_hour * 60;
    printf("Time in minute is:%f\n",tm_minute);
    
    tm_second = tm_hour * 3600 ;
    printf("Time in second is:%f",tm_second);

    return 0;
   
}