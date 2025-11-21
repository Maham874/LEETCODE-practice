#include<stdio.h>
int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void swap (char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverseVowels(char *s) {
    int i = 0;
    int j = strlen(s) - 1;
    while (i < j) {
        while (i < j && !isVowel(s[i])){
            i++;
        }
        while (i < j && !isVowel(s[j])){
            j--;
        }
        if (i < j)
        {
            swap(&s[i] , & s[j]);
            i++;
            j--;
        }
        

    }
}
int main() {
    char str[] = "IceCream";
    printf("Original String: %s\n",str);
    reverseVowels(str);
    printf("String after reversing vowels: %s\n",str);

    char str2[] = "leetcode";
    printf("Original string: %s\n", str2);
    reverseVowels(str2);
    printf("String after reversing vowels: %s\n", str2); // Output: holle

    return 0;
}