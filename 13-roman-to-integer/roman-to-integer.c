int romanToInt(char* romawi) {
    int total = 0;
    int panjang = strlen(romawi);

    for (int i = 0; i < panjang; i++) {
        int nilaiSekarang = 0;
        int nilaiBerikutnya = 0;

        if (romawi[i] == 'I') {
            nilaiSekarang = 1;
        } else if (romawi[i] == 'V') {
            nilaiSekarang = 5;
        } else if (romawi[i] == 'X') {
            nilaiSekarang = 10;
        } else if (romawi[i] == 'L') {
            nilaiSekarang = 50;
        } else if (romawi[i] == 'C') {
            nilaiSekarang = 100;
        } else if (romawi[i] == 'D') {
            nilaiSekarang = 500;
        } else if (romawi[i] == 'M') {
            nilaiSekarang = 1000;
        }
    
        if (i + 1 < panjang) {
            if (romawi[i + 1] == 'I') {
                nilaiBerikutnya = 1;
            } else if (romawi[i + 1] == 'V') { 
                nilaiBerikutnya = 5;
            } else if (romawi[i + 1] == 'X') {
                nilaiBerikutnya = 10;
            } else if (romawi[i + 1] == 'L') {
                nilaiBerikutnya = 50;
            } else if (romawi[i + 1] == 'C') {
                nilaiBerikutnya = 100;
            } else if (romawi[i + 1] == 'D') {
                nilaiBerikutnya = 500;
            } else if (romawi[i + 1] == 'M') {
                nilaiBerikutnya = 1000;
            }
        }

        if (nilaiSekarang < nilaiBerikutnya) {
            total -= nilaiSekarang;
        } else {
            total += nilaiSekarang;
        }
    }
    
        return total;
}