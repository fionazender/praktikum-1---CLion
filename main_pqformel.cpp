#include <iostream>
#include <string>
#include <format>
#include <cmath>
using namespace std;


int main() {

    // pq formel == x2+px+q=0
    // Eingangsvariablen
    double p;
    double q;
    // Ergebnisvariablen
    double x1 = 0;
    double x2 = 0;
    /*
     *  Platz fuer ihre Berechnungen
     */
    cout << "Give p a value in the formula: x2+px+q=0"<< endl; // Type a number and press enter
    cin >> p; // Get user input from the keyboard
    cout << "Give q a value in the formula: x2+px+q=0 "<< endl; // Type a number and press enter
    cin >> q; // Get user input from the keyboard

    // calculate the quadratic equation
    x1 = -p/2 + sqrt(pow(p/2, 2) - q);
    x2 = -p/2 - sqrt(pow(p/2, 2) - q);

    cout << "Ergebnis: x1 = " << x1 << ", x2 = " << x2 << endl; // Ausgabe der Ergebnisse
    return 0;

}