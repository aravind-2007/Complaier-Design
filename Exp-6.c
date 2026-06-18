#include <stdio.h>
int main() {
    printf("A -> Aα | β\n");
    printf("After eliminating left recursion:\n");
    printf("A -> βA'\nA' -> αA' | ε\n");
    return 0;
}
