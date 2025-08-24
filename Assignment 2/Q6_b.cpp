// Write a program to implement the following operations on a Sparse Matrix,
// assuming the matrix is represented using a triplet.
// Addition of two matrices.ex5]\

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int row = 4, col = 5;
  int matrix1[4][5] = {
      {0, 0, 3, 0, 4},
      {0, 0, 5, 7, 0},
      {0, 0, 0, 0, 0},
      {0, 2, 6, 0, 0}};

  int matrix2[4][5] = {
      {0, 0, 0, 0, 1},
      {2, 0, 0, 3, 0},
      {0, 4, 0, 0, 5},
      {6, 0, 0, 0, 0}};
  int nonZero1 = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (matrix1[i][j] != 0)
        nonZero1++;
    }
  }
  int nonZero2 = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (matrix2[i][j] != 0)
        nonZero2++;
    }
  }
  // Build triplet1 from matrix1
  int triplet1[nonZero1][3];
  int k1 = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (matrix1[i][j] != 0)
      {
        triplet1[k1][0] = i;
        triplet1[k1][1] = j;
        triplet1[k1][2] = matrix1[i][j];
        k1++;
      }
    }
  }
  // Build triplet2 from matrix2
  int triplet2[nonZero2][3];
  int k2 = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (matrix2[i][j] != 0)
      {
        triplet2[k2][0] = i;
        triplet2[k2][1] = j;
        triplet2[k2][2] = matrix2[i][j];
        k2++;
      }
    }
  }

  // Addition of two triplet arrays
  int result[nonZero1 + nonZero2][3];
  int i = 0, j = 0, k = 0;
  while (i < nonZero1 && j < nonZero2)
  {
    if (triplet1[i][0] == triplet2[j][0] && triplet1[i][1] == triplet2[j][1])
    {
      // Same position: add values
      result[k][0] = triplet1[i][0];
      result[k][1] = triplet1[i][1];
      result[k][2] = triplet1[i][2] + triplet2[j][2];
      i++;
      j++;
      k++;
    }
    else if (triplet1[i][0] < triplet2[j][0] ||
             (triplet1[i][0] == triplet2[j][0] && triplet1[i][1] < triplet2[j][1]))
    {
      // triplet1 comes first
      result[k][0] = triplet1[i][0];
      result[k][1] = triplet1[i][1];
      result[k][2] = triplet1[i][2];
      i++;
      k++;
    }
    else
    {
      // triplet2 comes first
      result[k][0] = triplet2[j][0];
      result[k][1] = triplet2[j][1];
      result[k][2] = triplet2[j][2];
      j++;
      k++;
    }
  }
  // Copy remaining entries from triplet1
  while (i < nonZero1)
  {
    result[k][0] = triplet1[i][0];
    result[k][1] = triplet1[i][1];
    result[k][2] = triplet1[i][2];
    i++;
    k++;
  }
  // Copy remaining entries from triplet2
  while (j < nonZero2)
  {
    result[k][0] = triplet2[j][0];
    result[k][1] = triplet2[j][1];
    result[k][2] = triplet2[j][2];
    j++;
    k++;
  }

  // Print result triplet form
  cout << "Resultant matrix in triplet form:\n";
  cout << "Row\tCol\tValue\n";
  for (int idx = 0; idx < k; idx++)
  {
    cout << result[idx][0] << "\t" << result[idx][1] << "\t" << result[idx][2] << endl;
  }
  return 0;
}