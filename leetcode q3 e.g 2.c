#include<stdio.h>

int main ()
{
	int arr[] = {1,5,1,4,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for (int i=0 ; i<size ; i++)
	{
		if(arr[i] % 2 == 0)
		arr[i] = 0;
	
		else 
		arr[i] = 1;
	}
	
	for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Output: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("]\n");
    return 0;
}