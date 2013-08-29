//
//  main.c
//  testpointer
//
//  Created by ishi on 2013/08/22.
//  Copyright (c) 2013年 simultechnology. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char paragraph[] = "In computing, C is a general-purpose programming language initially developed by Dennis Ritchie between 1969 and 1973 at AT&T Bell Labs. Like most imperative languages in the ALGOL tradition, C has facilities for structured programming and allows lexical variable scope and recursion, while a static type system prevents many unintended operations. Its design provides constructs that map efficiently to typical machine instructions, and therefore it has found lasting use in applications that had formerly been coded in assembly language, most notably system software like the Unix computer operating a koko kokoko kokookoko system. ";

char *words[100];
int words_count = 0;

int main(int argc, const char * argv[])
{
    char *paragraph_top = paragraph;
    char *word_top = NULL;
    char c;
    
    while ((c = *paragraph_top++) != '\0') {
        if (isalpha(c)) {
            if (word_top == NULL) {
                word_top = paragraph_top - 1;
            }
        } else if (isspace(c) && word_top) {
            long word_size = paragraph_top - word_top;
            char *buffer = malloc(word_size + 1);
            if (buffer == NULL) {
                printf("NO MEMORY!\n");
                exit(-1);
            }
            memcpy(buffer, word_top, word_size);
            buffer[word_size] = '\0';
            
            words[words_count++] = buffer;
            word_top = NULL;
        }
        else {
        }
    }
    
    // insert code here...
    for (int i = 0; i < words_count; i++) {
        printf("%s\n", words[i]);
    }
    printf("total word_count : %d\n", words_count);
    
    for (int i = 0; i < words_count; i++) {
        free(words[i]);
    }
    
    return 0;
}

