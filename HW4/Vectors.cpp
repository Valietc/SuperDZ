//
// Created by Daniil on 11.12.2022.
//

#include <iostream>
#include <cmath>
#include "Vectors.h"

Vectors::Vectors(): x(0.0), y (0.0) {};
Vectors::Vectors(double _x, double _y): x(_x), y (_y) {};

void Vectors::setX(double _x){
    x = _x;
}
void Vectors::setY(double _y){
    y = _y;
}

double Vectors::getX(){
    return x;
}
double Vectors::getY(){
    return y;
}

double Vectors::getLen(){
    return std::sqrt(x*x + y*y);
}

double Vectors::getPhi(){
    return atan2(y, x)*180 / M_PI;
}

double Vectors::kos_scal_proizv( Vectors& vector) const{
    double phi = acos( ( (Vectors(x,y).x * vector.x) + (Vectors(x,y).y * vector.y) ) /
                       (Vectors(x,y).getLen() * vector.getLen()) );
    return Vectors(x,y).getLen()*vector.getLen()*sin(phi);

}

std::pair<double, double> Vectors::psk()  {
    double ro =Vectors(x,y).getLen();
    double phi = Vectors(x,y).getPhi();

    return {ro, phi};
    }

Vectors Vectors::Norm() const{
    return Vectors(x/(Vectors(x,y).getLen()), y/(Vectors(x,y).getLen()));
}

Vectors Vectors::change_len(const double& a) const {
    return Vectors(Vectors(x,y).getX()*a/Vectors(x,y).getLen(),
                   Vectors(x,y).getY()*a/Vectors(x,y).getLen());
}

Vectors Vectors::change_phi(const double& phi) const {
    return Vectors(Vectors(x,y).getLen()*cos(phi*M_PI/180),
                   Vectors(x,y).getLen()*sin(phi*M_PI/180));
}

Vectors Vectors::operator+(const Vectors& vector) const{
    return Vectors(x + vector.x, y + vector.y);
}
Vectors Vectors::operator+=(const Vectors& vector) const{
    return operator+(vector);
}

Vectors Vectors::operator-(const Vectors& vector) const{
    return Vectors(x + vector.x, y + vector.y);
}
Vectors Vectors::operator-=(const Vectors& vector) const{
    return operator-(vector);
}

Vectors Vectors::operator*(const double& a) const{
    return Vectors(x * a, y * a);
}
Vectors Vectors::operator*=(const double& a) const{
    return Vectors(x,y)*(a);
}

Vectors Vectors::operator/(const double& a) const{
    return Vectors(x / a, y / a);
}
Vectors Vectors::operator/=(const double& a) const{
    return Vectors(x,y)/(a);
}

double Vectors::operator*(const Vectors& vector) const {
    return  Vectors(x,y).x * vector.x  + Vectors(x,y).y * vector.y;
}

double Vectors::cosine_distance(const Vectors& vector) const {
    return ( Vectors(x,y).x*(vector.x) + Vectors(x,y).y*(vector.y)   )/
           ( Vectors(x,y).getLen() * Vectors(vector.x,vector.y).getLen() );
}

bool Vectors::operator==(const Vectors& vector) const {
    return( (Vectors(x,y).x == vector.x) && (Vectors(x,y).y == vector.y));
}

bool Vectors::operator!=(const Vectors& vector) const {
    return !( (Vectors(x,y).x == vector.x) && (Vectors(x,y).y == vector.y));
}