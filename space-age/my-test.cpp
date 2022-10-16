#include <iostream>
#include "space_age.h"

using namespace std;

int main() {

  space_age::space_age x;
  space_age::space_age y(10);

  cout << "space age bench test v2\n";

  cout << "Seconds are " << x.seconds() << " seconds.\n";

  return 0;
}
