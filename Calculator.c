#include "Calculator.h"

int main() {
    return solveExpr("hello;");
}

int solveExpr(char* expr) {
    char* iterator = expr;
    while(*iterator != '\0') {
        putchar(*iterator);
        iterator++;
    }
    return 1;
}