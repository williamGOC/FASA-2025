#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 100000           // vector size
#define MAX_VALUE 10   

void vectorSum(int input1[N], int input2[N], int output[N]) {

    for (unsigned i = 0; i < N; i = i + 1) {
        output[i] = input1[i] + input2[i];
    }
}


float norm (int input[N]) {

    int sqSum = 0;
    for (unsigned i = 0; i < N; i++) {
        sqSum = sqSum + input[i] * input[i];
        
    }
    return sqrt(sqSum);
}


void unitVector(int input[N], float output[N]) {

    float vectorNorm = norm(input);

    for (unsigned i = 0; i < N; i++){
        output[i] = input[i] / vectorNorm;
    }
}


int main(int argc, char const **argv){
    
    int vector1[N];
    int vector2[N];
    int vector3[N];

    float vec3Norm[N];

    srand(time(NULL));

    // vector initialization
    // number generation [0, MAX_VALUE]
    for (unsigned i = 0; i < N; i = i + 1) {
        vector1[i] = rand() % (MAX_VALUE + 1);
        vector2[i] = rand() % (MAX_VALUE + 1);
    }

    vectorSum(vector1, vector2, vector3);

    printf("v3 = (%d, %d, %d)\n", vector3[0], vector3[1], vector3[2]);

    unitVector(vector3, vec3Norm);

    printf("Normalize v3 = (%f, %f, %f)\n", vec3Norm[0], vec3Norm[1], vec3Norm[2]);
    printf("Norm = %f\n", vec3Norm[0] * vec3Norm[0] + vec3Norm[1] * vec3Norm[1] + vec3Norm[2] * vec3Norm[2]);
    

    return 0;
}
