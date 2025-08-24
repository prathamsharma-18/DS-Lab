// Sparse Matrix Multiplication using Triplet Representation
#include <iostream>
using namespace std;

// Structure to store triplet form (row, col, value)
struct Triplet
{
  int row, col, val;
};

int main()
{
  int r1 = 3, c1 = 3, r2 = 3, c2 = 3;

  int A[3][3] = {
      {1, 0, 0},
      {0, 0, 2},
      {0, 3, 0}};

  int B[3][3] = {
      {0, 4, 0},
      {0, 0, 5},
      {7, 0, 0}};

  Triplet tA[10];
  int nzA = 0;
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      if (A[i][j] != 0)
      {
        tA[nzA++] = {i, j, A[i][j]};
      }
    }
  }

  Triplet tB[10];
  int nzB = 0;
  for (int i = 0; i < r2; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      if (B[i][j] != 0)
      {
        tB[nzB++] = {i, j, B[i][j]};
      }
    }
  }

  Triplet result[20];
  int nzR = 0;

  for (int i = 0; i < nzA; i++)
  {
    for (int j = 0; j < nzB; j++)
    {
      if (tA[i].col == tB[j].row)
      {
        int r = tA[i].row;
        int c = tB[j].col;
        int val = tA[i].val * tB[j].val;

                bool found = false;
        for (int k = 0; k < nzR; k++)
        {
          if (result[k].row == r && result[k].col == c)
          {
            result[k].val += val;
            found = true;
            break;
          }
        }
        if (!found)
        {
          result[nzR++] = {r, c, val};
        }
      }
    }
  }

  cout << "Result in Triplet Form (Row Col Value):\n";
  for (int i = 0; i < nzR; i++)
  {
    cout << result[i].row << " " << result[i].col << " " << result[i].val << endl;
  }

  cout << "\nResult Matrix:\n";
  int C[3][3] = {0};
  for (int i = 0; i < nzR; i++)
  {
    C[result[i].row][result[i].col] = result[i].val;
  }

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}