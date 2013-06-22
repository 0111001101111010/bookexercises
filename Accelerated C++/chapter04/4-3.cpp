#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

//purpose for 100 times until reaching 1,, log10(number) +1
//regressive function for logs

int get_width(int n) {
  return log10(n) + 1;
}

int main() {
  int max = 100;
  
  for (int i = 1; i <= max; ++i) {
    cout << setw(get_width(max))
	 << i
	 << setw(get_width(max * max) + 1)
	 << i * i
	 << endl;
  }
  
  return 0;
}
