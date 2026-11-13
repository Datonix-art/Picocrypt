#include <stdio.h>
#include <string.h>
#include "../../include/encrypt.h"

void encrypt_data(char *data, size_t length, const char *key) {
    size_t key_len = strlen(key);
    if(key_len == 0) return;

    for(size_t i = 0; i < length; i++) {
        data[i] ^= key[i % key_len];
    }
}