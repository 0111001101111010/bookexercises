#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

///purpose use of the numeric library? 
//averages all of them togethers 
int main() {
  vector<double> nums;
  double num;

  while (cin >> num)
    nums.push_back(num);

  cout << accumulate(nums.begin(), nums.end(), 0.0) / nums.size() << endl;
int pause;
  cin >> pause;
  system ('pause');
}
