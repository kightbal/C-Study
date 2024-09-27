#ifndef INSUFFICIENT_FUNDS_EXCEPTION_H
#define INSUFFICIENT_FUNDS_EXCEPTION_H

#include <exception>

class InsufficientFundsException : public std::exception {
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() noexcept = default;
    virtual const char *what() const noexcept override {
        return "a withdraw results in a negative balance";
    }
};

#endif // INSUFFICIENT_FUNDS_EXCEPTION_H