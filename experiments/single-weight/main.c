#include <stdio.h>

int main() {
    float input = 3.5f;
    float weight = 1.1f;
    float target = 6.0f;

    /* essentially a simple linear model */
    float prediction = weight * input;

    printf("prediction: %.1f\n", prediction);

    return 0;
}