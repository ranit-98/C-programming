#include<stdio.h>
int main(){
    
    char ch;
    do{
    int num,temp,sum=0;
    printf("\n Enter the number: ");
    scanf("%d",&num);
    temp=num;
    
    while(temp!=0){
       int rem=0,fact=1;
        rem=temp%10;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10; 
    }
    if(sum==num)
        printf("\n %d is a Krishnamurti number ",num);
    else 
        printf("\n %d is not a krishnamurti number",num);
    
    
    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
    
}