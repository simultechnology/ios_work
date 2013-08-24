
#include <stdio.h>
#include <ctype.h>
#include <string.h>


void test()
{
    char paragraph[] = "In computing, C is a general-purpose programming language initially developed by Dennis Ritchie between 1969 and 1973 at AT&T Bell Labs. Like most imperative languages in the ALGOL tradition, C has facilities for structured programming and allows lexical variable scope and recursion, while a static type system prevents many unintended operations. Its design provides constructs that map efficiently to typical machine instructions, and therefore it has found lasting use in applications that had formerly been coded in assembly language, most notably system software like the Unix computer operating a koko kokoko kokookoko system. ";
    
    char words[100][20];
    int words_count = 0;
    
    
    int i = 0;
    int word_size = 0;
    char c;
    
    char test[3][25];
    strcpy (test[0], "石川たかつぐ");
    printf("Hello! %s\n", test[0]);
    
    while ((c = paragraph[i]) != '\0') {
        if (isalpha(c)) {
            words[words_count][word_size] = c;
            word_size++;
        } else if (isspace(c) && word_size > 0) {
            words[words_count][word_size] = '\0';
            word_size = 0;
            words_count++;
        }
        else {
            
        }
        i++;
    }
    
    // insert code here...
    for (i = 0; i < words_count; i++) {
        printf("%s\n", words[i]);
    }
    printf("total word_count : %d\n", words_count);
}