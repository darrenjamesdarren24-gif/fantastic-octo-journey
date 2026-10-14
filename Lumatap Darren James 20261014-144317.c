#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char storedUsername[] = "student";
    int pin, storedPIN = 2026;

    printf("Enter Username: ");
    scanf("%49s", username);

    printf("Enter PIN: ");
    scanf("%d", &pin);

    if (strcmp(username, storedUsername) == 0 && pin == storedPIN) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied! Invalid username or PIN.\n");
    }

    return 0;
}