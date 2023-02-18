#include <iostream>
#include <fstream>
#include <iomanip> // for floating point value
#include <windows.h>
#include <string>

using namespace std;
void menu();
class manageMenu
{
protected:
    string userName; // hide admin namespace

public:
    manageMenu()
    {
        system("color 14"); // change terminal color
        cout << "\n\n\n\n\n\n\n\n\n\n\n\t \u001b[35;1m Enter Your Name to Continue as Admin :\u001b[0m ";
        cin >> userName;
        system("CLS");
        menu();
    };
    ~manageMenu(){};
};

class Customers
{

public:
    string Name, Address, Gender;
    int Age;
    unsigned long int MobileNumber;
    static long int cusID;
    char All[999];

    void getDetails() // getting customers details here
    {
        ofstream out("Old_custmers.txt", ios::app);
        {
            cout << "Enter Customer ID: ";
            cin >> cusID;
            cout << "Enter Name: ";
            cin >> Name;
            cout << "Enter Address: ";
            cin >> Address;
            cout << "Enter Age: ";
            cin >> Age;
            cout << "Enter Mobile Number: ";
            cin >> MobileNumber;
            cout << "Enter Gender: ";
            cin >> Gender;
        }
        out << "\nCustomer ID: " << cusID << "\nName: " << Name << "\nAddress: " << Address << "\nAge: " << Age << "\nMobileNumber: " << MobileNumber << "\nGender: " << Gender << endl;
        out.close();
        cout << "\nSAVED \n NOTE: We save your details for future purposes\n"
             << endl;
    }
    void showDetails() // showing customers details here, A new method !
    {
        ifstream in("Old_custmers.txt");
        if (!in)
        {
            cout << "File Error!" << endl;
        }
        while (!in.eof())
        {
            in.getline(All, 999); // this function here will get all the details from the file(a new method)
            cout << All << endl;
        }
        in.close();
    }
};
long int Customers::cusID;
class Cabs
{
public:
    int cabChoice, hireCab;
    int kilometers;
    static float cabCost;

    void cabsDetails()
    {
        cout << "We collaborated with fastest,safest, and smartest cab services arround the country " << endl;
        cout << "-------------ZinnZo Cabs-------------\n"
             << endl;
        cout << "1. Rent a Standard Cab - @ Rs.15 per 1KM" << endl;
        cout << "2. Rent a Luxary Cab - @ Rs.25 per 1KM" << endl;
        cout << "3. GOTO Main Menu " << endl;

        cout << "\n To calculate the cost for your journey: " << endl;
        cout << "Enter which kind of cab you need: " << endl;
        cin >> cabChoice;
        switch (cabChoice)
        {
        case 1:
        {
            cout << "\n\t You have choosen Standard Cab:) " << endl;
            cout << "Enter kilometers you have to travel: " << endl;
            cin >> kilometers;
            cabCost = 15 * kilometers;
            cout << "\n Your total fare is: " << cabCost << "$" << endl;

            cout << "\nPress 1 to hire Standard cab: or" << endl;
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;
            if (hireCab == 1)
            {
                cout << "\nYAY, You have hired a Standard Cab :)" << endl;
            }
            else
            {

                system("CLS");

                cabsDetails();
            }
            break;
        }
        case 2:
        {
            cout << "\n\t You have choosen Luxary Cab:) " << endl;
            cout << "Enter kilometers you have to travel: " << endl;
            cin >> kilometers;
            cabCost = 25 * kilometers;
            cout << "\n Your total fare is: " << cabCost << "$" << endl;

            cout << "\nPress 1 to hire Luxary cab: or " << endl;
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;
            if (hireCab == 1)
            {
                cout << "\nYAY, You have hired a Luxary Cab :)" << endl;
            }
            else
            {
                system("CLS");
                cabsDetails();
            }
            break;
        }

        case 3:
        {
            system("CLS");

            menu();
            break;
        }
        default:
            cout << "\nInvalid choice! " << endl;
        };
        if (hireCab != 3)
        {
            cout << "\nTo goto Main Menu" << endl;
            system("pause");
            system("CLS");
            menu();
        }
    }
};
float Cabs::cabCost;
class Booking
{
public:
    int choiceHotel;
    int packChoice;
    static float hotelCost;
    int gotomenu;

