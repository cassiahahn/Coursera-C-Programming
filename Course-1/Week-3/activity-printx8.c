#include <stdio.h>

void print_multiplication_table(int number, int limit) {
    for (int i = 0; i < limit; i++) {
        printf("%dx%d = %d\n", i, number, i * number);
    }
}

int main() {
    int number = 8;
    int limit = 11; // To include 10x8
    print_multiplication_table(number, limit);
    return 0;
}
