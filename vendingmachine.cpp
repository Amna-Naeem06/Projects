#include <iostream>
using namespace std;

int main() //EXECUTION STARTS
{
    int menu, price; //declaring variables for entering menu and price
    double money; //input user money
    cout << "The menu is: "<<endl; //display menu
    cout << "1 for drinks"<<endl;
    cout<<"2 for snacks"<<endl;
    cout<<"3 for candies"<<endl;
    cout << "The price list is given below: "<<endl; //prices for all items
    cout << "Water=7$"<<endl;
    cout<<"Soda=10$"<<endl;
    cout<<"Juice=12$"<<endl;
    cout << "Chips=5$"<<endl;
    cout<<"Cookies=6$"<<endl;
    cout<<"Crackers=7$"<<endl;
    cout << "Chocolate=6$"<<endl;
    cout<<"Gummy bears=9$"<<endl;
    cout<<"Lollipops=4$"<<endl;
    cin >> menu; //display further according to user choice
    cout << "Enter Money : ";
    cin >> money; //take money from user

    switch(menu) //using switch to make further decisions
    {
        int drinks, snacks, candies;
        case 1:
            cout<<"Enter 1 for Water"<<endl;
            cout<<"Enter 2 for Soda"<<endl;
            cout<<"Enter 3 for Juice"<<endl;
            cin >> drinks;
            switch(drinks) //if user selects drinks display further menu
            {
                case 1:
                    price = 7; //price of water is 7
                    if (money >= price) //only if user enters enough money to purchase item
                    {
                        cout << "You bought a Water" << endl;
                        cout << "Change : " << money - price; //return change if possible
                    }
                    else //if user enters less money than required then print insufficient money
                    {
                        cout << "Insufficient Money";
                    }
                    break;

                case 2:
                    price = 10;
                    if (money >= price)
                    {
                        cout << "You bought a Soda" << endl;
                        cout << "Change : " << money - price; //return change if possible
                    }
                    else //if user enters less money than required then print insufficient money
                    {
                        cout << "Insufficient Money";
                    }
                    break;

                case 3:
                    price = 12;
                    if (money >= price)
                    {
                        cout << "You bought a Juice" << endl;
                        cout << "Change : " << money - price; //return change if possible
                    }
                    else //if user enters less money than required then print insufficient money
                    {
                        cout << "Insufficient Money";
                    }
                    break;

                default: 
                    cout << "Invalid";
            }
            break;

        case 2:
            cout<<"Enter 4 for chips"<<endl;
            cout<<"Enter 5 for cookies"<<endl;
            cout<<"Enter 6 for crackers"<<endl;
            cin >> snacks;

            switch(snacks)
            {
                case 4:
                    price = 5;
                    if (money >= price)
                    {
                        cout << "You bought Chips" << endl;
                        cout << "Change : " << money - price; //return change if possible
                    }
                    else //if user enters less money than required then print insufficient money
                    {
                        cout << "Insufficient Money";
                    }
                    break;

                case 5:
                    price = 6;
                    if (money >= price)
                    {
                        cout << "You bought Cookies" << endl;
                        cout << "Change : " << money - price; //return change if possible
                    }
                    else //if user enters less money than required then print insufficient money
                    {
                        cout << "Insufficient Money";
                    }
                    break;

                case 6:
                    price = 7;
                    if (money >= price)
                    {
                        cout << "You bought Crackers" << endl;
                        cout << "Change : " << money - price; //return change if possible
                    }
                    else //if user enters less money than required then print insufficient money
                    {
                        cout << "Insufficient Money";
                    }
                    break;

                default:
                    cout << "Invalid";
            }
            break;

        case 3:
            cout<<"Enter 7 for chocolate"<<endl;
            cout<<"Enter 8 for gummy bears"<<endl;
            cout<<"Enter 9 for Lollipops"<<endl;
            cin >> candies;

            switch(candies)
            {
                case 7:
                    price = 6;
                    if (money >= price)
                    {
                        cout << "You bought a Chocolate" << endl;
                        cout << "Change : " << money - price; //return change if possible
                    }
                    else //if user enters less money than required then print insufficient money
                    {
                        cout << "Insufficient Money";
                    }
                    break;

                case 8:
                    price = 9;
                    if (money >= price)
                    {
                        cout << "You bought Gummy Bears" << endl;
                        cout << "Change : " << money - price; //return change if possible
                    }
                    else //if user enters less money than required then print insufficient money
                    {
                        cout << "Insufficient Money";
                    }
                    break;

                case 9:
                    price = 4;
                    if (money >= price)
                    {
                        cout << "You bought Lollipops" << endl;
                        cout << "Change : " << money - price; //return change if possible
                    }
                    else //if user enters less money than required then print insufficient money
                    {
                        cout << "Insufficient Money";
                    }
                    break;

                default:
                    cout << "Invalid";
            }
            break;

        default:
            cout << "Invalid"; //if none of the conditions meet then print invalid
    }
}
