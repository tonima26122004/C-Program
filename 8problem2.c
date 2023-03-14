#include <stdio.h>

int main() {
    // (i) BCDEF pattern
    for (char c = 'B'; c <= 'F'; c++) {
        printf("%c", c);
    }
    printf("\n");

    // (ii) ABCDE pattern
    for (char c = 'A'; c <= 'E'; c++) {
        printf("%c", c);
    }
    printf("\n");

    // (iii) CEGIK pattern
    char c = 'C';
    for (int i = 0; i < 5; i++) {
        printf("%c", c);
        c += 2;
    }
    printf("\n");

    // (iv) FEDCB pattern
    for (char c = 'F'; c >= 'A'; c--) {
        printf("%c", c);
    }
    printf("\n");

    // (v) ABBCCC pattern
    int count = 1;
    for (char c = 'A'; c <= 'C'; c++) {
        for (int i = 0; i < count; i++) {
            printf("%c", c);
        }
        count++;
    }
    printf("\n");

    return 0;
}
