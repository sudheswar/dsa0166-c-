#include <iostream>
#include <cstring> 
char* concat(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char* result = new char[len1 + len2 + 1]; 
    strcpy(result, str1);
    strcat(result, str2);
return result;
}
std::string concat(const std::string& s1, const std::string& s2) {
    return s1 + s2;
}

int main() {
    const char* char_array1 = "Hello, ";
    const char* char_array2 = "world!";
    char* result_char_array = concat(char_array1, char_array2);
    std::cout << "Concatenated C-style strings: " << result_char_array << std::endl;
    delete[] result_char_array;
    std::string cpp_string1 = "Hello, ";
    std::string cpp_string2 = "world!";
    std::string result_cpp_string = concat(cpp_string1, cpp_string2);
    std::cout << "Concatenated C++ strings: " << result_cpp_string << std::endl;
 return 0;
}
