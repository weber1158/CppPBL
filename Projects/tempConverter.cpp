// C++ PROJECT-BASED LEARNING

// Exercise:
//   Create a temperature conversion tool.

#include <cstdio>

enum class TempScale {
    Celsius,
    Fahrenheit,
    Kelvin
};

struct Temperature {
    double temp;
    TempScale scale;
};

struct TemperatureConversion {
    // Initialize inputs
    Temperature T;
    TempScale S;

    // Constructors
    TemperatureConversion(Temperature t, TempScale s) {
        T = t;
        S = s;
    }

    // Method
    double convert(const Temperature& t, TempScale target) {
    double kelvin;

    switch (t.scale) {
        case TempScale::Celsius:    kelvin = t.temp + 273.15; break;
        case TempScale::Fahrenheit: kelvin = (t.temp - 32.0) / 1.8 + 273.15; break;
        case TempScale::Kelvin:     kelvin = t.temp; break;
    }

    switch (target) {
        case TempScale::Celsius:    return kelvin - 273.15;
        case TempScale::Fahrenheit: return (kelvin - 273.15) * 1.8 + 32.0;
        case TempScale::Kelvin:      return kelvin;
    }

    return 0.0; // unreachable
}

};

int main() {

    /*
     *  This example demonstrates the use of the TemperatureConversion class
     *  to convert the boiling point of water (100 degrees Celsius) into degrees
     *  Fahrenheit or Kelvin, or other combinations.
    */

    // Initialize a Temperature class
    Temperature boiling_point_C{100, TempScale::Celsius};
    Temperature boiling_point_F{212, TempScale::Fahrenheit};
    Temperature boiling_point_K{373.15, TempScale::Kelvin};

    // Initialize a TempScale class
    TempScale new_scale{TempScale::Fahrenheit}; // Change to Celsius, Fahrenheit, or Kelvin

    // Initialize a TemperatureConversion class
    TemperatureConversion c2new(boiling_point_C, new_scale); // Celsius to new_scale
    TemperatureConversion f2new(boiling_point_F, new_scale); // Fahrenheit to new_scale
    TemperatureConversion k2new(boiling_point_K, new_scale); // Kelvin to new_scale


    printf("The boiling point of water (100C) in the new scale is: %0.2f\n", c2new.convert(boiling_point_C, new_scale));

    printf("The boiling point of water (212F) in the new scale is: %0.2f\n", f2new.convert(boiling_point_F, new_scale));

    printf("The boiling point of water (373.15K) in the new scale is: %0.2f\n", k2new.convert(boiling_point_K, new_scale));

    return 0;
}