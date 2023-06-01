#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isKeyword(char* identifier) {
    char keywords[32][10] = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed", "sizeof",
        "static", "struct", "switch", "typedef", "union", "unsigned", "void",
        "volatile", "while"
    };

    int i;
    for (i = 0; i < 32; i++) {
        if (strcmp(keywords[i], identifier) == 0) {
            return true;
        }
    }

    return false;
}

bool isValidIdentifier(char* identifier) {
    int i, len = strlen(identifier);

    if (!((identifier[0] >= 'a' && identifier[0] <= 'z') ||
          (identifier[0] >= 'A' && identifier[0] <= 'Z') ||
          identifier[0] == '_')) {
        return false;
    }

    for (i = 1; i < len; i++) {
        if (!((identifier[i] >= 'a' && identifier[i] <= 'z') ||
              (identifier[i] >= 'A' && identifier[i] <= 'Z') ||
              (identifier[i] >= '0' && identifier[i] <= '9') ||
              identifier[i] == '_')) {
            return false;
        }
    }

    return true;
}

int main() {
    char input[100];

    printf("Enter an identifier: ");
    scanf("%s", input);

    if (isKeyword(input)) {
        printf("The entered identifier is a keyword.\n");
    } else if (isValidIdentifier(input)) {
        printf("The entered identifier is valid.\n");
    } else {
        printf("The entered identifier is invalid.\n");
    }

    return 0;
}

