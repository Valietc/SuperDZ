#ifndef VECTORS_H
#define VECTORS_H


class Vectors {
public:
    double x, y;

    Vectors();
    Vectors(double _x, double _y);

    double getLen();

    void setX(double _x);
    double getX();
    void setY(double _y);
    double getY();

    double getPhi();
    double kos_scal_proizv( Vectors& vector) const;

    std::pair<double, double> psk();

    Vectors Norm() const;
    Vectors change_len(const double& a) const;
    Vectors operator+(const Vectors& vector) const;
    Vectors operator+=(const Vectors& vector) const;
    Vectors operator-(const Vectors& vector) const;
    Vectors operator-=(const Vectors& vector) const;
    Vectors operator*(const double & a) const;
    double operator*(const Vectors& vector) const;
    Vectors operator*=(const double & a) const;
    Vectors operator/(const double & a) const;
    Vectors operator/=(const double & a) const;
    bool operator==(const Vectors& vector) const;
    bool operator!=(const Vectors& vector) const;
    Vectors change_phi(const double& phi) const;
    double cosine_distance(const Vectors& vector) const;
};



#endif //VECTORS_H