/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Complete the program
  string first, second;
  cin >> first >> second;
  int size_first = 0, size_second = 0;
  size_first = first.size();
  size_second = second.size();
  string third, fourth;
  third = first;
  third[0] = second[0];
  fourth = second;
  fourth[0] = first[0];

  cout << size_first << " " << size_second << "\n";
  cout << first << second << "\n";
  cout << third << " " << fourth << "\n";

  return 0;
}
