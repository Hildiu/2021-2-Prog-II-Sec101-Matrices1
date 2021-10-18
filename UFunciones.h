//
// Created by MARIA HILDA BERMEJO RIOS on 10/18/21.
//

#ifndef PROG_II_SEC101_18_DE_OCTUBRE_UFUNCIONES_H
#define PROG_II_SEC101_18_DE_OCTUBRE_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace std;

using TDato = unsigned long int;

TDato ** dimensionarMatriz(int nfilas,int ncol);
void llenarMatriz(TDato **mat, int nfilas, int ncol);
void imprimirMatriz(TDato **mat, int nfilas, int ncol);
TDato elMenor(TDato **mat, int nfilas, int ncol);
TDato sumadeDiagonal(TDato **mat, int filas,int col);
TDato sumaPorEncinaDeLaDiagonal(TDato **mat,int filas,int col);

#endif //PROG_II_SEC101_18_DE_OCTUBRE_UFUNCIONES_H
