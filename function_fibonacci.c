int fibonacci(int n) {
    int a = 0;
    int b = 1;
    int i, temp;

    if (n == 0) {
        return 0;
    }

    for (i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}
