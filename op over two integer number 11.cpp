#include <iostream>
int max(int a, int b) {
return (a > b) ? a : b;
}
double max(double a, double b) {
return (a > b) ? a : b;
}
char max(char a, char b) {
return (a > b) ? a : b;
}
int main() {
int int1 = 10, int2 = 5;
int max_int = max(int1, int2);
std::cout << "Max of " << int1 << " and " << int2 << " is: " << max_int << std::endl;
double float1 = 3.5, float2 = 4.7;
double max_float = max(float1, float2);
std::cout << "Max of " << float1 << " and " << float2 << " is: " << max_float << std::endl;
char char1 = 'a', char2 = 'b';
char max_char = max(char1, char2);
std::cout << "Max of " << char1 << " and " << char2 << " is: " << max_char << std::endl;
return 0;
}
