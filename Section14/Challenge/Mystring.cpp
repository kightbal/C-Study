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

Mystring Mystring::operator-() {
    char *buff = new char[std::strlen(str) + 1];
    buff = strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(str); i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

bool Mystring::operator==(const Mystring &ref) {
    size_t size_ref = std::strlen(ref.str);
    size_t size_own = std::strlen(str);
    if (size_ref != size_own)
        return false;
    for (size_t i = 0; i < size_ref; i++) {
        if (ref.str[i] != str[i])
            return false;
    }
    return true;
}

bool Mystring::operator!=(const Mystring &ref) {
    size_t size_ref = std::strlen(ref.str);
    size_t size_own = std::strlen(str);
    if (size_ref != size_own)
        return true;
    for (size_t i = 0; i < size_ref; i++) {
        if (ref.str[i] != str[i])
            return true;
    }
    return false;
}

bool Mystring::operator<(const Mystring &ref) {
    return strcmp(str, ref.str) < 0 ? true : false;
}
bool Mystring::operator>(const Mystring &ref) {
    return strcmp(str, ref.str) > 0 ? true : false;
}

Mystring Mystring::operator+(const Mystring &ref) {
    char *buff = new char[std::strlen(ref.str) + std::strlen(str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, ref.str);
    Mystring temp = Mystring{buff};
    delete[] buff;
    return temp;
}

void Mystring::operator+=(const Mystring &ref) {
    *this = *this + ref;
    return;
}

Mystring Mystring::operator*(int count) {
    char *buff = new char[std::strlen(str) * count + 1];
    std::strcpy(buff, str);
    for (int i = 0; i < count - 1; i++) {
        std::strcat(buff, str);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}
void Mystring::operator*=(int count) {
    *this = *this * count;
    return;
}