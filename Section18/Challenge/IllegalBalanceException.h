#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

class IllegalBalanceException : public std::exception {
public:
    IllegalBalanceException() = default;
    ~IllegalBalanceException() = default;

    virtual const char *what() const noexcept override {
        return "account object is created with a negative balance ";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
