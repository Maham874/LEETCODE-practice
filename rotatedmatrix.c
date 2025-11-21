#include<stdio.h>
void rotate(int matrix[][100],int n)
{
    int i,j;

    for (i = 0 ; i < n ; i++)
    {
        for (j = i + 1 ; j < n ; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    } 

    for (i = 0 ; i < n ; i++)
    {
        int left = 0, right = n - 1;
        while (left < right)
        {
            int temp = matrix [i][left];
            matrix[i][left] = matrix [i][right];
            matrix[i][right] = temp;

            left++;
            right--;
        }
    }
}

int main ()
{
    int n1 = 3;
    int n2 = 4;
    int firstMatrix[100][100] = {
     {1,2,3},
     {4,5,6},
     {7,8,9}   
    };
	int secondMatrix[100][100] = {
		{5,1,9,11},
		{2,4,8,10},
		{13,3,6,7},
		{15,14,12,16}
	};
		
    rotate(firstMatrix,n1);

    printf("Rotated Matrix:\n");
    for (int i = 0 ; i < n1 ; i++)
    {
        for (int j = 0 ; j < n1 ; j++)
        {
            printf("%d ",firstMatrix[i][j]);
        }
        printf("\n");
    }
    
    rotate(secondMatrix,n2);

    printf("Rotated Matrix:\n");
    for (int i = 0 ; i < n2 ; i++)
    {
        for (int j = 0 ; j < n2 ; j++)
        {
            printf("%d ",secondMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}