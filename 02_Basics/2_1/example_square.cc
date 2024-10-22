#include <cmath>
#include <iostream>

// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.

int main()
{
    double_t side_length = 0;
    std::cout << "Input side length of a square: ";
    std::cin >> side_length;

    double_t perimeter = side_length * 4;
    double_t area = side_length * side_length;

    std::cout << "Perimeter: " << perimeter << " Area: " << area << std::endl;

    return 0;
}
