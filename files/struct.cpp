#include <iostream>

//wir erstellen ein Struct mit dem Namen Vektor
struct Vektor{
    //Die Attribute von Vektor:
    double x;
    double y;
    double z;
};

int main(){
    //Ein Vektor wird erstellt indem als Datentyp "Vektor"
    // angibt (den Namen des Structs)
    Vektor vektor;
    vektor.x = 5.0; // so koennen die Attribute
    vektor.y = 3.0; // neu zugewiesen werden
    vektor.z = 2.0;
    // und so koennen Attribute auch ausgelesen werden
    std::cout << "x: " << vec.x << ", y: "
        << vec.y << ", z: " << vec.z << std::endl;
    return 0;
}