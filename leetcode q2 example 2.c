#include<stdio.h>
int main ()
{
	int array[8] = {1,2,3,4,4,3,2,1};
    int n = 4 , j = 0;
    int newArr[8];
    for (int i=0 ; i<8 ; i++)
    {
        newArr[j++] = array[i];
        newArr[j++] = array[i+n];
        printf("The Element at %d Index is %d\n",i ,newArr[i]);
    }
    printf("The New Array is\n");
    for(int i=0 ; i<8 ; i++)
    {
        printf("%d ",newArr[i]);
    }
	return 0;
}