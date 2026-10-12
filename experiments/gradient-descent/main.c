#include <stdio.h>

int main(void) {
    float input = 3.5;
    float weight = 1.5;
    float target = 6.0;
    float learning_rate = 0.05;


    for (int step = 1; step <= 10; step++) {
        float prediction = weight * input;
        float error = prediction - target;
        float loss = error * error / 2.0f;
        float gradient = error * input;

        printf("Step %d (before update):\n", step);
        printf("  Current weight: %.12f\n", weight);
        printf("  Prediction:     %.12f\n", prediction);
        printf("  Error:          %.12f\n", error);
        printf("  loss:           %.12f\n", loss);
        printf("  Gradient:       %.12f\n", gradient);

        weight = weight - learning_rate * gradient;
        printf("  Updated weight: %.12f\n\n", weight);
    }
}