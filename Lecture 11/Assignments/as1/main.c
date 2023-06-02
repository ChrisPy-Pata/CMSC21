#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // touppper(), and isalpha() will be used in this code
#include <stdbool.h> // to use bool (true or false)

// declare scan_word and is_anagram function
void scan_word(int occurences[26]);
bool is_anagram(int occurences[26], int occurences2[26]);

// main function
int main()
{   //declare two arrays with 26 length and all elements are zero
    int word1[26] = {0}, word2[26] = {0};

    // ask the user to enter the first word
    printf("Enter first word: ");
    scan_word(word1); // call the function with word1 as argument

    // ask the user to enter the second word
    printf("Enter second word: ");
    scan_word(word2); // call the function with word2 as argument

    // call the function is_anagram to check the two words
    if (is_anagram(word1, word2)){
    printf("The words are anagrams.\n"); // print if they are anagrams (equal value of all elements)
    }
    else{
        printf("The words are not anagrams.\n"); // print if false
    }

    return 0;
}

void scan_word(int occurences[26]){
    // declare char variable ch
    char ch;
    // checks the occurences of each letter in the word.
    while ( (ch = getchar()) != '\n' ){ // iterate all characters from the inputted word
        if ( isalpha(ch)){ // checks if the character is alphabetic
            occurences[toupper(ch) - 'A']++; // convert the character into uppercase, find the index of the character then increment
        }
    }
}

bool is_anagram(int occurences[26], int occurences2[26]){
    // loop to check if word1 and word2 have the same number of value for each letter.
    int i;

    for (i = 0; i < 26; i++) {
        if (occurences[i] != occurences2[i]){ // check each elements of both array if they have the same value
            return false; // the two arrays are not equal
    }
    }
    return true; //the two arrays are equal
}



