#include <stdio.h>

int main() {
    enum Colors {RED, YELLOW, GREEN};
    enum Colors c;

    for(c = RED; c <= GREEN; c++) {
        switch(c) {
            case RED: printf("RED=%d\n", c); break;
            case YELLOW: printf("YELLOW=%d\n", c); break;
            case GREEN: printf("GREEN=%d\n", c); break;
        }
    }

    return 0;
}
