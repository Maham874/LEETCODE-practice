#include <stdio.h>
int main ()
{
	//example 3
    int array[5] = {3,1,2,10,1};
    int newArray[5];
    for(int i=0 ; i<5 ; i++)
    {
        if(i==0)
        {
            newArray[i] = array[i];
        }
        else 
        {
            newArray[i] = newArray[i-1] + array[i];
        }
        printf("The element at %d index is %d\n" , i,newArray[i]);
    }
    printf("\nThe new Running Sum Array is\n");
    for (int i=0 ; i<5 ; i++)
    {
        printf("%d ",newArray[i]);
    }
	return 0;
}