#include <iostream>
#include <string>

using namespace std;

//purpose determines the longest and shortest length string.

int main() {
  typedef string::size_type str_sz;

  string longest;
  str_sz longest_length = 0;
  string shortest;
  str_sz shortest_length = 0;

  cout << "Words: ";
  string s;
bool fishes = false;

  while ((cin >> s) && (fishes ==false) ) {
            cin >> s;
            // if s = 0 or number then exit
          if (s == "0")
            fishes=true;; 
    if (longest_length == 0 || s.size() > longest_length) {
      longest = s;
      longest_length = s.size();
    } 

    if (shortest_length == 0 || s.size() < shortest_length) {
      shortest = s;
      shortest_length = s.size();
    }
  }

  cout << "Longest: " << longest << endl;
  cout << "Shortest: " << shortest << endl;

  return 0;
}		
