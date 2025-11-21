#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isPalindrome(const char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

char* firstPalindrome(char** words, int wordsSize) {
    for (int i = 0; i < wordsSize; i++) {
        if (isPalindrome(words[i])) {
            char* result = malloc(strlen(words[i]) + 1);
            if (result == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            strcpy(result, words[i]);
            return result;  
        }
    }
    char* empty = malloc(1);
    if (empty == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    empty[0] = '\0';
    return empty;
}

int main() {
    char* words1[] = {
        "abc",
        "car",
        "ada",
        "racecar",
        "cool"
    };
    char* words2[] = {
		"notaplaindrome",
		"racecar"
	};
	 char* words3[] = {"def","ghi"};

    int wordsSize1 = sizeof(words1) / sizeof(words1[0]);
    char* result1 = firstPalindrome(words1, wordsSize1);

    if (strlen(result1) == 0) 
    {
        printf("No palindrome found.\n");
    }
     else 
    {
        printf("First palindrome: %s\n", result1);
    }
    free(result1);
    
    int wordsSize2 = sizeof(words2) / sizeof(words2[0]);
    char* result2 = firstPalindrome(words2, wordsSize2);

    if (strlen(result2) == 0) 
    {
        printf("No palindrome found.\n");
    }
     else 
    {
        printf("second palindrome: %s\n", result2);
    }
    free(result2);
    
    int wordsSize3 = sizeof(words3) / sizeof(words3[0]);
    char* result3 = firstPalindrome(words3, wordsSize3);

    if (strlen(result3) == 0) 
    {
        printf("No palindrome found.\n");
    }
     else 
    {
        printf("second palindrome: %s\n", result3);
    }
    free(result3);

    return 0;
}
