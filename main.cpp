#include "UFunciones.h"

int main()
{
   TDato  **mat=nullptr;
   int n;
   int filas, col;

   srand(time(nullptr));
   cout << "Numero de filas de la matriz cuadrada: ";
   cin >> filas;
   cout << "Numero de columnas de la matriz cuadrada: ";
   cin >> col;

   mat = dimensionarMatriz(filas,col);
   llenarMatriz(mat,filas,col);
   imprimirMatriz(mat,filas,col);
   cout << "El valor mas pequenno es : " << elMenor(mat,filas,col) << "\n";
   cout << "Suponiendo que la matriz es cuadrada, la suma de la diagonal es: "<< sumadeDiagonal(mat,filas,col);
   cout << "\nSuma de los elementos ubicados por encima de  la diagonal : " << sumaPorEncinaDeLaDiagonal(mat,filas,col);

   //--- liberamos memoria
   for(int f=0; f<filas; f++)
     delete  []mat[f];
   delete []mat;
   mat = nullptr;

  return 0;
}
