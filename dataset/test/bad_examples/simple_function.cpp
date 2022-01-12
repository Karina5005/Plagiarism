int fib (int num) {
    int x = 0, y = 1, z = 0;
    for (int i = 0; i < num - 1; i++) {
        z = x + y;
        x = y;
        y = z;
    }
    return x;
}

