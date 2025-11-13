#include<stdio.h> 
int main()
{
    //example 1
    int arr[6] = {2,5,1,3,4,7};
    int n = 3 , j = 0;
    int shuffleArr[6];

    for (int i=0 ; i<6 ; i++)
    {
        shuffleArr[j++] = arr[i];
        shuffleArr[j++] = arr[i+n];
        printf("The Element at %d Index is %d\n",i ,shuffleArr[i]);
    }
    printf("The New Array is\n");
    for (int i=0 ; i<6 ; i++)
    {
        printf("%d ",shuffleArr[i]);
    }
    return 0;
}