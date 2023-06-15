/*
Write a function to find the type of the character passed
    - 'A' to 'Z', return 1
    - 'a; to 'z', return 2
    - '0' to '9', return 3
    - Any Other printable symbols, return 4
    - Non printable symbols, return 5 
*/



#include <stdio.h>
#include <ctype.h>

int findCharacterType(char ch) {
    if (isupper(ch)) {
        return 1;
    } else if (islower(ch)) {
        return 2;
    } else if (isdigit(ch)) {
        return 3;
    } else if (isprint(ch)) {
        return 4;
    } else {
        return 5;
    }
}

int main() {
    char character;
    printf("Enter a character:");
    scanf("%c", &character);
    int type = findCharacterType(character);
    printf("Character type: %d\n", type);
    return 0;
}