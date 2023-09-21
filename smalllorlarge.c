#include<stdio.h>

int main(){
    char ch;
    printf("enter the letter:");
    scanf("%c",&ch);
    if (ch >= 'A' && ch<='Z'){
        printf("the letter is capital:");

    }
    else if( ch = 'a' && ch <= 'z'){
        printf("the letter is the small:");
    }
    else if (ch >= '0'&& ch<='9'){

        printf("the input is the invalid:");
    }
    else if (ch = '$,@,!,&,*'){
        printf("the number is the special symbol:");
        
    }
    return 0;
}