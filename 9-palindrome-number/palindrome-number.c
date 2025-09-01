bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int asli = x;
    long balik = 0;

    while (x > 0) {
        int digit = x % 10;
        balik = balik * 10 + digit;
        x /= 10;
    }

    return balik == asli;
}