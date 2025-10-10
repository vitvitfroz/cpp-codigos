#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    double base, altura;
    
    cout << "Base do retangulo: "<<endl ;
    cin >> base;
    cout << "Altura do retangulo: "<< endl;
    cin >> altura;
    
    double area = base * altura;
    double perimetro = 2 * (base + altura);
    double diagonal = sqrt(base * base + altura * altura);
    
    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;
    
    return 0;
}