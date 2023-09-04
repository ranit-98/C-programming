#include<stdio.h>
int main(){
    int n,a=-1,b=1,c,i;
    printf("Enter the number of term: ");
    scanf("%d",&n);
   // n=n+1;
    printf("Fibonaci series: \n");
    for(i=1;i<=n;i++){
        c=a+b;
       // if(c !=0){
          printf("%d \t",c);
       // }
        a=b;
        b=c;
    }
    return 0;
}