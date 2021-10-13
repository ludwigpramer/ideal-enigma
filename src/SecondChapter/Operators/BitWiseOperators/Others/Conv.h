#pragma one

unsigned intToBin(unsigned k) {
    if (k == 0) return 0;
    if (k == 1) return 1;                       /* optional */
    return (k % 2) + 10 * intToBin(k / 2);
}