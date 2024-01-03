#include <iostream>
#include <string>

class BankAccount {
public:
    BankAccount(const std::string& accountHolder, double initialBalance) : accountHolder(accountHolder), balance(initialBalance) {
        std::cout << "Constructor called for the account of " << accountHolder << std::endl;
    }


    ~BankAccount() {
        std::cout << "Destructor called for the account of " << accountHolder << std::endl;
    }


    void displayInfo() {
        std::cout << "Account Holder: " << accountHolder << ", Balance: $" << balance << std::endl;
    }

private:
    std::string accountHolder;
    double balance;
};

int main() {
    
    BankAccount myAccount("John Doe", 1000.0);

    myAccount.displayInfo();

    return 0;
}

