#include <stdio.h>

int main(void)
{
   
   int n;
  do
  {
     printf("Start size: ");
     scanf("%d", &n);
    
  } 
  while (n < 9);

   
int j;
  do
  {
    printf("End size: ");
    scanf("%d", &n);
  }
  while (j < 9);  

 
    
int z=0;


  do
  {
      n=n+(n/3)-(n/4);
      
      
      
      z++;
  }
  
  
  while (n < j);

 
  
   printf("Years:%i\n",z);
}