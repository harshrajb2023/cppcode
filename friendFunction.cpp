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


# OUTPUT
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




































    ➕ Advanced Operator Overloading Using Friend Function (C++)
📌 Problem Statement
Create a Student Result Management System in C++ where:
Student marks are stored as private data.
The ‘+’ operator is overloaded to combine marks of two students.
The ‘<<’ operator is overloaded to display private data.
Both operators must be implemented using friend functions.


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Friend operator overloading
    friend Student operator+(const Student& s1, const Student& s2);
    friend ostream& operator<<(ostream& out, const Student& s);
};

// Overload + operator (combine marks)
Student operator+(const Student& s1, const Student& s2) {
    return Student(s1.name + " & " + s2.name, s1.marks + s2.marks);
}

// Overload << operator (display private data)
ostream& operator<<(ostream& out, const Student& s) {
    out << "Student Name : " << s.name << endl;
    out << "Total Marks  : " << s.marks << endl;
    return out;
}

int main() {
    Student s1("Harsh", 85);
    Student s2("Amit", 90);

    Student combined = s1 + s2;

    cout << "📘 Student 1 Details\n" << s1 << endl;
    cout << "📘 Student 2 Details\n" << s2 << endl;
    cout << "📊 Combined Result\n" << combined;

    return 0;
}

# OUTPUT
📘 Student 1 Details
Student Name : Harsh
Total Marks  : 85

📘 Student 2 Details
Student Name : Amit
Total Marks  : 90

📊 Combined Result
Student Name : Harsh & Amit
Total Marks  : 175
