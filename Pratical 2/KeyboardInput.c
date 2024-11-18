/* @StudyingBelial AKA Aarya Bhandari Level 4 BSc(Hons) Computer Science in Artificial Intelligence */

#include <stdio.h>

int main() {
    // declare variables for holding the values of input
    char firstWord[20]; // a word/string up to 20 characters
    char secondWord[20];
    int num;

    //prompt user to enter input values
    printf("Enter two words and an integer from keyboard, separated by spaces/returns: \n");
    /* printf("Enter first word: ");
    scanf("%s", &firstWord);
    printf("Enter second word: ");
    scanf("%s", &secondWord);
    printf("Enter a number without decimal: ");
    scanf("%d", &num); */

    // read two words and an integer
    scanf("%s %s %d", firstWord, secondWord, &num); 

    // display two words and an integer
    printf("%s %s \n%d \n", firstWord, secondWord, num); 

    return 0;
}
