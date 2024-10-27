#ifndef WEKTOR2D_HPP
#define WEKTOR2D_HPP

class Wektor2D
{
private:
    double x;
    double y;

public:
    // Konstruktor domy�lny ustawiaj�cy wsp�rz�dne na 0
    Wektor2D() : x(0), y(0) {}

    // Konstruktor przyjmuj�cy warto�ci wsp�rz�dnych
    Wektor2D(double x_val, double y_val) : x(x_val), y(y_val) {}

    // Settery
    void setX(double x_val) { x = x_val; }
    void setY(double y_val) { y = y_val; }

    // Gettery
    double getX() const { return x; }
    double getY() const { return y; }

    // Przeci��enie operatora dodawania (+) dla wektor�w
    Wektor2D operator+(const Wektor2D& other) const { return Wektor2D(x + other.x, y + other.y); }

    // Przeci��enie operatora mno�enia (*) dla iloczynu skalarnego
    double operator*(const Wektor2D& other) const { return x * other.x + y * other.y; }
};

#endif
