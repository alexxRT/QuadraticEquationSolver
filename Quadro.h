#ifndef QUADRO_H
#define QUADRO_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//----------------------------------------------------------------------------------------------------
//! Starts the test
//!
//! @brief calls the function New_Test_anti_copypaste
//----------------------------------------------------------------------------------------------------

void Test_Runner ();
//----------------------------------------------------------------------------------------------------
//! print the results
//!
//! @param [in] x1  Pointer to the 1st root
//! @param [in] x2  Pointer to the 2nd root
//! @param [in] nRoots Pointer to the num of roots
//!
//----------------------------------------------------------------------------------------------------
void Output_Function (int* nRoots, double* x1, double* x2);
//----------------------------------------------------------------------------------------------------
//! Solves both liner and quadratic equations
//!
//! @param [in]  a   a-coefficient
//! @param [in]  b   b-coefficient
//! @param [in]  c   c-coefficient
//! @param [out] x1  Pointer to the 1st root
//! @param [out] x2  Pointer to the 2nd root
//!
//! @return Number of roots
//! @brief Main function which elobarates two above
//----------------------------------------------------------------------------------------------------

int Quadro (double a, double b, double c, double* x1, double* x2);
//----------------------------------------------------------------------------------------------------
//! Read your numbers from keyboard
//!
//! @param [out]  a   a-coefficient
//! @param [out]  b   b-coefficient
//! @param [out]  c   c-coefficient
//!
//----------------------------------------------------------------------------------------------------

void Input_Function (double* a, double* b, double* c);

#endif