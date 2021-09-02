#include "stdio.h"

int main() {
    char name[100];
    printf("What is your name?\n");
    printf("> ");
    fgets(name, 20, stdin);
    printf("Hello, ");
    printf(name);
}