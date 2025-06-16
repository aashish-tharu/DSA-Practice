#include <iostream>
#include <iomanip>

void checkBalance(double balance);
double cashDeposit();
double cashWithdraw(double balance);

int main() {
    double balance = 0.0;
    int choice = 0;

    do {
        std::cout << "\n\n\n\n";
        std::cout << "Enter 1 to check balance:\n";
        std::cout << "Enter 2 for cash deposit:\n";
        std::cout << "Enter 3 for cash withdraw:\n";
        std::cout << "Enter 4 to exit:\n";
        std::cin >> choice;

        // std::cin.clear();
        // fflush(stdin);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance+=cashDeposit();
                checkBalance(balance);
                break;

            case 3:
                balance-=cashWithdraw(balance);
                checkBalance(balance);
                break;

            case 4:
                std::cout << "Thank you for using.\n";
                break;

            default:
                std::cout << "Enter Valid digit:\n";
        }
    } while (choice != 4);
}

void checkBalance(double balance) {
    std::cout << "Balance available in your account: ";
    std::cout << balance << std::setprecision(2) << std::fixed << std::endl;
}

double cashDeposit() {
    double cash = 0;
    std::cout << "Enter cash amount: ";
    std::cin >> cash;

    if (cash < 0) {
        std::cout << "Cash cann't be in negative digits:\n";
        return 0;
    } else {
        return cash;
    }
}

double cashWithdraw(double balance) {
    double cash = 0;
    std::cout << "Enter cash amount: ";
    std::cin >> cash;

    if (balance < cash) {
        std::cout << "You don't have enough cash.\n";
        return 0;
    } else if (cash < 0) {
        std::cout << "Enter valid amount.\n";
        return 0;
    } else {
        return cash;
    }
}