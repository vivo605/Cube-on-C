#include <stdio.h>
#include <math.h>

double A = 0.01; 
double B = 0.01;
double C = 0.01;

double ooz;

int x;
int y;
int z;
int xp;
int yp;
int idx;

int cubeWidth = 20;
int width = 60;
int height = 44;
int K1 = 30;
int distanceFromCam = 60;

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

double calculateForSurface(double cubeX, double cubeY, double cubeZ, char ch) {
    int x = calculateX(cubeX, cubeY, cubeZ);
    int y = calculateY(cubeX, cubeY, cubeZ);
    int z = calculateZ(cubeX, cubeY, cubeZ) + distanceFromCam;

    ooz = 1/z;
    xp = floor(width/2 + K1 * ooz * x *2);
    yp = floor(height/2 + K1 * ooz * y);
    idx = xp + yp * width;

    if (idx >= 0 && idx < width * height) {
    }
}

int main() {
    for (;;){
        
    }

    return 0;
}