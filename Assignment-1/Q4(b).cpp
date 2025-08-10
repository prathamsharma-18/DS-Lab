// Find the matrix multiplication
#include <iostream>
using namespace std;

int main()
{
  int r, c, i, j, k;

  cout << ":::::::::::  Matrix 1  :::::::::;" << endl;
  cout << "Enter the number of rows: ";
  cin >> r;
  cout << "Enter the number of columns: ";
  cin >> c;
  int a1[r][c];
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << "Enter element at position [" << i << "][" << j << "]: ";
      cin >> a1[i][j];
    }
  }

  cout << "The elements of the matrix are: " << endl;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << a1[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  int p, q;
  cout << ":::::::::::  Matrix 2 :::::::::;" << endl;
  cout << "Enter the number of rows: ";
  cin >> p;
  cout << "Enter the number of columns: ";
  cin >> q;
  int a2[p][q];
  for (int i = 0; i < p; i++)
  {
    for (int j = 0; j < q; j++)
    {
      cout << "Enter element at position [" << i << "][" << j << "]: ";
      cin >> a2[i][j];
    }
  }

  cout << "The elements of the matrix are: " << endl;
  for (int i = 0; i < p; i++)
  {
    for (int j = 0; j < q; j++)
    {
      cout << a2[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  if (c == p)
  {
    int result[r][q];

    for (i = 0; i < r; i++)
    {
      for (j = 0; j < q; j++)
      {
        result[i][j] = 0;
      }
    }

    for (i = 0; i < r; i++)
    {
      for (j = 0; j < q; j++)
      {
        for (k = 0; k < c; k++)
        {
          result[i][j] += a1[i][k] * a2[k][j];
        }
      }
    }

    cout << "The product of the two matrices is: " << endl;
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < q; j++)
      {
        cout << result[i][j] << " ";
      }
      cout << endl;
    }
  }
  else
  {
    cout << "Matrix multiplication is not possible." << endl;
  }

  return 0;
}
