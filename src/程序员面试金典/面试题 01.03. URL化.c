char* replaceSpaces(char* S, int length){
    char *res = (char*)malloc(sizeof(char) * 3 * length + 1);

    int pos = 0;
    for (int i = 0; i < length; i++) {
        if (S[i] == ' ') {
            pos += snprintf(res + pos, 4, "%s", "%20");
            //printf("1 - %d\n", pos);
        } else {
            res[pos++] = S[i];
            //printf("2 - %d\n", pos);
        }
    }

    res[pos] = '\0';
    return res;
}