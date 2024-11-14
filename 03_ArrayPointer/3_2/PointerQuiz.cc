#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_d = &a; //p_d zeigt auf a
    int *p_e = &b; //p_e zeigt auf b
    int *p_f = &c; //p_f zeigt auf c

    *p_d = (2 * (*p_e)) + (3 * (*p_f)); // 2 * b + 3 * c = 13 => a = 13
    p_d = &b; //p_d zeigt auf b
    p_f = &a; //p_f zeigt auf a

    *p_e = *p_d + *p_f; //b = b + a = 2 + 13 = 15

    std::cout << a << '\n';  // a=13
    std::cout << *p_d << '\n'; // b = 15
    std::cout << *p_e << '\n'; // b = 15
    std::cout << *p_f << '\n'; // a = 13

    return 0;






}
