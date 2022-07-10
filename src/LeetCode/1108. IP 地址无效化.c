char * defangIPaddr(char * address){
    int addr_len = strlen(address);
    char *res = (char *)malloc(sizeof(char) * (addr_len + 7));

    int pos = 0;
    for (int i = 0; i < addr_len; i++) {
        if (address[i] == '.') {
            pos += snprintf(res + pos, 4, "%s", "[.]");
        } else {
            res[pos++] = address[i];
        }
    }

    res[pos] = '\0';
    return res;
}