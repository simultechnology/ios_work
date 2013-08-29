//
//  main.c
//  testpointer
//
//  Created by ishi on 2013/08/22.
//  Copyright (c) 2013年 simultechnology. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>


int pointer_test(int argc, const char * argv[])
{
    
    char paragraph[] = "In computing, C is a general-purpose programming language initially developed by Dennis Ritchie between 1969 and 1973 at AT&T Bell Labs. Like most imperative languages in the ALGOL tradition, C has facilities for structured programming and allows lexical variable scope and recursion, while a static type system prevents many unintended operations. Its design provides constructs that map efficiently to typical machine instructions, and therefore it has found lasting use in applications that had formerly been coded in assembly language, most notably system software like the Unix computer operating a koko kokoko kokookoko system. ";
    
    char *words[100];
    int words_count = 0;
    char word_buffer[1024];
    char *word_buffer_end = word_buffer;
    
    char *paragraph_top = paragraph;
    char *word_buffer_top = word_buffer_end;
    char c;
    
    while ((c = *paragraph_top++) != '\0') {
        if (isalpha(c)) {
            *word_buffer_end++ = c;
        } else if (isspace(c) && word_buffer_top != word_buffer_end) {
            *word_buffer_end++ = '\0';
            words[words_count++] = word_buffer_top;
            word_buffer_top = word_buffer_end;
        }
        else {
        }
    }
    
    // insert code here...
    for (int i = 0; i < words_count; i++) {
        printf("%s\n", words[i]);
    }
    printf("total word_count : %d\n", words_count);
    
    char name[] = "ishikawa";
    //char *nap = name;
    printf("%s\n", name);
    
    
    return 0;
}

