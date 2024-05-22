#include "Ball.hpp"
#include <cmath>

/**
 * Задает скорость объекта
 * @param velocity новое значение скорости
 */
void Ball::setVelocity(const Velocity& velocity) {
    // TODO: место для доработки
    this->myVelocity = velocity;
}

void Ball::setVelocity(double x, double y) {
    // TODO: место для доработки
    this->myVelocity = Velocity(Point(x, y));
}

/**
 * @return скорость объекта
 */
Velocity Ball::getVelocity() const {
    // TODO: место для доработки
    return this->myVelocity;
}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const {
    // TODO: место для доработки
    painter.draw(this->myCenter, this->myRadius, this->myColor);
}

/**
 * Задает координаты центра объекта
 * @param center новый центр объекта
 */
void Ball::setCenter(const Point& center) {
    // TODO: место для доработки
    this->myCenter = center;
}

void Ball::setCenter(double x, double y) {
    // TODO: место для доработки
    this->myCenter = Point(x, y);
}

/**
 * @return центр объекта
 */
Point Ball::getCenter() const {
    // TODO: место для доработки
    return this->myCenter;
}

/**
 * @brief Возвращает радиус объекта
 * @details обратите внимание, что метод setRadius()
 * не требуется
 */
double Ball::getRadius() const {
    // TODO: место для доработки
    return this->myRadius;
}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    // TODO: место для доработки
    return (3.14159265358979323846 * std::pow(this->myRadius, 3) * (4 / 3));
}

void Ball::setColor(double red, double green, double blue) {
    this->myColor = Color{red, green, blue};
}

void Ball::setColor(Color color) {
    this->myColor = color;
}

bool Ball::isCollidable() const {
    return this->collidable;
}

void Ball::setCollidable(bool collidable) {
    this->collidable = collidable;
}
