#include <iostream>
#include <iomanip>

// Convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return celsius * 9.0f / 5.0f + 32.0f;
}

// Convert Celsius to Kelvin
float celsiusToKelvin(float celsius) {
    return celsius + 273.15f;
}

int main() {
    float celsius;
    
    std::cout << "Enter temperature in Celsius: ºC ";
    std::cin >> celsius;
    
    // Convert using functions
    float fahrenheit = celsiusToFahrenheit(celsius);
    float kelvin = celsiusToKelvin(celsius);
    
    // Display results with 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n[Conversion Results]:" << std::endl;
    std::cout << celsius << "°C = " << fahrenheit << "°F" << std::endl;
    std::cout << celsius << "°C = " << kelvin << "K" << std::endl;
    
    // Show the specific examples mentioned
    std::cout << "\n===[ Conversions ]:" << std::endl;
    std::cout << "0°C = " << celsiusToFahrenheit(0) << "°F" << std::endl;
    std::cout << "100°C = " << celsiusToFahrenheit(100) << "°F" << std::endl;
    std::cout << "-40°C = " << celsiusToFahrenheit(-40) << "°F" << std::endl;
    std::cout << "0°C = " << celsiusToKelvin(0) << "K" << std::endl;
    
    return 0;
}