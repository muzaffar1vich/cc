#include <iostream>
#include <string>

using namespace std;

class SmartCard
{
private:
    string owner;
    double balance;
    long id;

public:
    void user(string owner)
    {
        this->owner = owner;
    }

    void deposit(double amount)
    {
        if (amount >= 0)
        {
            this->balance = amount;
        }
        else
            cout << "Balance xato(balance > 0)!";
    }
    void withdraw(double amount)
    {
        if (amount > 0)
        {
            this->balance += amount;
        }
        else
        {   

            this->balance += amount;
        }
    }

    void show()
    {
        cout << owner << "";
        cout << "Balance: " << balance << endl;
    }
};

int main()
{

    long hisob_raqam;
    int buyruq;
    int hisobni_toldirish;
    int hisobni_yechish;

    SmartCard card1;

    while(true) {
        cout << "Bank Hisob raqamini kiriting: ";
        cin >> hisob_raqam;

        cout << "1. Balansni ko'rish\n2. Hisobni to'ldiring\n3. Pul yechish\n4. Orqaga\nTanla: ";
        cin >> buyruq;

        if(buyruq == 1) {
            card1.deposit(10000);
            card1.show();
        }
        if(buyruq == 2) {
            cout << "Summani kiriting: ";
            cin >> hisobni_toldirish;
            card1.withdraw(hisobni_toldirish);
            card1.show();
        }
        if(buyruq == 3) {
            cout << "Summani kiriting: ";
            cin >> hisobni_yechish;
            hisobni_yechish *= -1;
            card1.withdraw(hisobni_yechish);
            card1.show();
        }


        // break;

    }

    // card1.user("User1");
    // card1.deposit(1000);
    // card1.withdraw(58);
    // card1.show();
    
    // SmartCard card2;
    // card2.user("User2");
    // card2.deposit(100);
    // card2.withdraw(-34);
    // card2.show();

    return 0;
}

