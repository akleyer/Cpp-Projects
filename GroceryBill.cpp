

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// This program will act as a bill or receipt. The user will input a product and then the price. Then, the
// user will be asked if he or she wants to proceed with inputting another product. Next, the total will
// be calculated and the user will input how much money he or she will tender. Afterwards, the change will
// be calculated and the denominations for how many of which bills and coins will be  determined.
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main ()
{
    string product[25];
    float price[25],sum=0,amount=0,change1=0;
    int twenties,tens,fives,dollars,quarter,dime,nickel,penny, n, i;
    char input;
    bool Continue = true;
    float tax = 0.0875;
    float statetax;
    float total;
    
    cout << "Hello, and welcome to my shop...\n\n";
    while(Continue == true)
    {
        cout <<"How many products do you have? \n";
        cin >> n;
        cout << "(" << "The response given is " << n << ")\n\n";
        
        for (i=0; i < n; i++){
        cout << "Please enter the product: " << endl;
        cin >> product[i];
        cout << "Please enter the price of " << product[i] <<  ":\n$";
        cin >> price[i];
        sum = sum + price[i];
        }
        
        cout << "Do you want to continue purchasing items? (Y/N)" << endl;
        cin >> input;
        cout << "------------------------------------------" << endl;
        if(input == 'Y' || input == 'y') Continue = true;
        if(input == 'N' || input == 'n') Continue = false;
    }

    cout << "Your subtotal amount is: $" << sum << endl;
   
    statetax = (tax * 100);
    cout << "State Tax: " << statetax << "%" << endl;
    total = (tax * sum) + sum;
    
    cout.precision(2);
    cout << "Your total amount is: $" << fixed << total << "\n";
    cout << "------------------------------------------" << endl;
    
do
{
    cout << "Amount Tendered: $";
    cin >> amount;
    if (amount > 100)
        cout << "Sorry we don't accept bills over $100";
    if (amount < total)
    {
        cout << "Sorry, but that is not enough money\n";
        cout << "Please pay: $" << total << endl;
    }
}
    while (amount < total || amount > 100.00);
    
    change1 = amount - total;
    
    cout.precision(2);
    cout << "Customer's change: $" << fixed << change1 << endl;
    cout << "--------------Denominations---------------\n";
    
    while (change1>=20.00){
        change1-=20.00;
        twenties+=1;
        
        if (change1 < 20.00 && twenties > 1)
            cout << twenties << " TWENTY dollar-bill(s)" << endl;
    }
    while (change1>=10.00){
        change1-=10.00;
        tens+=1;
        
        if (change1 < 10.00 && tens > 0)
            cout << tens << " TEN dollar-bill(s)" << endl;

    }
    while (change1>=5.00){
        change1-=5.00;
        fives+=1;
        
        if (change1 < 5.00 && fives > 0)
            cout << fives << " FIVE dollar-bill(s)" << endl;
    }
    while (change1>=1.00){
        change1-=1;
        dollars+=1;
       
        if (change1 < 1.00 && dollars > 0)
            cout << dollars << " ONE dollar-bill(s)" << endl;
    }
    while (change1>=0.25){
        change1-=0.25;
        quarter+=1;
        
        if (change1 < 0.25 && quarter > 0)
            cout << quarter << " Quarters" << endl;
    }
    while (change1>=0.10){
        change1-=0.10;
        dime+=1;
        
        if (change1 < 0.10 && dime > 0)
            cout << dime << " Dimes" << endl;
    }
    while (change1>=0.05){
        change1-=0.05;
        nickel+=1;
        
        if (change1 < 0.05 && nickel > 0)
            cout << nickel << " Nickels" << endl;
    }
    while (change1>=0.001){
        change1-=0.01;
        penny+=1;
        
        if (change1 < 0.001 && penny > 0)
            cout << penny << " Pennies" << endl;

    }
    cout << "------------------------------------------" << endl;
    
    return 0;
}






