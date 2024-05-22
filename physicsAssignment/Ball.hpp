#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
  private:
    Velocity myVelocity;
    Point myCenter;
    double myRadius;
    Color myColor;
    bool collidable;
  public:
      inline Ball(double radius) {
        this->myRadius = radius;
    };
    void setVelocity(const Velocity& velocity);
    void setVelocity(double x, double y);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    void setCenter(double x, double y);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    void setColor(double red, double green, double blue);
    void setColor(Color color);
    bool isCollidable() const;
    void setCollidable(bool collidable);
};
