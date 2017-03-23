#include<stdio.h>
int getGCD(int a, int b){
    if(b==0) return a;
    else 
        {
         int quotient = b;
         int remainder = a%b;
         getGCD(quotient,remainder);
        }
    
}
int main(void){
    printf("gcd = %d\n",getGCD(356,140));
}
