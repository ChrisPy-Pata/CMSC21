#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// declare scan_word, and is_anagram function
int scan_word(int * occurrences);
bool is_anagram(int *occurrences, int *occurrences2);

int main()
{
    // declare two arrays: word1, word2, with 26 length of zero value
    int word1[26] = {0};
    int word2[26] = {0};


    scan_word(word1); // function call to check word1
    scan_word(word2);// function to check word2

    // function to call to check the two arrays if they have the same value of elements
    if ( is_anagram(word1, word2)){
        printf("The words are anagrams.\n"); // print if they are anagrams (equal value of all elements)
    }
    else{
        printf("The words are not anagrams.\n"); // print if false
    }

    return 0;
}

// define scan_word function
int scan_word(int * occurrences){

    char c;
    printf("Enter the first word: "); // ask the user to enter the first word
    while ((c = getchar()) != '\n'){ // iterates to all the characters of the first word
        if (isalpha(c)){ // check if the character is alphabetic
            (*(occurrences + toupper(c) - 'A'))++; //convert the character into uppercase, find the index of the character then increment
        }
    }
}
// define is_anagram function
bool is_anagram(int *occurrences, int *occurrences2){

    // loop to check if all value of each elements of to arrays are equal
    for (int i = 0; i< 26; i++){
        if (*(occurrences + i) != *(occurrences2 + i)){
            return false; // return false if not equal
        }
    }
    return true; // return true if equal

}
