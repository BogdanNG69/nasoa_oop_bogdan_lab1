#pragma once
#include <iostream>

class BankAccount {
private:
    double balance;

public:
    // Конструктор - встановлює початковий баланс
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Поповнює рахунок на задану суму
    void deposit(double amount) {
        balance += amount;
    }

    // Повертає залишок на рахунку
    double getBalance() {
        return balance;
    }
};

void task2() {
    std::cout << "=== Task 2: BankAccount ===" << std::endl;
    BankAccount account(1000.0);
    std::cout << "Initial balance: " << account.getBalance() << std::endl;

    account.deposit(500.0);
    std::cout << "After deposit of 500: " << account.getBalance() << std::endl;
    std::cout << std::endl;
}