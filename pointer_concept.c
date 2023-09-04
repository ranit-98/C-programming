// pointer variable

#include <stdio.h>
int main()
{
   int *pc, c;    //int_*_pc,int*_pc,n;
   pc=&c;

   printf("enter a value: ");
   scanf("%d",&c);

   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22


   printf("Address of pointer pc: %p\n", &pc);
   printf("Value of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc);

  /* c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11

   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2*/
   return 0;
}