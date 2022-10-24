#include <iostream>

int accountBalance(int balance);
int deposityMoney();
int withdrawMoney(int balance);



int main() {
  int choice;
  int tries = 0;
  int balance = 100;
  do{
    std::cout << "Welcome to our banking system \n";
    std::cout << "-------------------------------\n";

    std::cout << "1. Account balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Widthdraw Money\n";
    std::cout << "4. To Exit\n";

    std::cout << "------------------------\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    // clears the input buffer
    std::cin.clear();
    fflush(stdin);

    switch (choice)
    {
    case 1:
      std::cout << "Your account balance is " << accountBalance(balance) << std::endl;
      break;
    
    case 2:
      balance += deposityMoney();
      std::cout << "Your account balance is " << balance << std::endl;

      break;

    case 3:
      std::cout << "Your account balance is " << withdrawMoney(balance) << std::endl;;
      break;

    case 4:
      std::cout << "Thanks for using our appplication\n";
      break;

    default:
      std::cout << "Enter valid choice \n";
      break;
    }

  } while(choice != 4);
  return 0;
}

int accountBalance(int balance) {
  // ...
  return balance;
}

int deposityMoney() {
  // ...
  int deposit;
  std::cout << "Enter amount you want to deposit: ";
  std::cin >> deposit;

  return deposit;
}

int withdrawMoney(int balance) {
  // ...
  int withdrawal;
  std::cout << "Enter amount you want to withdraw: ";
  std::cin >> withdrawal;
  int remaining = balance - withdrawal;
  return remaining;
}