    void hotels()
    {
        string hotels[] = {"Ratan Hotel", "Everest Hotel", "Pukar Hotels"};
        for (int i = 0; i < 3; i++)
        {
            cout << (i + 1) << ". " << hotels[i] << endl;
        }
        cout << "\nCurrently we collaborated with above hotels!" << endl;

        cout << "\n Select the Hotel you want to book: ";
        cin >> choiceHotel;
        if (choiceHotel == 1)
        {
            cout << "~~~~~~~~~~~~WELCOME TO THE HOTEL RATAN~~~~~~~~~~~~\n"
                 << endl;
            cout << "The Garden, food and bevrage. Enjoy all you can drink, Stau cool and get chilled in the summer sun." << endl;
            cout << "Packages offered by Ratan:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for:Rs.5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at Ratan: Rs.150000.00" << endl;

            cout << "\nChoose the package of your choice.\n Press any other key to go back" << endl;
            cout << "Your choice:";
            cin >> packChoice;
            if (packChoice == 1)
            {
                cout << "\nYou have successfully booked Standard pack at Ratan." << endl;
                cout << "Goto Menu and take the Receipt" << endl;
            }
            else if (packChoice == 2)
            {
                cout << "\nYou have successfully booked Premium pack at Ratan." << endl;
                cout << "Goto Menu and take the Receipt" << endl;
            }
            else if (packChoice == 3)
            {
                cout << "\nYou have successfully booked Luxary pack at Ratan." << endl;
                cout << "Goto Menu and take the Receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Going back to Previous Menu\n Please Wait!" << endl;
                Sleep(1100);
                system("CLS");
                void hotels();
            }

            cout << "\nPress 1 to redirect main menu: " << endl;
            cin >> gotomenu;
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else if (choiceHotel == 2)
        {
            cout << "~~~~~~~~~~~~WELCOME TO THE EVEREST HOTEL~~~~~~~~~~~~\n"
                 << endl;
            cout << "The Foods,Swimming Pool,Mountains views. All at single place. " << endl;
            cout << "Packages offered by Everest:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for:Rs.6000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.95000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at Everest: Rs.200000.00" << endl;

            cout << "\nChoose the package of your choice.\n Press any other key to go back" << endl;
            cout << "Your choice:";
            cin >> packChoice;
            if (packChoice == 1)
            {
                cout << "\nYou have successfully booked Standard pack at Everest  Pukar Hotels" << endl;
                cout << "Goto Menu and take the Receipt" << endl;
            }
            else if (packChoice == 2)
            {
                cout << "\nYou have successfully booked Premium pack at Everest  Pukar Hotels" << endl;
                cout << "Goto Menu and take the Receipt" << endl;
            }
            else if (packChoice == 3)
            {
                cout << "\nYou have successfully booked Luxary pack at Everest  Pukar Hotels" << endl;
                cout << "Goto Menu and take the Receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Going back to Previous Menu\n Please Wait!" << endl;
                Sleep(1100);
                system("CLS");
                void hotels();
            }

            cout << "\nPress 1 to redirect main menu: " << endl;
            cin >> gotomenu;
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else if (choiceHotel == 3)
        {
            cout << "~~~~~~~~~~~~WELCOME TO THE PUKAR HOTELS~~~~~~~~~~~~\n"
                 << endl;
            cout << "The Garden, food and bevrage. Enjoy all you can drink, Stau cool and get chilled in the summer sun." << endl;
            cout << "Packages offered by Everest:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for:Rs.5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at  Pukar Hotels Rs.150000.00" << endl;

            cout << "\nChoose the package of your choice.\n Press any other key to go back" << endl;
            cout << "Your choice:";
            cin >> packChoice;
            if (packChoice == 1)
            {
                cout << "\nYou have successfully booked Standard pack at  Pukar Hotels>" << endl;
                cout << "Goto Menu and take the Receipt" << endl;
            }
            else if (packChoice == 2)
            {
                cout << "\nYou have successfully booked Premium pack at  Pukar Hotels." << endl;
                cout << "Goto Menu and take the Receipt" << endl;
            }
            else if (packChoice == 3)
            {
                cout << "\nYou have successfully booked Luxary pack at Pukar Hotels." << endl;
                cout << "Goto Menu and take the Receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Going back to Previous Menu\n Please Wait!" << endl;
                Sleep(1100);
                system("CLS");
                void hotels();
            }

            cout << "\nPress 1 to redirect main menu: " << endl;
            cin >> gotomenu;
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else
        {
            cout << "Invalid Input! Going back to Previous Menu\n Please Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
    }
};
float Booking::hotelCost;
class Charges : public Booking, Cabs, Customers
{
private:
public:
    void printBill()
    {
        ofstream outf("recipt.txt"

        );
        outf << "----------ZinnZo Travel Agency----------" << endl;
        outf << "----------------Receipt-----------------" << endl;
        outf << "________________________________________" << endl;

        outf << "Customer ID: " << Customers::cusID << endl
             << endl;
        outf << "Description\t\t Total" << endl;
        outf << "Hotel Cost:\t\t " << fixed << setprecision(2) << Booking::hotelCost << endl;
        outf << "Travel Cost:\t\t " << fixed << setprecision(2) << Cabs::cabCost << endl;
        outf << "________________________________________" << endl;
        outf << "Total Charge:\t\t " << fixed << setprecision(2) << Booking::hotelCost + Cabs::cabCost << endl;
        outf << "________________________________________" << endl;
        outf << "----------------THANK YOU---------------" << endl;
        outf << "--------------COME AGAIN :)-------------" << endl;
        outf.close();
    }
    void showBill()
    {
        ifstream inf("recipt.txt");
        if (!inf)
        {
            cout << "File Opening Error!" << endl;
        }
        while (!inf.eof())
        {
            inf.getline(All, 999);
            cout << All << endl;
        }
        inf.close();
    }
};
void menu()
{
    int mainChoice;
    int choice;
    int gotoChoice;
    cout << "\t\t*     ZinnZo Travels     *\n"
         << endl;
    cout << "-----------------------Main Menu-------------------------" << endl;

    cout << "\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;

    cout << "\t|\t1. Customer Management \t\t|" << endl;
    cout << "\t|\t2. Cabs Management     \t\t|" << endl;
    cout << "\t|\t3. Booking Management  \t\t|" << endl;
    cout << "\t|\t4. Charges & Bill      \t\t|" << endl;
    cout << "\t|\t5. Exit               \t \t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\nEnter your choice: ";
    cin >> mainChoice;
    system("CLS");
    Customers a2;
    Cabs a3;
    Booking a4;
    Charges a5;
    switch (mainChoice)
    {
    case 1:
    {
        cout << "--------Customers--------\n"
             << endl;
        cout << "1. Enter New Customer" << endl;
        cout << "2. See Old Customers" << endl;
        cin >> choice;
        if (choice == 1)
        {
            a2.getDetails();
        }
        else if (choice == 2)
        {
            a2.showDetails();
        }
        else
        {
            cout << "Invalid Input! Going back to Previous Menu\n Please Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
        cout << "'\nPress 1 to Redirect Main Menu:";
        cin >> gotoChoice;
        system("CLS");
        if (gotoChoice == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
        break;
    }
    case 2:
    {
        a3.cabsDetails();
        break;
    }
    case 3:
    {
        cout << "-->Book a luxary hotel using the  system!<--" << endl;
        a4.hotels();
        break;
    }
    case 4:
    {
        cout << "-->Get Your Recipt <--" << endl;
        a5.printBill();
        cout << "Your recipt is already printed you can get it from file path\n"
             << endl;
        cout << "To display the your reciept in the screen, Enter 1: or Enter another key to go back to Main Menu: ";
        cin >> gotoChoice;
        if (gotoChoice == 1)
        {
            system("CLS");
            a5.showBill();
            cout << "\nPress 1 to redirect to Main Menu: ";
            cin >> gotoChoice;
            system("CLS");
            if (gotoChoice == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else
        {
            system("CLS");
            menu();
        }
        break;
    }
    case 5:
    {
        cout << "--Good Bye--" << endl;
        // exit(0);
        Sleep(999);
        system("CLS");
        menu();
        break;
    }
    default:
    {
        cout << "Invalid Input! Going back to Previous Menu\n Please Wait!" << endl;
        Sleep(1100);
        system("CLS");
        menu();
    }
    }
}
int main()
{
    system("CLS");
    manageMenu startObject;

    return 0;
}