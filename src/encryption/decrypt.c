#include "../../include/decrypt.h"
#include "../../include/encrypt.h"

void decrypt_data(char *data, size_t length, const char *key) {
    encrypt_data(data, length, key);
}