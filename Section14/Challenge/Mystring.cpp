#include <iostream>
#include <cstring>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring() :
    str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) :
    str{nullptr} {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) :
    str{nullptr} {
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
    //       std::cout << "Copy constructor used" << std::endl;
}

// Move constructor
Mystring::Mystring(Mystring &&source) :
    str(source.str) {
    source.str = nullptr;
    //        std::cout << "Move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring() {
    delete[] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    //    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs)
        return *this;
    delete[] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
int Mystring::get_length() const {
    return strlen(str);
}
const char *Mystring::get_str() const {
    return str;
}

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete[] buff;
    return in;
}

/*

   使用成员函数重载操作符，包括-,==,!=,<,,+,+=,*,*=,++Mystring,Mystring++等操作符。
    Use member functions to overload operators, including -, ==, !=, <, +, +=, *, *=, ++Mystring, Mystring++.
*/

//重载操作符-,作用是将字符串小写
// Overload the operator- to convert the string to lowercase
// Mystring Mystring::operator-() {
//     char *buff = new char[std::strlen(str) + 1];
//     buff = strcpy(buff, str);
//     for (size_t i = 0; i < std::strlen(str); i++) {
//         buff[i] = std::tolower(buff[i]);
//     }
//     Mystring temp{buff};
//     delete[] buff;
//     return temp;
// }

//重载操作符==，作用是判断字符串是否完全相等
// Overload the operator== to check if the strings are equal
// bool Mystring::operator==(const Mystring &ref) {
//     size_t size_ref = std::strlen(ref.str);
//     size_t size_own = std::strlen(str);
//     if (size_ref != size_own)
//         return false;
//     for (size_t i = 0; i < size_ref; i++) {
//         if (ref.str[i] != str[i])
//             return false;
//     }
//     return true;
// }

//重载操作符!=,作用是判断字符串是否不完全相等
// Overload the operator!= to check if the strings are not equal
// bool Mystring::operator!=(const Mystring &ref) {
//     size_t size_ref = std::strlen(ref.str);
//     size_t size_own = std::strlen(str);
//     if (size_ref != size_own)
//         return true;
//     for (size_t i = 0; i < size_ref; i++) {
//         if (ref.str[i] != str[i])
//             return true;
//     }
//     return false;
// }

//重载操作符<,根据strcmp来比较字符串是否小于ref,小于则返回true
// Overload the operator< to compare if the string is less than ref using strcmp, return true if less
// bool Mystring::operator<(const Mystring &ref) {
//     return strcmp(str, ref.str) < 0 ? true : false;
// }

//重载操作符>,根据strcmp来比较字符串是否大于ref,大于则返回true
// Overload the operator> to compare if the string is greater than ref using strcmp, return true if greater
// bool Mystring::operator>(const Mystring &ref) {
//     return strcmp(str, ref.str) > 0 ? true : false;
// }

//重载操作符+,将两字符串相加
// Overload the operator+ to concatenate two strings
// Mystring Mystring::operator+(const Mystring &ref) {
//     char *buff = new char[std::strlen(ref.str) + std::strlen(str) + 1];
//     std::strcpy(buff, str);
//     std::strcat(buff, ref.str);
//     Mystring temp = Mystring{buff};
//     delete[] buff;
//     return temp;
// }

//重载操作符+=,将字符串相加并赋值给当前字符串
// Overload the operator+= to concatenate the string and assign it to the current string
// void Mystring::operator+=(const Mystring &ref) {
//     *this = *this + ref;
//     return;
// }

//重载操作符*,将字符串乘以一个数字
// Overload the operator* to multiply the string by a number
// Mystring Mystring::operator*(int count) {
//     char *buff = new char[std::strlen(str) * count + 1];
//     std::strcpy(buff, str);
//     for (int i = 0; i < count - 1; i++) {
//         std::strcat(buff, str);
//     }
//     Mystring temp{buff};
//     delete[] buff;
//     return temp;
// }

