#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool hasLowercase(char buf[]){
    int i;
    for (i = 0; buf[i] != '\0'; i++){
        if (buf[i] - 97 >= 0 && buf[i] - 97 <= 25){
            return true;
        }
    }
    return false;
}

bool hasUppercase(char buf[]){
    int i;
    for (i = 0; buf[i] != '\0'; i++){
        if (buf[i] - 65 >= 0 && buf[i] - 65 <= 25){
            return true;
        }
    }
    return false;
}

bool hasDigit(char buf[]){
    int i;
    for (i = 0; buf[i] != '\0'; i++){
        if (buf[i] - 48 >= 0 && buf[i] - 48 <= 9){
            return true;
        }
    }
    return false;
}

bool hasSpecialChar(char buf[]){
    int i;
    for (i = 0; buf[i] != '\0'; i++){
        if (buf[i] - 33 >= 0 && buf[i] - 33 <= 14){
            return true;
        }
        else if (buf[i] - 58 >= 0 && buf[i] - 58 <= 6){
            return true;
        }
        else if (buf[i] - 91 >= 0 && buf[i] - 91 <= 5){
            return true;
        }
        else if (buf[i] - 123 >= 0 && buf[i] - 123 <= 3){
            return false;
        }
        else{
            continue;
        }
    }
    return false;
}

int evaluateStrength(char buf[]){
    int strength = 0;
    int len = strlen(buf);

    if (len >= 12) strength++;
    if (hasLowercase(buf)) strength++;
    if (hasUppercase(buf)) strength++;
    if (hasDigit(buf)) strength++;
    if (hasSpecialChar(buf)) strength++;

    return strength;
}


int main(){
    char buf[500];
    char decision[50];
    char old_password[50];

    do {
        printf("\n");
        printf("Password Resilience Analyzer\n");
        printf("1. Test a new password\n");
        printf("2. View Strength of the last tested password\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%s", decision);
        if (strcmp(decision, "1") == 0){
            printf("Enter a password: ");
            scanf("%s", buf);
            int len = strlen(buf);
            if (len < 8){
                printf("Error: Password should be at least 8 characters long.\n");
                continue;
            }
            if (len >= 8){
                int result = evaluateStrength(buf);

                if (result >= 0 && result <= 2) {
                    strcpy(old_password, "Weak");
                    printf("Password Strength: %s\n", old_password);
                }
                else if (result >= 3 && result <= 4){
                    strcpy(old_password, "Moderate");
                    printf("Password Strength: %s\n", old_password);
                }
                else if (result == 5){
                    strcpy(old_password, "Strong");
                    printf("Password Strength: %s\n", old_password);
                }
            }
        }
        else if (strcmp(decision, "2") == 0){
            printf("Last tested password strength: %s\n", old_password);
        }
        else if (strcmp(decision, "3") == 0){
            continue;
        }
        else{
            printf("Wrong input please enter 1, 2 or 3\n");
        }
    }
    while (strcmp(decision, "3") != 0);
    printf("Exiting...\n");
    return 0;
}
