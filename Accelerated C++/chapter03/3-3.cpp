#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  typedef vector<string>::size_type vec_sz;
  
  vector<string> words;
  vector<int> counts;

  cout << "Words: ";
  string s;

  cin >> s;
//added escape character
bool fishes = false;

  while ((cin >> s) && (fishes ==false) ) {
            cin >> s;
            // if s = 0 or number then exit
          if (s == "0")
            fishes=true;; 
    
    for (vec_sz i = 0; i < words.size(); ++i) {
      if (s == words[i]) {
	++counts[i];
	found = true;
      }


    }

    if (!found) {
      words.push_back(s);
      counts.push_back(1);
    }
  }

  for (vec_sz i = 0; i < words.size(); ++i)
    cout << words[i] << " appeared " << counts[i] << " times" << endl;

  return 0;
}
