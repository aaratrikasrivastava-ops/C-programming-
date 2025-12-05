#include <stdio.h>

int main() {
    enum TrafficLight {RED, YELLOW, GREEN};
    enum TrafficLight light;

    int input;
    printf("Enter traffic light (0-RED, 1-YELLOW, 2-GREEN): ");
    scanf("%d", &input);

    light = input;

    switch(light) {
        case RED: printf("Stop"); break;
        case YELLOW: printf("Wait"); break;
        case GREEN: printf("Go"); break;
        default: printf("Invalid input"); break;
    }

    return 0;
}
