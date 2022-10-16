#include "raindrops.h"

namespace raindrops {

  std::string convert(int num)
  {
    std::string str = "";

    if( (num % 3) == 0)
    {
      str += "Pling";
    }

    if( (num % 5) == 0 )
    {
      str += "Plang";
    }

    if( (num % 7) == 0 )
    {
      str += "Plong";
    }

    if(str == "") {
      return std::to_string(num);
    } else {
      return str;
    }
  }
}  // namespace raindrops
