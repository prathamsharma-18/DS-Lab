// Write a program to implement the following operations on a Sparse Matrix,
// assuming the matrix is represented using a triplet.
// Transpose of a matrix.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int row = 4, col = 5;
  int sparse[4][5] = {
      {0, 0, 3, 0, 4},
      {0, 0, 5, 7, 0},
      {0, 0, 0, 0, 0},
      {0, 2, 6, 0, 0}};

  int nonZero = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (sparse[i][j] != 0)
        nonZero++;
    }
  }
  int k = 0;
  int triplet[nonZero][3];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {

      if (sparse[i][j] != 0)
      {
        triplet[k][0] = i;
        triplet[k][1] = j;
        triplet[k][2] = sparse[i][j];
        k++;
      }
    }
  }

  cout << "Original Triplet Representation:" << endl;
  cout << "Row\tColumn\tValue" << endl;
  for (int i = 0; i < nonZero; i++)
  {

    cout << triplet[i][0] << "\t" << triplet[i][1] << "\t" << triplet[i][2] << endl;
  }

  cout << "Transpose: " << endl;
  for (int i = 0; i < nonZero; i++)
  {
    int temp = triplet[i][0];
    triplet[i][0] = triplet[i][1];
    triplet[i][1] = temp;
  }

  cout << "Transposed Triplet Representation:" << endl;
  cout << "Row\tColumn\tValue" << endl;
  for (int i = 0; i < nonZero; i++)
  {
    cout << triplet[i][0] << "\t" << triplet[i][1] << "\t" << triplet[i][2] << endl;
  }

  int transpose[5][4] = {0};

  for (int i = 0; i < nonZero; i++)
  {
    int r = triplet[i][0];
    int c = triplet[i][1];
    transpose[r][c] = triplet[i][2];
  }
  cout << "Transpose Matrix: " << endl;
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cout << transpose[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}