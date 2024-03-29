/*! @file mathf.h
    @brief library of functions for computing integrals
    @author Paolo Gastaldo

    details.
*/

#ifndef MATHF_H
#define MATHF_H

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

float Polynomial(float* coeff, int size, float in);
void Rectangular(float* values, int size, float stepsize, float* integ1, float* integ2);
float Trapezoidal(float* values, int size, float stepsize);

#endif

