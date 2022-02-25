#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void decrypt(char *f);
void encrypt(char *alainy);
void print(char *f, int i);

int main() {
    string x = get_string("Word to encrypt: ");
    int d = strlen(x);
    encrypt(x);
    return 0;
}

void encrypt(char *alainy) {
    char tsisy_idirany[100]; // magic happens here
    char f[100]; // store encrpt
    printf("Encrypted vesion: ");
    for (int i = 0; i < strlen(alainy); i++)
    {
        // int comparaison = strcmp(&alainy, " ");
        if (alainy[i] == 32) {
            f[i] = 32;
        } else if ((alainy[i] >= 48) && (alainy[i] <= 57)) {
            f[i] = alainy[i] - 10;
        } else {
            f[i] = alainy[i] - 40;
        }
        print(f,i);
    } 
    printf("\n"); 
    // total output = string
    int azo = get_int("Do you want to decrypt 1/2? ");
    while ((azo != 1) || (azo!= 2))
    {   
        if (azo == 1) {
            decrypt(f);
            break;
        } else if (azo == 2) {
            printf("task completed!\n");
            break;
        } else {
            printf("error\n");
            azo = get_int("Choose again! Decrypt 1/2?: ");            
        } 
    } 
}  

void decrypt(char *f) {
    char vao2[100];
    printf("The decrypted version is: ");
    for (int i = 0; i < strlen(f); i++)
    {
        vao2[i] = f[i] + 40;
        printf("%c", vao2[i]);
    }
    printf("\n");
}

// print
void print(char *f, int i) {
    printf("%c", f[i]);
}
// function encrypt -> random()
// function decrypt -> revert()