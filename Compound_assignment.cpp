#include <iostream>

using namespace std;

int main()
{
    // Using compound assessment
    // Building construction
    int floor = 0;
    cout << "Building construction" << endl;

    floor += 4;
    cout << "First day build 4 floors" << endl;
    cout << floor << " floors has been constructed" << endl;

    floor += 3;
    cout << "Second day build 3 floors" << endl;
    cout << floor << " floors has been constructed" << endl;

    floor += 3;
    cout << "Third day build 3 floors" << endl;
    cout << floor << " floors has been constructed" << endl;

    // No using compound assessment
    // Fuel using of vehicle
    float current_fuel = 100;
    cout << "\nVehicle has 100% of fuel" << endl;

    current_fuel = current_fuel - 17.2; // current_fuel -= 17.2;
    cout << "Fuel left " << current_fuel << "%" << endl;

    current_fuel = current_fuel - 20; // current_fuel -= 20;
    cout << "Fuel left " << current_fuel << "%" << endl;

    current_fuel = current_fuel + 35; // current_fuel += 35;
    cout << "Fuel left " << current_fuel << "%" << endl;

    current_fuel = current_fuel - 46.1; // current_fuel -= 46.1;
    cout << "Fuel left " << current_fuel << "%" << endl;

    return 0;
}
