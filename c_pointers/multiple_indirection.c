//
//  multiple_indirection.c
//  c_pointers
//
//  Created by Samuel Gutierrez on 11/16/24.
//

#include <stdlib.h>
#include "multiple_indirection.h"

char *words[LENGTH];

void multiple_indirection_char(void) {
    printf("Multiple indirection char example\n");
    
    int i;
    char *tempWord;
    int strLen;
    
    for (i = 0; i < LENGTH; i++) {
        tempWord = (char *) malloc(WORD_LENGTH);
        
        printf("Enter word (15 characters MAX): ");
        fgets(tempWord, WORD_LENGTH, stdin);
        
        strLen = length(tempWord);
        tempWord[strLen - 1] = '\0';
        
        updateWordArr(i, strLen, tempWord);
        
        strLen = 0;
        free(tempWord);
    }
    // Display each string and free its allocated memory
    displayWords();
}

void displayWords(void) {
    char **wpp;
    char *wp;
    for (int i = 0; i < LENGTH; i++) {
        wpp = words + i;
        wp = *wpp;
        printf("%c", *wp);
        ++wp;
        while (*wp != '\0') {
            printf(" %c", *wp);
            ++wp;
        }
        printf("\n\n");
        free(words[i]);
    }
}

void updateWordArr(int index, int strLength, const char *str) {
    words[index] = (char *) malloc(strLength);
    char *tempStr = words[index];
    int i = 0;
    while (i < strLength) {
        tempStr[i] = *str;
        ++str;
        ++i;
    }
}

int length(const char *str) {
    int len = 0;
    while (*str != 0) {
        ++len;
        ++str;
    }
    printf("length: %d\n\n", len);
    return len;
}
