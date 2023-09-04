#include<stdio.h>
int factorial(int n);
int main(){
    int n,ans;
    printf("\n Enter the number: ");
    scanf("%d",&n);
    //ans=factorial(n);
    printf("\n factorial of %d is %d ",n,factorial(n));
    return 0;
}
int factorial(int n){
    if(n>=1)
        return n*factorial(n-1);
    else
        return 1;
    
}