#include<stdio.h>
int x;
int i=0;
int arr[5];
int flag=0;

int
linsearch (int x)
{
  printf ("\nEnter number to be found:");
  scanf ("%d", &x);
 for(i=0;i<5;i++)
 {
     if(arr[i]==x)
     {
         printf("\nElement %d is found at index %d",x,i);
         flag++;
         break;
     }
     
 }
 
 if(flag==0)
 {
     printf("\nElement is not found");
 }
   
}

int
main ()
  {
      

    for (i = 0; i < 5; i++)
    {
      printf ("\nEnter the number:");
    scanf ("%d", &arr[i]);
    }
    linsearch (x);
  }
