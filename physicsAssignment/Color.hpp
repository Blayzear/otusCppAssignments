#pragma once
#include <iostream>

class Color {
  public:
    Color();
    Color(double red, double green, double blue);
    double red() const;
    double green() const;
    double blue() const;

  private:
    double r{};
    double g{};
    double b{};
};

inline std::ostream& operator<<(std::ostream& os, const Color& color) {
    os << color.red() << " " << color.green() << " " << color.blue();
    return os;
}

inline std::istream& operator>>(std::istream& is, Color& color) {
    double red, green, blue;
    is >> red >> green >> blue;
    color = Color(red, green, blue);
    return is;
}