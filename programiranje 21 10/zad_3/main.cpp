
#include <iostream>
#include <cmath>
using namespace std;

double kvadrat(double broj) {
    return broj * broj;
}

double udaljenost(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;

    return sqrt(kvadrat(dx) + kvadrat(dy));
}

void ispisiUdaljenost(double rezultat) {
    cout << "Udaljenost izmedu tocaka: "
         << rezultat << endl;
}

int main() {
    double x1, y1, x2, y2;

    cout << "Unesi koordinate prve tocke: ";
    cin >> x1 >> y1;

    cout << "Unesi koordinate druge tocke: ";
    cin >> x2 >> y2;

    ispisiUdaljenost(udaljenost(x1, y1, x2, y2));

    return 0;
}

