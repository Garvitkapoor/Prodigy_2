#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

int main() {
    cout << "Temperature Conversion Program" << endl;

    double temperature;
    char unit;

    cout << "Enter the temperature value: ";
    cin >> temperature;

    cout << "Enter the original unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    if (unit == 'C' || unit == 'c') {
        double fahrenheit = celsiusToFahrenheit(temperature);
        double kelvin = celsiusToKelvin(temperature);
        cout << temperature << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit and " << kelvin << " Kelvin." << endl;
    } else if (unit == 'F' || unit == 'f') {
        double celsius = fahrenheitToCelsius(temperature);
        double kelvin = fahrenheitToKelvin(temperature);
        cout << temperature << " degrees Fahrenheit is " << celsius << " degrees Celsius and " << kelvin << " Kelvin." << endl;
    } else if (unit == 'K' || unit == 'k') {
        double celsius = kelvinToCelsius(temperature);
        double fahrenheit = kelvinToFahrenheit(temperature);
        cout << temperature << " Kelvin is " << celsius << " degrees Celsius and " << fahrenheit << " degrees Fahrenheit." << endl;
    } else {
        cout << "Invalid unit. Please enter C, F, or K." << endl;
    }

    return 0;
}
