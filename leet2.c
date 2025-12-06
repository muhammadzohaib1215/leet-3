#include <stdio.h>
#include <string.h>

int isPalindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right])
            return 0;  
        left++;
        right--;
    }
    return 1; 
}

char* firstPalindrome(char words[][100], int wordsSize) {
    int i;
    for (i = 0; i < wordsSize; i++) {
        if (isPalindrome(words[i])) {
            return words[i];  
        }
    }
    return "";  
}

int main() {
    char words[][100] = {"abc", "car", "ada", "racecar", "cool"};
    int i, j;

    printf("The given array of words:\n");

    for (i = 0; i < 5; i++) {
        printf("%s\n", words[i]);
    }

    int size = sizeof(words) / sizeof(words[0]);

    char* result = firstPalindrome(words, size);

    printf("\nOutput: %s\n", result);

    return 0;
}



