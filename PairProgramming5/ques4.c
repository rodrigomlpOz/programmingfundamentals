/***
 * Write a program in C to store n elements in an array and print the elements using pointer.
 * 
    Test Data :
    Input the number of elements to store in the array :5
    
    Input 5 number of elements in the array :
    element - 0 : 5
    element - 1 : 7
    element - 2 : 2
    element - 3 : 9
    element - 4 : 8

    Expected Output :

    The elements you entered are :                                                                               
    element - 0 : 5                                                                                              
    element - 1 : 7                                                                                              
    element - 2 : 2                                                                                              
    element - 3 : 9                                                                                              
    element - 4 : 8   
 * 
 * **/
#include <stdio.h>

int main()
{
   int arr[25], i,n;

   printf("\n\n Pointer : Store and retrieve elements from an array :\n");
   printf("------------------------------------------------------------\n");
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);

   printf(" Input %d number of elements in the array :\n",n);
   for(i = 0;i < n;i++)
   {
	  printf(" element - %d : ",i);
	  scanf("%d",arr+i);
	}
   printf(" The elements you entered are : \n");

   for(i = 0;i < n;i++)
   {
	  printf(" element - %d : %d \n",i,*(arr+i));
	}
	return 0;
}
