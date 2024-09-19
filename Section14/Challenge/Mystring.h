#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <cctype>
#include <cstring>
class Mystring {
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                       // No-args constructor
    Mystring(const char *s);          // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&source);      // Move constructor
    ~Mystring();                      // Destructor

    Mystring &operator=(const Mystring &rhs); // Copy assignment
    Mystring &operator=(Mystring &&rhs);      // Move assignment

    void display() const;

    int get_length() const; // getters
    const char *get_str() const;

    // Mystring operator-();
    // bool operator==(const Mystring &ref);
    // bool operator!=(const Mystring &ref);
    // bool operator<(const Mystring &ref);
    // bool operator>(const Mystring &ref);
    // Mystring operator+(const Mystring &ref);
    // void operator+=(const Mystring &ref);
    // Mystring operator*(int count);
    // void operator*=(int count);
    // Mystring &operator++() { // pre-increment
    //     // do what ever you want increment do to - maybe make all characters uppercase?
    //     char *buff = new char[std::strlen(str) + 1];
    //     std::strcpy(buff, str);
    //     for (size_t i = 0; i < std::strlen(str); i++) {
    //         buff[i] = std::toupper(buff[i]);
    //     }
    //     *this = Mystring(buff);
    //     delete[] buff;
    //     return *this;
    // }
    // Mystring operator++(int) { // post-increment
    //     Mystring temp(*this);  // make a copy
    //     ++(*this);             // call pre-increment - make sure you call pre-increment!
    //     return temp;           // return the old value
    // }
    friend Mystring operator-(const Mystring &ref);
    friend bool operator==(const Mystring &lref, const Mystring &ref);
    friend bool operator!=(const Mystring &lref, const Mystring &ref);
    friend bool operator<(const Mystring &lref, const Mystring &ref);
    friend bool operator>(const Mystring &lref, const Mystring &ref);
    friend Mystring operator+(const Mystring &lref, const Mystring &ref);
    friend Mystring &operator+=(Mystring &lref, const Mystring &ref);
    friend Mystring operator*(const Mystring &ref, int count);
    friend Mystring &operator*=(Mystring &ref, int count);
    friend Mystring &operator++(Mystring &ref);
    friend Mystring operator++(Mystring &ref, int);
};

#endif // _MYSTRING_H_