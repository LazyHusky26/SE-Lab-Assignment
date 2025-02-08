#include <iostream>
#include <stdexcept>  // Include the <stdexcept> header to use runtime_error
#include <vector>

/**
 * @file
 * @brief Calculator class header
 * @author John Doe <jdoe@example.com>
 * @version 1.0
 * @copyright CC BY-SA or GFDL
 * @sa <a href="https://en.wikipedia.org/wiki/Wikipedia:Copyrights">Wikipedia:Copyrights - Wikipedia</a>
 */

/**
 * Represents a simple calculator with basic arithmetic operations
 * @author John Doe
 */
class Calculator {
public:
    /**
     * @brief Construct a new Calculator object
     * 
     * This constructor initializes a Calculator object without any operands.
     */
    Calculator() = default;

    /**
     * @brief Adds two numbers.
     * 
     * This function adds two integers and returns their sum.
     * 
     * @param a The first number to add.
     * @param b The second number to add.
     * @return The sum of a and b.
     */
    int add(int a, int b) {
        return a + b;
    }

    /**
     * @brief Subtracts the second number from the first.
     * 
     * This function subtracts the second integer from the first and returns the result.
     * 
     * @param a The number to subtract from.
     * @param b The number to subtract.
     * @return The result of a - b.
     */
    int subtract(int a, int b) {
        return a - b;
    }

    /**
     * @brief Multiplies two numbers.
     * 
     * This function multiplies two integers and returns their product.
     * 
     * @param a The first number to multiply.
     * @param b The second number to multiply.
     * @return The product of a and b.
     */
    int multiply(int a, int b) {
        return a * b;
    }

    /**
     * @brief Divides the first number by the second.
     * 
     * This function divides the first integer by the second and returns the result.
     * If the second number is zero, it throws an exception.
     * 
     * @param a The numerator.
     * @param b The denominator.
     * @return The result of a / b.
     * @throws std::runtime_error If b is zero.
     */
    double divide(int a, int b) {
        if (b == 0) {
            throw std::runtime_error("Division by zero is not allowed!");
        }
        return static_cast<double>(a) / b;
    }

private:
    long m_result; ///< Holds the result of the most recent operation.
};

int main() {
    Calculator calc;
    
    int num1 = 10;
    int num2 = 0; // This will trigger the exception for division by zero.

    // Demonstrate division with error handling
    try {
        std::cout << "Division: " << calc.divide(num1, num2) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl; // Catch and display the error
    }

    return 0;
}
