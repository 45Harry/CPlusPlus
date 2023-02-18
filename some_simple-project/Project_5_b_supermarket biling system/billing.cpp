#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;
class shopping
{
private:
    int product_code;
    string product_name;
    float product_price;
    float product_amount;
    float product_discount;

public:
    void menu();
    void admin();
    void buyer();
    void add_product();
    void delete_product();
    void update_product();
    void check_product();
    void list();
    //  void exit();
};
void shopping::menu()
{

    int choice;
m:
    cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t _____________________________________________________________\n";
    cout << "\t\t\t\t\t\t\t\t\t\t|                                                             |\n";
    cout << "\t\t\t\t\t\t\t\t\t\t|                                                             |\n";
    cout << "\t\t\t\t\t\t\t\t\t\t|------------------------Central Mall-------------------------|\n";
    cout << "\t\t\t\t\t\t\t\t\t\t|--------------------Main Road, Biratnagar--------------------|\n";
    cout << "\t\t\t\t\t\t\t\t\t\t|                                                             |\n";
    cout << "\t\t\t\t\t\t\t\t\t\t|_____________________________________________________________|\n";
    cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t 1)Admin\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t 2)Customer\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t 3)Exit\n\n";

    cout << "\t\t\t\t\t\t\t\t\t\t Please select : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        string username;
        string password;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t Hello ADMIN :) Please login! \n\n";
        // cout << "\t\t\t\t\t\t\t\t\t\t \n\n";
    a:
        cout << "\t\t\t\t\t\t\t\t\t\t Enter Username : ";
        cin >> username;
        cout << "\n\t\t\t\t\t\t\t\t\t\t Enter Password : ";
        cin >> password;
        if (username == "adminharry" && password == "admin")
        {
            admin();
        }
        else
        {
            cout << "\t\t\t\t\t\t\t\t\t\t                   Invalid Username and Password! :(\n\n";
            cout << "\t\t\t\t\t\t\t\t\t\t\t                   Please Try Again!\n\n";
            goto a;
        }
        break;
    }
    case 2:
    {
        buyer();
        break;
    }
    case 3:
    {
        exit(0);
        break;
    }
    default:
    {
        system("cls");
        cout << "\t\t\t\t\t\t\t\t\t\t Invalid choice! choose again:)\n\n";
        goto m;
    }
    };
}
void shopping::admin()