// void Mystring::operator*=(int count) {
//     *this = *this * count;
//     return;
// }

/*

   使用friend函数重载操作符，包括-,==,!=,<,,+,+=,*,*=,++Mystring,Mystring++等操作符。
    Use friend functions to overload operators, including -, ==, !=, <, +, +=, *, *=, ++Mystring, Mystring++.
*/
//重载操作符-,作用是将字符串小写
// Overload the operator- to convert the string to lowercase
Mystring operator-(const Mystring &ref) {
    char *buff = new char[std::strlen(ref.str) + 1];
    buff = strcpy(buff, ref.str);
    for (size_t i = 0; i < std::strlen(ref.str); i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

//重载操作符==，作用是判断字符串是否完全相等
// Overload the operator== to check if the strings are equal
bool operator==(const Mystring &lref, const Mystring &rref) {
    size_t size_lref = std::strlen(lref.str);
    size_t size_rref = std::strlen(rref.str);
    if (size_lref != size_rref)
        return false;
    for (size_t i = 0; i < size_lref; i++) {
        if (lref.str[i] != rref.str[i])
            return false;
    }
    return true;
}

//重载操作符!=,作用是判断字符串是否不完全相等
// Overload the operator!= to check if the strings are not equal
bool operator!=(const Mystring &lref, const Mystring &ref) {
    return !(lref == ref);
}

//重载操作符<,根据strcmp来比较字符串是否小于ref,小于则返回true
// Overload the operator< to compare if the string is less than ref using strcmp, return true if less
bool operator<(const Mystring &lref, const Mystring &ref) {
    return strcmp(lref.str, ref.str) < 0 ? true : false;
}

//重载操作符>,根据strcmp来比较字符串是否大于ref,大于则返回true
// Overload the operator> to compare if the string is greater than ref using strcmp, return true if greater
bool operator>(const Mystring &lref, const Mystring &ref) {
    return !(lref < ref);
}

//重载操作符+,将两字符串相加
// Overload the operator+ to concatenate two strings
Mystring operator+(const Mystring &lref, const Mystring &ref) {
    char *buff = new char[std::strlen(ref.str) + std::strlen(lref.str) + 1];
    std::strcpy(buff, lref.str);
    std::strcat(buff, ref.str);
    Mystring temp = Mystring{buff};
    delete[] buff;
    return temp;
}

//重载操作符+=,将字符串相加并赋值给当前字符串
// Overload the operator+= to concatenate the string and assign it to the current string
void operator+=(Mystring &lref, const Mystring &ref) {
    lref = lref + ref;
    return;
}

//重载操作符*,将字符串乘以一个数字
// Overload the operator* to multiply the string by a number
Mystring operator*(const Mystring &ref, int count) {
    char *buff = new char[std::strlen(ref.str) * count + 1];
    std::strcpy(buff, ref.str);
    for (int i = 0; i < count - 1; i++) {
        std::strcat(buff, ref.str);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

//重载操作符+=,将字符串乘以一个数字并赋值给当前字符串
void operator*=(Mystring &ref, int count) {
    ref = ref * count;
    return;
}

//重载操作符前++，将当前字符串大写，返回为大写前的字符串
Mystring &operator++(Mystring &ref) {
    // do what ever you want increment do to - maybe make all characters uppercase?
    char *buff = new char[std::strlen(ref.str) + 1];
    std::strcpy(buff, ref.str);
    for (size_t i = 0; i < std::strlen(ref.str); i++) {
        buff[i] = std::toupper(buff[i]);
    }
    ref = Mystring(buff);
    delete[] buff;
    return ref;
}

//重载操作符后++,将当前字符串大写并返回大写后的字符串
Mystring operator++(Mystring &ref, int) {
    Mystring temp(ref); // make a copy
    ++(ref);            // call pre-increment - make sure you call pre-increment!
    return temp;        // return the old value
}