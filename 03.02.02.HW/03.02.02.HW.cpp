#include <iostream>
#include <string>

struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    setlocale(LC_ALL, "Russian");
    BankAccount account;

    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin.ignore(); // Ignore the newline character left in the stream
    std::getline(std::cin, account.ownerName);

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    changeBalance(account, newBalance);

    std::cout << "Ваш счёт: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}
/*
Задача 2. Счета
Описание
Создайте структуру для хранения информации о банковском счёте. Она должна хранить номер счёта (целое число), имя владельца (строка) и количество денег на счету (дробное число).

Создайте функцию для изменения баланса счёта. Функция должна принимать экземпляр структуры банковского счёта и новую сумму.

Попросите пользователя заполнить поля экземпляра структуры, сообщить новый баланс счёта и выведите обновлённый экземпляр структуры на консоль.

Пример работы программы
Введите номер счёта: 123456789
Введите имя владельца: Андрей
Введите баланс: 5000
Введите новый баланс: 6000
Ваш счёт: Андрей, 123456789, 6000

Подсказки
Не забудьте, что для изменения экземпляра структуры внутри функции нужно передавать его по ссылке или через указатель.

Для объявления структуры используйте ключевое слово struct.

Для ввода значений с консоли используйте std::cin.

Для вывода на консоль используйте std::cout.
  */