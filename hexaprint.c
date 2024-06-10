#include <stdio.h>
#include <string.h>

void PrintHex(unsigned char* buffer, int length) {
    for (int i = 0; i < length; i++) {
        printf("%02X ", buffer[i]);
    }
}

int main(int argc, char *argv[]) {
    unsigned char buffer[1];
    FILE* file = fopen(argv[1], "r");
    
    if (file == NULL) {
        fprintf(stderr, "Could not open file");
        return 0;
    };

    while (fread(buffer, 1, 1, file) > 0) {
        PrintHex(buffer, 1);
    }
    printf("\n");

    fclose(file);
    return 0;
}