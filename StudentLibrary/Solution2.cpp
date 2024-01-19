#include "Solution2.h"

#include <ostream>
#include <fstream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& _accountName) {
    // Build the file path
    std::string filePath = "BankAccount/" + _accountName + ".txt";

    // Open the file
    std::ifstream inputFile(filePath);
    if (!inputFile.is_open()) {
        throw std::runtime_error("Unable to open file: " + filePath);
    }

    // Read transactions and compute balance using std::accumulate
    float balance = 0.0f;
    std::string operation;
    float amount;

    while (inputFile >> operation >> amount) {
        if (operation == "DEPOSIT") {
            balance += amount; // Deposit
        }
        else if (operation == "WITHDRAW") {
            balance -= amount; // Withdrawal
        }
        else {
            throw std::invalid_argument("Invalid operation in file: " + filePath);
        }
    }

    // Close the file
    inputFile.close();
    return balance;

}
#endif
