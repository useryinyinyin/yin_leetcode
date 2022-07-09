#include <stdio.h>
#include <stdbool.h>

int cmp(const void *_a, const void *_b)
{
    char *a = (char *)_a;
    char *b = (char *)_b;
    return *a - *b;
}

bool isUnique(char* astr){

    if (strlen(astr) == 0) {
        return true;
    }

    qsort(astr, strlen(astr), sizeof(char), cmp);

    for (int i = 0; i < strlen(astr); i++) {
        if (astr[i] == astr[i + 1]) {
            return false;
        }
    }

    return true;
}