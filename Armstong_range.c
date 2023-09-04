#include<stdio.h>
int main(){
    char ch;
    do{
    int start,end;
    printf("\n enter starting number: ");
    scanf("%d",&start);
    printf("\n enter ending number: ");
    scanf("%d",&end);
    printf("\n Armstrong number within the range %d to %d is: ",start,end);
  for(int i=start; i<=end; i++){
        int N=i,num,count=0,rem,cnt,mul=1,result=0;
    
        while (N!=0)
        {           
            N=N/10;   
            count++;  
        }
        cnt=count;  
        N=i;      
        while (N>0)
        {
         rem=N%10;   
         while (cnt>0)
         {
            mul=mul*rem;   
            cnt--;          
         }
         result=result+mul;  
         cnt=count;          
         N=N/10;             
         mul=1;
        }
        N=i;
        if(result==i)
            printf("\t %d ",result);
    }

    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
    return 0;

}