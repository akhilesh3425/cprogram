#include<stdio.h>        // NAME -  AKHILESH SING BUTOLA 
                        //ROLL NO - 23CE -07

int factorialIterative(int n){
    int val = 1;

    for (int i = n; i > 1; i--)
    {
        val *= i;           /* code */
    }
    return val;
    
    
}                                  //// using function 

int main(){

    int n;
    printf("enter the no to generate factorial:");
    scanf("%d",&n);
    int factorial = factorialIterative(n); // function ncalling given parameter n 
    printf(" the value of the facatorial is :",factorial);   
    return 0;


}

///for(i = 1; i<=digit;i++)

    //{
        //fact *= i;

        //printf("factorial is %d\n",fact);

    //}

//// int fac(int n){
 //   if (n == 0 || n ==1 )
//*return 1
// else
   // return n =fac(n-1) //// recursive approah
 

 //int fac(intn ){
    //for (i = n;i>1;i--){
        ///val*=i
        //return val   /// interative approach

    //}
 //}

