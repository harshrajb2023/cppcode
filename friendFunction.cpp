📌 Problem Statement
Design a Banking Management System in C++ that ensures data security by keeping account details private.
The system should:
Store account holder name and balance as private data.
Allow an external auditor to view private account details.
Allow secure money transfer between two accounts.
Use friend functions to access private data without breaking encapsulation.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string holderName;
    double balance;

public:
    BankAccount(string name, double bal) {
        holderName = name;
        balance = bal;
    }

    // Friend function declarations
    friend void auditAccount(const BankAccount& acc);
    friend void transferFunds(BankAccount& sender, BankAccount& receiver, double amount);
};

// Friend function to audit account
void auditAccount(const BankAccount& acc) {
    cout << "🔍 Account Audit Report\n";
    cout << "Holder Name : " << acc.holderName << endl;
    cout << "Balance     : ₹" << acc.balance << endl;
    cout << "-----------------------------\n";
}

// Friend function to transfer money
void transferFunds(BankAccount& sender, BankAccount& receiver, double amount) {
    cout << "💰 Initiating Transfer...\n";
    if (sender.balance >= amount) {
        sender.balance -= amount;
        receiver.balance += amount;
        cout << "✅ Transfer Successful: ₹" << amount << endl;
    } else {
        cout << "❌ Transfer Failed: Insufficient Balance\n";
    }
    cout << "-----------------------------\n";
}

int main() {
    BankAccount acc1("Harsh", 8000);
    BankAccount acc2("Amit", 4000);

    auditAccount(acc1);
    auditAccount(acc2);

    transferFunds(acc1, acc2, 3000);

    auditAccount(acc1);
    auditAccount(acc2);

    return 0;
}



🔍 Account Audit Report
Holder Name : Harsh
Balance     : ₹8000
-----------------------------
🔍 Account Audit Report
Holder Name : Amit
Balance     : ₹4000
-----------------------------
💰 Initiating Transfer...
✅ Transfer Successful: ₹3000
-----------------------------
🔍 Account Audit Report
Holder Name : Harsh
Balance     : ₹5000
-----------------------------
🔍 Account Audit Report
Holder Name : Amit
Balance     : ₹7000
-----------------------------
