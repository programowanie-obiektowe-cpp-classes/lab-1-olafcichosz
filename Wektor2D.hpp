#ifndef WEKTOR2D_HPP
#define WEKTOR2D_HPP

class Wektor2D
{
private:
    double x;
    double y;

public:
    // Konstruktor domyœlny ustawiaj¹cy wspó³rzêdne na 0
    Wektor2D() : x(0), y(0) {}

    // Konstruktor przyjmuj¹cy wartoœci wspó³rzêdnych
    Wektor2D(double x_val, double y_val) : x(x_val), y(y_val) {}

    // Settery
    void setX(double x_val) { x = x_val; }
    void setY(double y_val) { y = y_val; }

    // Gettery
    double getX() const { return x; }
    double getY() const { return y; }

    // Przeci¹¿enie operatora dodawania (+) dla wektorów
    Wektor2D operator+(const Wektor2D& other) const { return Wektor2D(x + other.x, y + other.y); }

    // Przeci¹¿enie operatora mno¿enia (*) dla iloczynu skalarnego
    double operator*(const Wektor2D& other) const { return x * other.x + y * other.y; }
};

#endif
