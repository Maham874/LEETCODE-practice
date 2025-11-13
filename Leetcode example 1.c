#include<stdio.h> 
int main()
{
    //example 1
    int arr[4] = {1,2,3,4};
    int runningSum[4];
    for(int i=0 ; i<4 ; i++)
    {
        if(i==0)
        {
            runningSum[i] = arr[i];
        }
        else 
        {
            runningSum[i] =runningSum[i-1]+arr[i];
        }
        printf("The element at %d index is %d\n",i , runningSum[i]);

    }
    printf("The new array is \n");
    for (int i=0 ; i<4 ; i++)
    {
        printf("%d ",runningSum[i]);
    }
    return 0;
}