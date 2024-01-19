#include "Solution1.h"

// N'oubliez pas d'activer l'exercice dans le fichier StudentConfiguration.h !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to) {
    if (_from == _to) {
        return _value; // No conversion needed for the same units
    }

    switch (_from) {
    case TemperatureUnits::CELSIUS:
        if (_to == TemperatureUnits::FAHRENHEIT) {
            return 9.0 / 5.0 * _value + 32.0;
        }
        else if (_to == TemperatureUnits::KELVIN) {
            return _value + 273.15;
        }
        break;

    case TemperatureUnits::FAHRENHEIT:
        if (_to == TemperatureUnits::CELSIUS) {
            return 5.0 / 9.0 * (_value - 32.0);
        }
        else if (_to == TemperatureUnits::KELVIN) {
            return 5.0 / 9.0 * (_value - 32.0) + 273.15;
        }
        break;

    case TemperatureUnits::KELVIN:
        if (_to == TemperatureUnits::CELSIUS) {
            return _value - 273.15;
        }
        else if (_to == TemperatureUnits::FAHRENHEIT) {
            return 9.0 / 5.0 * (_value - 273.15) + 32.0;
        }
        break;
    }
}
#endif
