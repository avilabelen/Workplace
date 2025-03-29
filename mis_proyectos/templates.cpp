#include <iostream>
#include <concepts>
#include <string>

using namespace std;
//Part 2
template <typename T>
concept Numeric = std::integral<T> || std::floating_point<T>;



//PART 1.1
template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}
//PART 1.2
template <typename T>
T maxValue(T a, T b, T c, T d) {
    return maxValue(a, maxValue(b, maxValue (c,d)));
}
//PART 2
template <Numeric T>
T add(T a, T b) {
    return a + b;
}
//PART 3 
template <typename T>
void printAll(T t) {
    std::cout << t << std::endl;
}
//PART 3.1
template <typename T, typename... Args>
void printAll(T t, Args... args) {
    std::cout << t << " ";
    printAll(args...);
}
//PART 3.2
template <typename T>
T sum(T t) {
    return t;
}
template <typename T, typename... Args>
T sum(T t, Args... args) {
    return t + sum(args...);
}
//Part 4
template <int N>
struct Factorial {
    static constexpr int value = N * Factorial<N - 1>::value;
};
template <>
struct Factorial<0> {
    static constexpr int value = 1;
};

//Part 4.2
template <int N>
struct Fibonacci {
    static constexpr int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};
template <>
struct Fibonacci<0> {
    static constexpr int value = 0;
};


template <>
struct Fibonacci<1> {
    static constexpr int value = 1;
};

int main() {
    //PART 1.1
    cout << "Int: " << maxValue(5, 10) << endl;          
    cout << "Double: " << maxValue(3.5, 2.1) << endl;      
    cout << "String:" << maxValue(string("Pera"), string("pero")) << endl;
    //Part 1.2
    cout << "Maxvalue int: "<< maxValue(1, 5, 3, 9) << endl;         
    cout << "Maxvalue float: "<< maxValue(2.1, 3.7, 1.9,30.5) << endl; 
    //Part 2
    cout <<"Addition int: " << add(5, 6) << endl;       // 5+6=11
    cout << "Addition float: " << add(2.1, 1.0) << endl;   // = 3.1
    //cout << add("a", "b")<< endl;   //does not  work 

    //PART 3.1
    printAll(5, 0.35, "Hello", 'z'); // 5 0.35 hello z
   
    //PART 3.2
    cout <<"Recursive sum int : " << sum(1, 1, 1, 1, 1) << endl;             // Should print 5
    cout << "Recursive sum float: "<<sum(1.0, 2.0, 3.55) << endl;             // Should print 6.55

    //part 4
    constexpr int factorialresult = Factorial<4>::value;
    std::cout <<"Factorial result:"<< factorialresult << std::endl;  // Should print 24

    //Part 5
    constexpr int fibonaciresult = Fibonacci<8>::value;
    std::cout <<"Fibonnaci result: "<< fibonaciresult << std::endl; // Should print 21
};

