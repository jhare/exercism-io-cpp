#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {

  enum flavor {
    equilateral,
    isosceles,
    scalene
  };

  flavor kind(double x, double y, double z);
}  // namespace triangle

#endif // TRIANGLE_H
