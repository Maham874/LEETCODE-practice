#include <stdio.h>
int main()
{
	int num[4] = {1,1,2,2};
    int n = 2, j = 0;
    int afterShuffArr[4];
    for (int i=0 ; i<4 ; i++)
    {
        afterShuffArr[j++] = num[i];
        afterShuffArr[j++] = num[i+n];
        printf("The element at %d index is %d\n",i,afterShuffArr[i]);
    }
    printf("The New Array is\n");
    for (int i=0 ; i<4 ; i++)
    {
        printf("%d ",afterShuffArr[i]);
    }
	return 0;
}