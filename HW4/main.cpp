#include <iostream>
#include "Vectors.h"


int main (){

    Vectors a(10.0, 4.0);
    std::cout << "{a}: " << std::endl;
    std::cout << "x = " << a.getX() << ' ' << "y = " << a.getY() << std::endl;
    std::cout << "len = " << a.getLen() << ' ' << "phi = " << a.getPhi() << std::endl;
    std::cout<<" " << std::endl;

    Vectors b(3.0, 4.0);
    std::cout << "{b}: " << std::endl;
    std::cout << "x = " << b.getX() << ' ' << "y = " << b.getY() << std::endl;
    std::cout << "len = " << b.getLen() << ' ' << "phi = " << b.getPhi() << std::endl;
    std::cout<<" " << std::endl;


    std::cout << " a + b : " << std::endl;
    std::cout << "x = " << (a+b).getX() << ' ' << "y = " << (a+b).getY() << std::endl;
    std::cout << "len = " << (a+b).getLen() << ' ' << "phi = " << (a+b).getPhi() << std::endl;
    std::cout<<" " << std::endl;

    std::cout <<  " a * b = " << a*b << std::endl;
    std::cout<<" " << std::endl;


    std::cout << "vector a_in_psk: " << std::endl;
    std::cout << "r = " << a.psk().first << ' ' << "phi = " << a.psk().second << std::endl;
    std::cout<<" " << std::endl;


    std::cout << " a * 5 = " << std::endl;
    std::cout << "x = " << (a*5).x << ' ' << "y = " << (a*5).y << std::endl;
    std::cout << "len = " << (a*5).getLen() << ' ' << "phi = " << (a*5).getPhi() << std::endl;
    std::cout<<" " << std::endl;


    std::cout << " a / 5 : " << std::endl;
    std::cout << "x = " << (a/5).getX() << ' ' << "y = " << (a/5).getY() << std::endl;
    std::cout << "len = " << (a/5).getLen() << ' ' << "phi = " << (a/5).getPhi() << std::endl;
    std::cout<<" " << std::endl;

    std::cout << "kosoe scalyarnoe a and b = " << a.kos_scal_proizv(b) << std::endl;
    std::cout<<" " << std::endl;

    std::cout << "ed. vector a : " << "x " << a.Norm().x << ' ' << "y "<< a.Norm().y << std::endl;
    std::cout<<" " << std::endl;

    std::cout << "a = b ? - " << (a==b) << std::endl;
    std::cout << "a != b ? - " << (a!=b) << std::endl;
    std::cout << "a = a ? - " << (a==a) << std::endl;
    std::cout<<" " << std::endl;

    std::cout << "cosine_rasstoyanie mezhdu a and b = " << a.cosine_distance(b) << std::endl;
    std::cout<<" " << std::endl;

    std::cout << " izmenit' len a to 25' = " << std::endl;
    std::cout << "x = " << (a.change_len(25)).x << ' ' << "y = " << (a.change_len(25)).y << std::endl;
    std::cout << "len = " << (a.change_len(25)).getLen() << ' ' << "phi = " << (a.change_len(25)).getPhi() << std::endl;
    std::cout<<" " << std::endl;

    std::cout << " izmenit' phi a to 30' = " << std::endl;
    std::cout << "x = " << (a.change_phi(30)).x << ' ' << "y = " << (a.change_phi(30)).y << std::endl;
    std::cout << "len = " << (a.change_phi(30)).getLen() << ' ' << "phi = " << (a.change_phi(30)).getPhi() << std::endl;
    std::cout<<" " << std::endl;

    return 0;
}