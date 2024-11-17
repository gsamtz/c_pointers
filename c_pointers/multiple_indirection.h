//
//  multiple_indirection.h
//  c_pointers
//
//  Created by Samuel Gutierrez on 11/16/24.
//

#ifndef multiple_indirection_h
#define multiple_indirection_h

#include <stdio.h>

#define LENGTH 3
#define WORD_LENGTH 16

void multiple_indirection_char(void);
void updateWordArr(int index, int strLength, const char *str);
void displayWords(void);
int length(const char * str);

#endif /* multiple_indirection_h */
