#include<stdio.h>

int main(){                
     

    char line[255];               /* to read individual line */

    FILE*fpointer = fopen("emty.txt","r");
    fgetline(line,255,fpointer);
    printf("%s",line);

    return 0;


}