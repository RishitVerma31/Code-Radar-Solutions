#include <stdio.h>

int main() {
    char ch;
   
    scanf(" %c", &ch);

    // Check if character is a digit (0-9)
    if (ch >= '0' && ch <= '9') {
        printf("Number\n");
    }
    // Check if character is an uppercase or lowercase letter
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check if it is a vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    // If not a letter or digit, it's a special character
    else {
        printf("Special character\n");
    }

    return 0;
}
