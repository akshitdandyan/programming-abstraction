#include <iostream>
using namespace std;

struct Price
{
    float tv = 400;
    float vc = 220;
    float rc = 35.20;
    float cd = 300;
    float tr = 150;
};


struct Cart {
    int tv;
    int vc;
    int rc;
    int cd;
    int tr;
};

int main() {

    Cart userCart;
    Price price;

    cout << "How many TV's are sold?";
    cin >> userCart.tv;
    cout << "How many VCR's are sold?";
    cin >> userCart.vc;
    cout << "How many Remote Controls are sold?";
    cin >> userCart.rc;
    cout << "How many CD's are sold?";
    cin >> userCart.cd;
    cout << "How many Tape Recorders are sold?";
    cin >> userCart.tr;

    int cost = (userCart.tv * price.tv) + (userCart.vc * price.vc) + (userCart.rc * price.rc) + (userCart.cd * price.cd) + (userCart.tr * price.tr);
    // add 8.25% tax
    float tax = cost * .0825;

    float totalBill = cost + tax;

    string userName;
    cout << "What is your name?";
    cin >> userName;
    // print bill in format
    cout << endl << "Bill for " << userName << endl;
    cout << "Item Name" << " Quantity" << " Price" << " Sub-Total" << endl;
    cout << "TV's      " << userCart.tv << "        " << price.tv << "     " << userCart.tv * price.tv << endl;
    cout << "VCR's     " << userCart.vc << "        " << price.vc << "     " << userCart.vc * price.vc << endl;
    cout << "RC's      " << userCart.rc << "        " << price.rc << "     " << userCart.rc * price.rc << endl;
    cout << "CD's      " << userCart.cd << "         " << price.cd << "     " << userCart.cd * price.cd << endl;
    cout << "TR's      " << userCart.tr << "        " << price.tr << "     " << userCart.tr * price.tr << endl;
    cout << "Tax: " << tax << endl;
    cout << "Total: " << totalBill << endl;

    return 0;
}