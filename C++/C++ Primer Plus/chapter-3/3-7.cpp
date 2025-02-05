#include <iostream>
using namespace std;

int main()
{
    const double MILE_PER_KM = 0.6214;     //1公里是0.6214英里;
    const double LITER_PER_GALLON = 3.875; //1加仑是3.875升;
    double kilometer, liter;

    cout << "Please enter your driving distance(km): ";
    cin >> kilometer;
    cout << "Please enter your gas consumption(liter): ";
    cin >> liter;

    cout << "You consume " << liter / kilometer * 100;
    cout << " liter gas for driving per 100 km (European style)." << endl;
    cout << "You drive " << kilometer * MILE_PER_KM / liter * LITER_PER_GALLON;
    cout << " miles for per gallon (American style)." << endl;

    return 0;
}
