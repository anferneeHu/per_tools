
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LEN 100000

void cal_per(int tms) {
    char *p = NULL;
    int i = 0;
    for (i = 0; i < tms; i++) {
        p = malloc(STR_LEN);
        memset(p, 0x64, STR_LEN);
        free(p);
        p = NULL;
    }
    return;
}

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("usage t1 count tms\n");
        return -1;
    }

    int count = atoi(argv[1]);
    int tms = atoi(argv[2]);

    printf("count is %d, tms is %d\n", count, tms);

    int i = 0;
    for (i = 0; i < count; i++) {
        cal_per(tms);
    }
    return 0;
}
