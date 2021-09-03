#include "stdio.h"
#include "string.h"
int main() {
    int running = 1;
    int cmd_int;
    while (running == 1) {
        char cmd[100];
        printf("> ");
        fgets(cmd, 20, stdin);
        if (strcmp(cmd, "exit\n") == 0) {
            running = 0;
        } else {
            cmd_int = atoi(cmd);
            printf("Income = ");
            printf("%d", cmd_int);
            printf(" pixel dust\n");
            printf("Tax = ");
            if (cmd_int < 12500) {
                printf("%f", cmd_int*0.32);
            } else {
                printf("%f", cmd_int*0.65);
            }
            printf(" pixel dust\n");
        }
    }
}