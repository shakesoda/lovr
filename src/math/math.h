#include "lib/vec/vec.h"
#include "randomGenerator.h"

#pragma once

#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)

typedef float* vec3;
typedef float* quat;
typedef float* mat4;
typedef vec_t(mat4) vec_mat4_t;

void lovrMathInit();
void lovrMathDestroy();
RandomGenerator* lovrMathGetRandomGenerator();
void lovrMathOrientationToDirection(float angle, float ax, float ay, float az, vec3 v);
