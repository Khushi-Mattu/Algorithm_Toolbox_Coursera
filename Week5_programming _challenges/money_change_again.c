#include<stdio.h>
int mon(int num)
{
    if (m%4==0){
        return (m/4);
    }
    else if (m%4!=0){
        int rem=m%4;
        if(rem%3==0){
            return (int(m/4)+(rem/3));
        }
        else{
            return(int(m/4)+int(rem/3)+(num-int(m/4)-int(rem/3)));
        }
    }

}
int main() 
{
    int m;
    scanf("%d",&m);
    printf("%d",mon(m));
}