char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    // Ambil string pertama sebagai prefix awal
    char* prefix = strs[0];

    for (int i = 1; i < strsSize; i++) {
        // Cek huruf per huruf antara prefix dengan strs[i]
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        // Potong prefix sesuai panjang common prefix saat ini
        prefix[j] = '\0';

        if (j == 0) return ""; // Tidak ada common prefix
    }

    return prefix;
}