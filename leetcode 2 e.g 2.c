#include <stdio.h>
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}
int main()
{
    char s[] = {'H','a','n','n','a','h'};
    int size = sizeof(s) / sizeof(s[0]);

    reverseString(s, size);

    for (int i = 0 ; i < size ; i++ )
    {
        printf("%c ",s[i]);
    }
    return 0;
}