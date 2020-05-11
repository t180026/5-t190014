#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    a = 1.0;
    b = 0.0;
    while(a > b && a < INFINITY) {
        b = a;
        a *= 2;
    }
    printf("%e\n", b);
    return 0;
}
