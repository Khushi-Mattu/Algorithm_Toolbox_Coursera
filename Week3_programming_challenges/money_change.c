#include<stdio.h>
int mon(int num)
{
    if (m%10==0){
        return (m/10);
    }
    else if (m%10!=0){
        int rem=m%10;
        if(rem%2==0){
            return (int(m/10)+(rem/2));
        }
        else{
            return(int(m/10)+int(rem/2)+(num-int(m/10)-int(rem/2)));
        }
    }

}
int main() 
{
    int m;
    scanf("%d",&m);
    printf("%d",mon(m));
}