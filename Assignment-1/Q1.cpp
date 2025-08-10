// Developa Menudrivenprogramtodemonstrate the followingoperations of Arrays
// ——MENU——-
// 1.CREATE
// 2.DISPLAY
// 3.INSERT
// 4.DELETE
// 5.LINEAR SEARCH
// 6.EXIT
#include <iostream>
using namespace std;

int main()
{
  int arr[100], n = 0, choice;

  do
  {
    cout << "\n—— MENU ——\n";
    cout << "1. CREATE\n";
    cout << "2. DISPLAY\n";
    cout << "3. INSERT\n";
    cout << "4. DELETE\n";
    cout << "5. LINEAR SEARCH\n";
    cout << "6. EXIT\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    { // CREATE
      cout << "Enter number of elements: ";
      cin >> n;
      cout << "Enter elements: ";
      for (int i = 0; i < n; i++)
        cin >> arr[i];
      cout << "Array created successfully.\n";
    }
    else if (choice == 2)
    { // DISPLAY
      if (n == 0)
        cout << "Array is empty.\n";
      else
      {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++)
          cout << arr[i] << " ";
        cout << endl;
      }
    }
    else if (choice == 3)
    { // INSERT
      if (n == 100)
        cout << "Array is full.\n";
      else
      {
        int pos, val;
        cout << "Enter position (1 to " << n + 1 << "): ";
        cin >> pos;
        cout << "Enter value: ";
        cin >> val;
        if (pos < 1 || pos > n + 1)
          cout << "Invalid position!\n";
        else
        {
          for (int i = n; i >= pos; i--)
            arr[i] = arr[i - 1];
          arr[pos - 1] = val;
          n++;
          cout << "Element inserted.\n";
        }
      }
    }
    else if (choice == 4)
    { // DELETE
      if (n == 0)
        cout << "Array is empty.\n";
      else
      {
        int pos;
        cout << "Enter position (1 to " << n << "): ";
        cin >> pos;
        if (pos < 1 || pos > n)
          cout << "Invalid position!\n";
        else
        {
          for (int i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];
          n--;
          cout << "Element deleted.\n";
        }
      }
    }
    else if (choice == 5)
    { // LINEAR SEARCH
      if (n == 0)
        cout << "Array is empty.\n";
      else
      {
        int key, found = 0;
        cout << "Enter value to search: ";
        cin >> key;
        for (int i = 0; i < n; i++)
        {
          if (arr[i] == key)
          {
            cout << "Element found at position " << i + 1 << ".\n";
            found = 1;
            break;
          }
        }
        if (!found)
          cout << "Element not found.\n";
      }
    }
    else if (choice != 6)
    {
      cout << "Invalid choice.\n";
    }

  } while (choice != 6);

  cout << "Exiting program...\n";
  return 0;
}