{
    int choice;
    system("cls");

    cout << "\t\t\t\t\t\t\t\t\t\t\t\t       --WelCome Admin--\n\n";
    cout << "\n\t\t\t\t\t\t\t\t\t\t 1)Add a new product\t\t 2)Remove product\n\n ";
    cout << "\n\t\t\t\t\t\t\t\t\t\t 3)Modify Product\t\t 4)Check Product \n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t 5)Goto Menu \n\n";
g:
    cout << "\t\t\t\t\t\t\t\t\t\t Please make a choice! : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        char choice;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t Want to add a new product?.Press y/n to go back ";
        cin >> choice;
        if (choice == 'y')
        {
            add_product();
        }
        else
        {
            admin();
        }

        break;
    }
    case 2:
    {
        char choice;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t Want to delete a product?.Press y/n to go back ";
        cin >> choice;
        if (choice == 'y')
        {
            delete_product();
        }
        else
        {
            admin();
        }
        break;
    }
    case 3:
    {
        char choice;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t Want to modify a product?.Press y/n to go back ";
        cin >> choice;
        if (choice == 'y')
        {
            update_product();
        }
        else
        {
            admin();
        }
        break;
    }
    case 4:
    {
        char choice;
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t Want to check products?.Press y/n to go back ";
        cin >> choice;
        if (choice == 'y')
        {
            check_product();
            cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t Press any key to go back ";
            cin >> choice;
            if (choice == ' ')
            {
                system("cls");
                check_product();
            }
            else
            {
                admin();
            }
        }
        else
        {
            admin();
        }
        break;
    }
    case 5:
    {
        menu();
        break;
    }

    default:
    {
        // system("cls");
        cout << "\n\t\t\t\t\t\t\t\t\t\t Invalid choice! Try again!\n\n ";

        goto g;
    }
    }
}
void shopping::buyer()
{
    int choice;
    fstream data;
    system("cls");

g:
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t  --Welcome to Central mall--\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t           --Buyer--\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t 1)Buy Product\n\n\t\t\t\t\t\t\t\t\t\t 2)Go Back\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t Please select! : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        fstream data;
        int c = 1;
        char choice;
        int arrcode[100];
        int arrquant[100];
        float suma = 0;
        float amount = 0;

        list();
        cout << "\n\n\n\t\t\t\t\t\t\t\t\t Kindly place your order \n\n";
        do
        {
        m:
            cout << "\t\t\t\t\t\t\t\t\t Product code : ";

            cin >> arrcode[c];
            cout << "\n\n\t\t\t\t\t\t\t\t\t Quantity : ";
            cin >> arrquant[c];

            c++;
            cout << "\n\n\t\t\t\t\t\t\t\t\t Buy more!.Press y : ";
            cin >> choice;

        } while (choice != 'n');

        for (int i = 1; i < c; i++)
        {
            data.open("database.txt", ios::in);
            data >> product_code >> product_name >> product_price >> product_discount;
            while (!data.eof())
            {

                if (product_code == arrcode[i])
                {
                    amount = arrquant[i] * product_price;
                    suma = amount - product_discount;
                }
                data >> product_code >> product_name >> product_price >> product_discount;
            }
        }
        data.close();

        cout << "\n\n\t\t\t\t\t\t\t\t\t Your gross amount is Rs." << suma;
        break;
    }
    case 2:
    {

        system("cls");
        menu();
        break;
    }
    default:
    {
        system("cls");

        cout << "\t\t\t\t\t\t\t\t\t\t Invalid choice! Try again!. \n\n";
        goto g;
    }
    };
}
void shopping::add_product() // adds new product
{
    fstream data, data1;
    float pkey;
    int token = 0;
    system("cls");

    char choice;
    list();
    cout << "\n\t\t\t\t\t\t\t\t\t_____________________________________________________________________________________";

    do
    {

        cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t--Add Product--\n\n";
        cout << "\n\t\t\t\t\t\t\t\t\t\t Note:Please enter a unique product code\n\n";

        do
        {
            data.open("database.txt", ios::out | ios::app | ios::in);

            cout << "\n\t\t\t\t\t\t\t\t\t\t Product code : ";
            cin >> pkey;
            data >> product_code >> product_name >> product_price >> product_discount;
            while (!data.eof())
            {
                if (pkey == product_code)
                {
                    cout << "\t\t\t\t\t\t\t\t\t Dublicate product code. Try again \n\n\n";
                }
                else
                {
                    int code = pkey;
                    product_code = code;
                    data << " " << product_code << " " << product_name << " " << product_price << " " << product_discount << "\n";
                }
                data >> product_code >> product_name >> product_price >> product_discount;
            }

        } while (pkey == product_code);
        data.close();

        cout << "\n\t\t\t\t\t\t\t\t\t\t Product name : ";
        cin >> product_name;
        cout << "\n\t\t\t\t\t\t\t\t\t\t Product price : ";
        cin >> product_price;
        cout << "\n\t\t\t\t\t\t\t\t\t\t Discount on the product : ";
        cin >> product_discount;

        if (!data)
        {

            data.open("database.txt", ios::out | ios::app);

            data << " " << product_code << " " << product_name << " " << product_price << " " << product_discount << "\n";
            data.close();
            cout << "\n\t\t\t\t\t\t\t\t\t\t Product Added::)\n";
        }
        else
        {

            data << " " << product_code << " " << product_name << " " << product_price << " " << product_discount << "\n";
            data.close();
            cout << "\n\t\t\t\t\t\t\t\t\t\t Product Added:)\n ";
        }
        cout << "\n\t\t\t\t\t\t\t\t\t\t Add more? press (y/n) : ";
        cin >> choice;
        if (choice == 'n')
        {
            system("cls");
            admin();
        }

    } while (choice != 'n');
}
void shopping::update_product()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    char choice;
    list();

    do
    {

        cout << "\n\t\t\t\t\t\t\t\t\t_____________________________________________________________________________________";
        cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  ----Modify your product---- ";
        cout << "\n\n\n\t\t\t\t\t\t\t\t\t\tProduct code: ";
        cin >> pkey;
        data.open("database.txt", ios::in);
        if (!data)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t Sorry file not found!\n\n";
        }
        else
        {
            data1.open("database1.txt", ios::out | ios::app);
            data >> product_code >> product_name >> product_price >> product_discount;
            while (!data.eof())
            {
                if (pkey == product_code)
                {
                    cout << "\n\t\t\t\t\t\t\t\t\t Product code: ";
                    cin >> product_code;
                    cout << "\n\t\t\t\t\t\t\t\t\t Product name : ";
                    cin >> product_name;
                    cout << "\n\t\t\t\t\t\t\t\t\t Product price : ";
                    cin >> product_price;
                    cout << "\n\t\t\t\t\t\t\t\t\t Discount on the product : ";
                    cin >> product_discount;
                    data1 << " " << product_code << " " << product_name << " " << product_price << " " << product_discount << "\n";
                    cout << "\n\t\t\t\t\t\t\t\t\t Product update completed :)\n\n";
                    token++;
                }
                else
                {
                    data1 << " " << product_code << " " << product_name << " " << product_price << " " << product_discount << "\n";
                }
                data >> product_code >> product_name >> product_price >> product_discount;
            }
            data.close();
            data1.close();
            remove("database.txt");
            rename("database1.txt", "database.txt");
            if (token == 0)
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\tFailed to update!\n\n";
            }
        }
        cout << "\n\t\t\t\t\t\t\t\t\t\t Want to update more? Press y\n\n\n";
    } while (choice != 'n');
    if (choice == 'n')
    {
        system("cls");
        admin();
    }
}
void shopping::delete_product()
{
    fstream data, data1;
    int p_key;
    int token = 0;
    system("cls");
    list();
    char choice;
    do
    {

        cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t    ----Delete Product---- \n\n";
        cout << "\n\t\t\t\t\t\t\t\t\t\t Product Code : ";
        cin >> p_key;
        data.open("database.txt", ios::in);
        if (!data)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t Sorry file not found!\n\n";
        }
        else
        {
            data1.open("database1.txt", ios::out | ios::app);
            data >> product_code >> product_name >> product_price >> product_discount;
            while (!data.eof())
            {
                if (p_key == product_code)
                {
                    cout << "\n\t\t\t\t\t\t\t\t\t\tProduct deleted sucessfully :)\n\n";
                    token++;
                }
                else
                {
                    data1 << " " << product_code << " " << product_name << " " << product_price << " " << product_discount << "\n";
                }
                data >> product_code >> product_name >> product_price >> product_discount;
            }
            data.close();
            data1.close();
            remove("database.txt");
            rename("database1.txt", "database.txt");
            if (token == 0)
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\t Product not found!\n\n";
            }
        }
        cout << "\n\t\t\t\t\t\t\t\t\t\tWant to delete more ? Press y if Yes\n\n\n";
        cin >> choice;
    } while (choice != 'n');
    if (choice == 'n')
    {
        system("cls");
        admin();
    }
}
void shopping::check_product()
{
    list();
}
void shopping::list()
{
    fstream data;
    system("cls");

    data.open("database.txt", ios::in);
    cout << "\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------\n";
    cout << " \t\t\t\t\t\t\t\t\t| Product Code "
         << "|\t|"
         << " Product Name "
         << "|\t|"
         << " Product Price "
         << "|\t|"
         << " Discout |";
    cout << "\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------\n";

    data >> product_code >> product_name >> product_price >> product_discount;
    if (!data)
    {
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t No file found! :( \n\n";
        exit(0);
    }
    else
    {
        while (!data.eof())
        {
            cout << "\n  \t\t\t\t\t\t\t\t\t "
                 << product_code << "\t\t\t" << product_name << "\t\t\t " << product_price << "\t\t\t " << product_discount << "\n";
            data >> product_code >> product_name >> product_price >> product_discount;
        }
        data.close();
    }
}

int main()
{

    shopping bill;
    bill.menu();
    return 0;
}