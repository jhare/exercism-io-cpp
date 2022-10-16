#include "grains.h"

namespace grains {

  // I saw ULL suffix in type in the test
  unsigned long long int square(int index) {
    if(index <= 1) {
      return 1;
    }

    return 2 * square(index-1);
  }

  unsigned long long int total() {
    unsigned long long tot = 0;
    for(int i = 1; i <= 64; i++) {
      tot += square(i);
    }

    return tot;
  }
}  // namespace grains
