#include <stdbool.h>

int cmp(const void *_a, const void *_b)
{
    char *a = (char *)_a;
    char *b = (char *)_b;

    return *a - *b;
}

bool CheckPermutation(char* s1, char* s2){
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);

    if (len_s1 == 0 && len_s2 == 0) {
        return true;
    } else if(len_s1 == 0 || len_s2 == 0 || (len_s1 != len_s2)) {
        return false;
    }

    qsort(s2, len_s2, sizeof(char), cmp);
    qsort(s1, len_s1, sizeof(char), cmp);
    //printf("%s\n%s\n", s1, s2);
    //printf("%d %d", len_s1, len_s2);

    for (int i = 0; i < len_s1; i++) {
        //printf("%c %c\n", s1[i], s2[i]);
        if (s1[i] != s2[i]) {
            return false;
        }
    }

    return true;
}