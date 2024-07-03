#include <stdio.h>
#include <stdlib.h>
#include <openssl/rand.h>

void generate_secret_key(unsigned char *key, size_t length) {
    if (RAND_bytes(key, length) != 1) {
        fprintf(stderr, "Error generating random bytes.\n");
        exit(EXIT_FAILURE);
    }
}

void print_hex(const unsigned char *data, size_t length) {
    for (size_t i = 0; i < length; ++i) {
        printf("%02x", data[i]);
    }
    printf("\n");
}

int main() {
    const size_t key_length = 32; // 256 bit
    unsigned char access_token_key[key_length];
    unsigned char refresh_token_key[key_length];

    // Access token key oluşturma
    generate_secret_key(access_token_key, key_length);
    printf("Generated Access Token Key: ");
    print_hex(access_token_key, key_length);

    // Refresh token key oluşturma
    generate_secret_key(refresh_token_key, key_length);
    printf("Generated Refresh Token Key: ");
    print_hex(refresh_token_key, key_length);

    return 0;
}
