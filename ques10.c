#include <stdio.h> //// NAME AKHILESH SING BUTOLA  ROLL NO - 23CE -07//

int leapyear(int year)
{
    if ((year % 4 ==0 && year% 100!=0)||(year % 400 == 0))
    {
        return 1;
        /* code */
    }else{
        return 0;
    }
    

}
int main(){
    int year,noyears;
    printf("enter the number of years to check:");
    scanf("%d",&noyears);
    for (int i = 0; i < noyears; i++)
    {
        printf("enter a year:");
        scanf("%d",&year);
        if (leapyear(year))
        {
            printf("%d is a leap year\n",year);
            /* code */
        }else{
            printf("%d is not leap year\n",year);
        }
        
        /* code */
    }
    return 0;
    
}