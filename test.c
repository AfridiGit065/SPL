#include<stdio.h>
int main(){
char email[100]; // Assuming email won't exceed 99 characters
char mail[100];
char pass[100];
char Lpass[100];

// Read strings from file (e.g., using fgets)
fgets(email, sizeof(email), fptr);
fgets(pass, sizeof(pass), fptr);

// Compare strings
int v = strcmp(email, mail);
int p = strcmp(pass, Lpass);

// Check the results
if (v == 0) {
    printf("Emails are equal.\n");
} else {
    printf("Emails are different.\n");
}

if (p == 0) {
    printf("Passwords are equal.\n");
} else {
    printf("Passwords are different.\n");
}}
