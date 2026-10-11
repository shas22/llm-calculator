#include <stdio.h>

int main(void) {
    float input = 3.5f;
    float weight = 1.5f;
    float target = 6.0f;

    /* essentially a simple linear model */
    float prediction = weight * input;
    float error = prediction - target;
    printf("prediction: %.1f\n", prediction);
    printf("error: %.1f\n", error);
    printf("loss: %.1f\n", error * error / 2.0f);
    return 0;
}