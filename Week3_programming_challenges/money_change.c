#include<stdio.h>
int mon(int m)
{
    if (m%10==0){
        return (m/10);
    }
    else if (m%10!=0){
        int rem=m%10;
        if(rem%5==0){
            return ((m/10)+(rem/5));
        }
        else{
        	int rem2=rem%5;
            return((m/10)+(rem/5)+(rem2/1));
        }
    }

}
int main() 
{
    int m;
    scanf("%d",&m);
    printf("%d",mon(m));
}