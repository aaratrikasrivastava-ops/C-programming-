#include <stdio.h>

int main() {
    enum Letters {A=10, B, C};
    enum Letters l;

    for(l = A; l <= C; l++) {
        switch(l) {
            case A: printf("A=%d\n", l); break;
            case B: printf("B=%d\n", l); break;
            case C: printf("C=%d\n", l); break;
        }
    }

    return 0;
}
