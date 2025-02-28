#include <iostream>
#include <cmath>
#include <utility>

// Cuadratic Formule
std::pair<bool, std::pair<double, double>> solveQuadratic(double a, double b, double c) {
    // Discriminant
    double discriminant = b * b - 4 * a * c;

    // Verify real solutions
    if (discriminant < 0) {
        return {false, {0, 0}}; 
    }

    // Calculate the solutions
    double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
    double root2 = (-b - std::sqrt(discriminant)) / (2 * a);

    return {true, {root1, root2}};
}

int main() {
    double a, b, c;
    
    
    std::cout << "Add the coefficients to the equation ax^2 + bx + c = 0:" << std::endl;
    std::cin >> a >> b >> c;

    
    if (a == 0) {
        std::cout << "Is not a quadratic equation" << std::endl;
        return 1;
    }

   
    auto result = solveQuadratic(a, b, c);

  
    if (result.first) {
        std::cout << "The solutions are: " << result.second.first << " y " << result.second.second << std::endl;
    } else {
        std::cout << "The are not real solutions" << std::endl;
    }

    return 0;
}