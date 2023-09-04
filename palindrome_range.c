#include<stdio.h>
int main(){
    char ch;
    do{
    int start,end;
    printf("\n Enter the starting number: ");
    scanf("%d",&start);
    printf("\n Enter the ending number: ");
    scanf("%d",&end);
    printf("\n Palindrome numbers with in the range %d to %d are: ",start,end);
    for(int i=start;i<=end;i++){
        int num,N,rem=0,sum=0;
        num=i;
        N=num;
        while (N>0)
        {
            rem=N%10;
            sum=(sum*10)+rem;
            N=N/10;
        }
        if(num==sum)
            printf("\t%d",num);
    
    }
    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
    return 0;

}