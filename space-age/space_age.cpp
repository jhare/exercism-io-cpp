#include "space_age.h"

namespace space_age {

  space_age::space_age()
  {
    m_seconds = -666;
  }

  long int space_age::seconds() const
  {
    return m_seconds;
  }

  double space_age::on_earth() const
  {
    // I would store seconds as double, but I want to be picky and
    // pretend they are discrete to show the cast here.
    return (double)m_seconds / space_age::m_EARTH_YEAR_SECONDS;
  }

  double space_age::on_mercury() const
  {
    return (double)m_seconds / (space_age::m_EARTH_YEAR_SECONDS * space_age::m_MERCURY_YEAR);
  }

  double space_age::on_venus() const
  {
    return (double)m_seconds / (space_age::m_EARTH_YEAR_SECONDS * space_age::m_VENUS_YEAR);
  }

  double space_age::on_mars() const
  {
    return (double)m_seconds / (space_age::m_EARTH_YEAR_SECONDS * space_age::m_MARS_YEAR);
  }

  double space_age::on_jupiter() const
  {
    return (double)m_seconds / (space_age::m_EARTH_YEAR_SECONDS * space_age::m_JUPITER_YEAR);
  }

  double space_age::on_saturn() const
  {
    return (double)m_seconds / (space_age::m_EARTH_YEAR_SECONDS * space_age::m_SATURN_YEAR);
  }

  double space_age::on_uranus() const
  {
    return (double)m_seconds / (space_age::m_EARTH_YEAR_SECONDS * space_age::m_URANUS_YEAR);
  }

  double space_age::on_neptune() const
  {
    return (double)m_seconds / (space_age::m_EARTH_YEAR_SECONDS * space_age::m_NEPTUNE_YEAR);
  }
}  // namespace space_age
