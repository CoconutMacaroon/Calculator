#include "Calculator.h"

int main() {
    printf("%d", charInString('h', "hello"));
    printf("%d", charInString('h', "test"));
    return solveExpr("123");
}

int solveExpr(char *expr) {
    // double check that the string contains only valid characters
    char *iterator = expr;
    while (*iterator != '\0') {
       if(!charInString(*iterator, VALID_EXPR_CHARS)) {
           // if it contains an invalid char, quit
            exit(1);
       }
       iterator++;
    }
    return 0;
}

bool charInString(char c, char *string) {
    while (*string != '\0') {
        if (*string++ == c) {
            return true;
        }
    }
    return false;
}
