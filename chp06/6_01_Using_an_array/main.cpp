#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  int height[10];   // Array of heights
  int count = 0;    // Number of heights
  char reply = 0;   // Reply to prompt

  // Input loop for heights. Read heights until we are done, or the array is full
  do {
    cout << endl
         << "Enter a height as an integral number of inches:";
    cin >> height[count++];

    // Check if another input is required
    cout << "Do you want to enter another (y or n)?";
    cin >> reply;
  } while(count<10 && tolower(reply) == 'y');

  // Indicate when array is full
  if(count == 10)
    cout << endl << "Maximum height count reached." << endl;

  // Calculate the average and display it
  double average = 0.0;
  for(int i=0; i<count; i++)
    average += height[i];
  average /= count;
  cout << endl << "Average height is " << average << " inches." << endl;

  // Calculate how many are above average height
  int above_average = 0;
  for(int i; i<count; i++)
    if(height[i] > average)
      above_average++;
  cout << "There "
       << (above_average == 1 ? "is " : "are ")
       << above_average << " height"
       << (above_average == 1 ? "" : "s ")
       << "above average."
       <<endl;
  return 0;
}
