#include "Solution1.h"
#include <iomanip>
// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
    if (_from == TemperatureUnits::KELVIN || _to == TemperatureUnits::CELSIUS)
    {
        return std::round((_value - 273) * 100) / 100; 
    }
    if (_from == TemperatureUnits::KELVIN || _to == TemperatureUnits::FAHRENHEIT)
    {
        return std::round((9 / 5 * (_value - 273) + 32) * 100) / 100;
    }
    if (_from == TemperatureUnits::FAHRENHEIT || _to == TemperatureUnits::KELVIN)
    {
        return std::round((5 / 9 * (_value - 32) + 273) * 100) / 100;
    }
    if (_from == TemperatureUnits::FAHRENHEIT || _to == TemperatureUnits::CELSIUS)
    {
        return std::round((5 / 9 * (_value - 32)) * 100) / 100;
    }
    if (_from == TemperatureUnits::CELSIUS || _to == TemperatureUnits::KELVIN)
    {
        return std::round((_value + 273) * 100) / 100;
    }
    if (_from == TemperatureUnits::CELSIUS || _to == TemperatureUnits::FAHRENHEIT)
    {
        return std::round((9 / 5 * (_value)+32) * 100) / 100;
    }
    if (_from == _to)
    {
        return std::round(_value * 100) / 100;
    }

}

#endif
