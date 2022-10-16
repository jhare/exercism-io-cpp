#include "reverse_string.h"

#include <iostream>
#include <string>
#include <bits/stdc++.h> // learned about this recently

using namespace std;

namespace reverse_string {
  string reverse_string(string str)
  {
    int n = str.length();

    for(int i = 0; i < n/2; i++) {
      swap(str[i], str[n-i-1]);
    }

    return str;
  }
}
