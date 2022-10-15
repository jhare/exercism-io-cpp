#include "triangle.h"
#include <exception>
#include <stdexcept>

namespace triangle {

  flavor kind(double x, double y, double z) {
    if(x <= 0 || y <= 0 || z <= 0) {
      throw std::domain_error("Can't be zeros");
    }

    if(z > x + y) {
      throw std::domain_error("Violates inequality");
    }

    if(x > z + y) {
      throw std::domain_error("Violates inequality");
    }

    if(y > z + x) {
      throw std::domain_error("Violates inequality");
    }

    if(x == y && y == z) {
      return flavor::equilateral;
    }

    if(x==y || x==z || z==y) {
      return flavor::isosceles;
    }

    if(x != y && y != z && x != z) {
      return flavor::scalene;
    }

    return flavor::scalene;
  }
}  // namespace triangle
