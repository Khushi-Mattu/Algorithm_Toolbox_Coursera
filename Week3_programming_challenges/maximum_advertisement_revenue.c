#include<stdio.h>
 void bubbleSort(long long int a[], long long int n) // function to implement bubble sort  
 {  
   long long int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
 }  
int main()
{
    long long int n,i;
    scanf("%lld",&n);
    long long int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%lld",&b[i]);
    }
    long long int c[n];
    bubbleSort(a,n);
    bubbleSort(b,n);
    for(i=0;i<n;i++){
        c[i]=a[i]*b[i];
    }
    long long int sum=0;
    for(i=0;i<n;i++){
        sum+=c[i];
    }
    printf("%lld",sum);
}