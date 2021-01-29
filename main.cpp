#include <iostream>

using namespace std;

int main()
{
    string name;
    string printer;
    string phone;
    string table;
    string items;
    int uniqueId;
    int quantity;
    int printerPrice = 25;
    int phonePrice = 19;
    int tablePrice = 15;
    int priceOfTheGood;
    double amountOwe;
    double payment;
    double balance;
    double remaining;
    double vatAmount= 0.12;

    cout << "Input your name" <<endl;
    getline(cin,name);

    cout << "Input your unique id" <<endl;
    cin >> uniqueId;

    cout << "Items Been Sold" <<endl;
    cout << "Printer" <<endl;
    cout << "Phone" <<endl;
    cout << "Table" <<endl;

    cout << "What do you want to buy" <<endl;
    cin >> items;

    cout << "What quantity of items do you want to buy" <<endl;
    cin >> quantity;

    if (items == printer);
    {
       priceOfTheGood= printerPrice;
    }
    if (items == phone);
    {
        priceOfTheGood= phonePrice;
    }
    if (items == table);
    {
        priceOfTheGood= tablePrice;
    }
    amountOwe= (priceOfTheGood * quantity + vatAmount);
    cout << "The total amount you owe is " << amountOwe <<endl;

    cout << "Please make your payment" << endl;
    cin >> payment;

    if ( payment > amountOwe) {
        balance = (payment - amountOwe);
        cout << "Your balance is " << balance << endl;
        cout << " You have paid for your items. Please wait for your receipt" <<endl;
    } else {
        cout << "Please complete  your payment" << endl;
    }

    if (payment < amountOwe)  {
        balance = (amountOwe - payment);
        cout << "Your money is not enough. You left with " << balance << "to pay" <<endl;
        cout << "Complete payment to receive your items" << endl;
        balance == remaining;
        cin >> remaining;
        cout << "Payment completed. Please wait for your receipt" << endl;
    } else {
        cout << "Payment completed" << endl;
    }

    cout << "           RECEIPT OF INF SUPERMARKET          " << endl;
    cout << "Name of the costumer                    " << name << endl;
    cout << "Unique ID                               " << uniqueId << endl;
    cout << "Item bought                             " << items << endl;
    cout << "Quantity bought                         " << quantity << endl;
    cout << "Vat amount                              " << vatAmount << endl;
    cout << "Total cost                              " << amountOwe << endl;
    cout << "Total amount payed                      " << payment << endl;
    cout << "Balance                                 " << balance << endl;
    cout << "                                             Signature" << endl;
    cout << "                                           Senior Manage" << endl;

    cout << "Thank you for transacting with us" << endl;


    return 0;
}
