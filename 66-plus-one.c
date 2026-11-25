int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* res = (int*)malloc((digitsSize + 1) * sizeof(int));
    if (!res) {
        *returnSize = 0;
        return NULL;
    }

    int carry = 1;
    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        res[i + 1] = sum % 10;
        carry = sum / 10;
    }

    if (carry > 0) {
        res[0] = carry;
        *returnSize = digitsSize + 1;
        return res;
    }

    *returnSize = digitsSize;
    for (int i = 0; i < digitsSize; i++) {
        res[i] = res[i + 1];
    }
    return res;
}