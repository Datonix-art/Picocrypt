#include <stdio.h>
#include <string.h>
#include "../include/encrypt.h"
#include "../include/decrypt.h"

int main(void)
{
    char text[] = "Secret text 123";
    const char *key = "mykey";
    size_t len = strlen(text);
    encrypt_data(text, len, key);
    printf("Encrypted (Hex): ");
    for (size_t i = 0; i < len; i++) {
        printf("%02X ", (unsigned char)text[i]);
    }
    printf("\n");
    
    decrypt_data(text, len, key);
    printf("Decrypted: %s\n", text);

    return 0;
}