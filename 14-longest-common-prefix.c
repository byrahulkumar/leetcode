char* longestCommonPrefix(char** strs, int strsSize) {
    if (strs == NULL || strsSize == 0) {
        char* empty = (char*)malloc(1);
        if (empty != NULL) {
            empty[0] = '\0';
        }
        return empty;
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] == '\0' || strs[j][i] != c) {
                size_t len = (size_t)i;
                char* result = (char*)malloc(len + 1);
                if (result != NULL) {
                    memcpy(result, strs[0], len);
                    result[len] = '\0';
                }
                return result;
            }
        }
    }

    size_t len = strlen(strs[0]);
    char* result = (char*)malloc(len + 1);
    if (result != NULL) {
        strcpy(result, strs[0]);
    }
    return result;
}