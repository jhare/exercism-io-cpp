#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

  class space_age {

    private:
      long int m_seconds; // ended up needing > 2B seconds.

      const long int m_EARTH_YEAR_SECONDS = 31557600;

      const double m_MERCURY_YEAR = 0.2408467;
      const double m_VENUS_YEAR = 0.61519726;
      const double m_MARS_YEAR = 1.8808158;
      const double m_JUPITER_YEAR = 11.862615;
      const double m_SATURN_YEAR = 29.447498;
      const double m_URANUS_YEAR = 84.016846;
      const double m_NEPTUNE_YEAR = 164.79132;

    public:
      space_age();
      space_age(long int seconds) : m_seconds(seconds) {}

      long int seconds() const;

      double on_earth() const;
      double on_mercury() const;
      double on_venus() const;
      double on_mars() const;
      double on_jupiter() const;
      double on_saturn() const;
      double on_uranus() const;
      double on_neptune() const;
  };

}  // namespace space_age

#endif // SPACE_AGE_H
