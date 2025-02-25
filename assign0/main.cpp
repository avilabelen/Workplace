#include <iostream>
#include <cmath>
#include <utility>

// Función para resolver la ecuación cuadrática
std::pair<bool, std::pair<double, double>> solveQuadratic(double a, double b, double c) {
    // Calcular el discriminante
    double discriminant = b * b - 4 * a * c;

    // Verificar si hay soluciones reales
    if (discriminant < 0) {
        return {false, {0, 0}}; // No hay soluciones reales
    }

    // Calcular las soluciones
    double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
    double root2 = (-b - std::sqrt(discriminant)) / (2 * a);

    return {true, {root1, root2}};
}

int main() {
    double a, b, c;
    
    // Pedir los coeficientes al usuario
    std::cout << "Ingrese los coeficientes a, b, c de la ecuaci\xA2n cuadr\xA1tica ax^2 + bx + c = 0:" << std::endl;
    std::cin >> a >> b >> c;

    // Verificar si a no es cero
    if (a == 0) {
        std::cout << "No es una ecuaci\xA2n cuadr\xA1tica (a no puede ser 0)." << std::endl;
        return 1;
    }

    // Resolver la ecuación
    auto result = solveQuadratic(a, b, c);

    // Mostrar resultados
    if (result.first) {
        std::cout << "Las soluciones son: " << result.second.first << " y " << result.second.second << std::endl;
    } else {
        std::cout << "No hay soluciones reales." << std::endl;
    }

    return 0;
}