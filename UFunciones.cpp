//
// Created by MARIA HILDA BERMEJO RIOS on 10/18/21.
//

#include "UFunciones.h"


TDato ** dimensionarMatriz(int nfilas,int ncol)
{//--------------------------------------------
    TDato **m = new TDato*[nfilas];

    for(int i=0; i<nfilas; i++)
      m[i] = new TDato[ncol];
    return m;
}

void llenarMatriz(TDato **mat, int nfilas, int ncol)
{//------------------------------------------------
  for(int f=0; f<nfilas; f++)
    for(int c=0; c<ncol; c++)
      mat[f][c] = rand()%99 + 1;
}


void imprimirMatriz(TDato **mat, int nfilas, int ncol)
{//---------------------------------------------------
  cout << "\n";
  for(int f=0; f<nfilas; f++)
  {
    for (int c = 0; c < ncol; c++)
      cout << setw(6) << mat[f][c];
    cout << "\n";
  }
}


TDato elMenor(TDato **mat, int nfilas, int ncol)
{
  TDato menor = mat[0][0];

  for( int f=0; f<nfilas; f++)
    for(int c=0; c<ncol; c++)
      if( mat[f][c] < menor)
        menor = mat[f][c];
  return menor;
}


TDato sumadeDiagonal(TDato **mat, int filas,int col)
{
  TDato suma=0;
  for(int f=0; f<filas;f++)
    suma += mat[f][f];  //-- suma = suma + mat[f][f];
  return suma;
}

TDato sumaPorEncinaDeLaDiagonal(TDato **mat,int filas,int col)
{
  TDato suma =0;

  for(int f=0; f<filas-1; f++)
    for(int c=f+1; c<col;c++)
      suma = suma + mat[f][c];
  return suma;
}
