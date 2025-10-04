#include <stdio.h>
#include <math.h>

double A = 0.01; 
double B = 0.01;
double C = 0.01;

double calculateX(double j, double k, double i) {
    return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B)
    * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B)
    * cos(C);
}

double calculateY(double j, double k, double i) {
    return j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A)
    * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B)
    * sin(C);
}

double calculateZ(double j, double k, double i) {
    return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}

int main() {
    double x = 1.0, y = 2.0, z = 3.0;
    
    for (size_t i = 0; i < 10; i++) {
        printf("X: %f, Y: %f, Z: %f\n", 
               calculateX(x, y, z), 
               calculateY(x, y, z), 
               calculateZ(x, y, z));
        A += 0.05;
        B += 0.05;
        C += 0.05;
    }
    return 0;
}