#include<stdio.h>
int main(){
    char ch;
    do{
    int start,end;
    printf("\n Enter the starting number: ");
    scanf("%d",&start);
    printf("\n Enter the ending number: ");
    scanf("%d",&end);
    printf("\n Krishna murti numbers with in the range %d to %d are: ",start,end);
    for(int i=start;i<=end;i++){
        int num,temp,sum=0;
        num=i;
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
        printf("\t %d ",num);
     
    }
    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
   
    
}