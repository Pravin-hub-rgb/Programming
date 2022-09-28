#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}                    // We have to make this blank constructor because if we are not able to give the value of p, y and r then still our objects will be made.
    BankDeposit(int p, int y, float r); // r can be a value like 0.4
    BankDeposit(int p, int y, int r);   // r can be a value like 12
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}
void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal
         << " Retrun value after " << years << " is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r; // in decimal form
    int R;   // in percentage form
    cout << "Enter the value of p y and r : ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p y and R : ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    bd3.show();

    return 0;
}