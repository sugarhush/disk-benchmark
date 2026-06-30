#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2)
    {
        printf("Usage: %s <disk-path>\n", argv[0]);
        return 0;
    }
    
    const char *disk = argv[1];
    FILE *zfp = fopen("/dev/zero", "r");
    FILE *rfp = fopen("/dev/random", "r");

    fclose(zfp);
    fclose(rfp);
    return 0;
}