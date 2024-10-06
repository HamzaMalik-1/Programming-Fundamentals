#include <iostream>

using namespace std;
void printMenu();
int inputOption();
string inputItemName();
int inputPrice();
int inputTax();
int calculatePayable(int price, int taxPercentage);
void horizontalLine();
void displayData(string itemName, float price, int tax, float payable);
void displayTableHeader();
// void displayResult(string itemName1,string itemName2,string itemName3,float price1,float price2,float price3,intt tax1,intt tax2,intt tax3,float payablePrice1float ,payablePrice2,float payablePrice3);
main()
{
    string itemName1, itemName2, itemName3;
    float price1, price2, price3, payablePrice1, payablePrice2, payablePrice3;
    int tax1, tax2, tax3, option;

    while (true)
    {

        printMenu();
        option = inputOption();

        if (option == 1)
        {
            itemName1 = inputItemName();
            price1 = inputPrice();
            tax1 = inputTax();
            payablePrice1 = calculatePayable(price1, tax1);
        }
        else if (option == 2)
        {
            itemName2 = inputItemName();
            price2 = inputPrice();
            tax2 = inputTax();
            payablePrice2 = calculatePayable(price2, tax2);
        }
        else if (option == 3)
        {
            itemName3 = inputItemName();
            price3 = inputPrice();
            tax3 = inputTax();
            payablePrice3 = calculatePayable(price3, tax3);
        }
        else if (option == 4)
        {
            horizontalLine();
            displayTableHeader();
            displayData(itemName1, price1, tax1, payablePrice1);
            displayData(itemName2, price2, tax2, payablePrice2);
            displayData(itemName3, price3, tax3, payablePrice3);
            horizontalLine();
            // displayResult(itemName1,itemName2,itemName3,price1,price2,price3,tax1,tax2,tax3,payablePrice1,payablePrice2,payablePrice3);
        }
    }
}

void printMenu()
{
    cout << "1. Add Item 1" << endl;
    cout << "2. Add Item 2" << endl;
    cout << "3. Add Item 3" << endl;
    cout << "4. Display Result" << endl;
    cout << "5. Exist" << endl;
}

int inputOption()
{
    int option;
    cout << "Select Option : ";
    cin >> option;
    return option;
}

string inputItemName()
{
    string itemName;
    cout << "Enter Item : ";
    cin >> itemName;
    return itemName;
}

int inputPrice()
{
    int price;
    cout << "Enter item price : ";
    cin >> price;
    return price;
}

int inputTax()
{
    int tax;
    cout << "Enter item tax : ";
    cin >> tax;
    return tax;
}

int calculatePayable(int price, int taxPercentage)
{
    int payable = price + ((price * taxPercentage) / 100);
    return payable;
}

void horizontalLine()
{
    cout << "_____________________________________________________" << endl;
}


void displayTableHeader(){
     cout << "|  Item Name\t|  Price\t|  Tax(%)\t|  Payable\t|" << endl;

}
void displayData(string itemName, float price, int tax, float payable)
{
    cout << "|  " << itemName << "\t|  " << price << "\t|  " << tax <<"%" << "\t|  " << payable << "\t|"<<endl;

}