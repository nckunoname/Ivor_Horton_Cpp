#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const int size = 5;
  int values[size] = {1,2,3};
  double junk[size];

  cout << endl;

  for(int i=0; i<size; i++)
    cout << "" << setw(13) << values[i];
  cout << endl;

  for(int i=0; i<size; i++)
    cout << "" << setw(13) << junk[i];
  cout << endl;

    return 0;
}
