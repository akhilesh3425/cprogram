#include<stdio.h> /// NAME- AKHILESH SINGH Butola ROLL NO - 23 CE-07 //


int main(){
    float mean ,median;
    int sum = 0,i,n=5,a[n],j,t, max= 0,mode= 0;
    printf("enter how many data you want to input:");
    scanf("%d",&n) ; 
    printf("enter data:%d\n",n);
    /// sum has to intialize to zero  
    for ( i = 0; i < n; i++)  // for printing
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        /* code */
    }
       //sorting 
    for (i  = 1; i < n-1; i++)
    {
        for (j = 0; j <= n-i; j++)
        {
            if (a[j]<= a[j+1])
            {
                t =a[j];  // interchanging the value
                a[j]=a[j+1];
                a[j+1]=t;

                /* code */
            }
            else
            continue;  
            
        }       /* code */
    }
    if (n%2 ==0)
    {
        median = (a[n/2]+a[n/2+1])/2.0;
        /* code */
    }else
    median  =a[n/2 + 1];
    
    printf("median is %f\n",median);
    for ( i = 0; i < n; i++)
    {
        t =a[i];
        int c=0;
        for ( j = 0; j < n; j++)
        {
            if ((((t==a[j])) c++;) if (c>max)
            {
                max = c;
                mode=t;
                /* code */
            }

            )
                   
            /* code */
        }
        printf("mode is%d",mode);
        
        /* code */
    }
    /* code */
    
   

    printf("mean = %f",sum/(float)n);

    return 0;
    
}

//int a[3][2] =
    //*{  {1,2},
       // {3,5},
       // {6,9}};