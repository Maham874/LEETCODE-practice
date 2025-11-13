//example 2
#include<stdio.h>
int main()
{
    int newArr[4] = {1,1,1,1};
    int newRunningSum[4];
    for(int i=0 ; i<4 ; i++)
    {
        if(i==0)
        {
            newRunningSum[i] = newArr[i];
        }
        else 
        {
            newRunningSum[i] = newRunningSum[i-1] + newArr[i];
        }
        printf("\nThe element at %d index is %d\n",i,newRunningSum[i]);
    }
    printf("\nThe New Array is\n ");
    for(int i=0 ; i<4 ; i++)
    {
        printf("%d ",newRunningSum[i]);
    }
    return 0;
}