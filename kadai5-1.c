#include <stdio.h>

int main() {
    double x, y;
    x = 1.0;

    while(x > 0){
        x /= 2;
        if(x > 0)
            y = x;
    }

  printf("%e\n",y);
}
