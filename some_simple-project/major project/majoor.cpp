#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
void mainMenu();
class Management
{
public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
public:
    static string name, gender;
    int age;
    string address;
    static int cId;
    char arr[100];

    void information()
    {
        cout << "\n Enter the Customer ID: ";
        cin >> cId;
        cout << "\n Enter the Name: ";
        cin >> name;
        cout << "\n Enter the age: ";
        cin >> age;
        cout << "\n Enter the address: ";
        cin >> address;
        cout << "\n Enter the gender: ";
        cin >> gender;

        cout << "\n YOur details are saved with us\n"
             << endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

        for (int i = 0; i < 6; i++)

        {
            cout << (i + 1) << ".Flight to " << flightN[i] << endl;
        }
        cout << "\n Welcome to the Airlines!" << endl;
        cout << "Press the number of the country of which you want to book the fligt:";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "__________________________Welcome to Dubai Emirates__________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the Flights \n"
                 << endl;

            cout << "1. DUB - 498" << endl;
            cout << "\t08-3-2024 8:00AM 10hrs Rs. 14000" << endl;
            cout << "2. DUB - 898" << endl;
            cout << "\t09-3-2024 4:00AM 12hrs Rs. 10000" << endl;
            cout << "3. DUB - 468" << endl;
            cout << "\t09-3-2024 11:00AM 11hrs Rs. 9000" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 14000;
                cout << "\nYou have successfully booked the flight Dub -498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 10000;
                cout << "\nYou have successfully booked the flight Dub -898" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 9000;
                cout << "\nYou have successfully booked the flight Dub -468" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the  previous menu" << endl;
                flights();
            }
            cout << "Press 1 to go back to teh main menu" << endl;

            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 2:
        {
            cout << "__________________________Welcome to Canadian Airlines__________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the Flights \n"
                 << endl;

            cout << "1. CA - 228" << endl;
            cout << "\t08-3-2024 8:00PM 20hrs Rs. 18000" << endl;
            cout << "2. CA - 98" << endl;
            cout << "\t09-3-2024 4:00AM 23hrs Rs. 14000" << endl;
            cout << "3. CA - 48" << endl;
            cout << "\t09-3-2024 12:00AM 21hrs Rs. 12000" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 18000;
                cout << "\nYou have successfully booked the flight CA -228" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 14000;
                cout << "\nYou have successfully booked the flight CA -98" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 12000;
                cout << "\nYou have successfully booked the flight CA -48" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the  previous menu" << endl;
                flights();
            }
            cout << "Press 1 to go back to teh main menu" << endl;

            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 3:
        {
            cout << "__________________________Welcome to UK Airways__________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the Flights \n"
                 << endl;

            cout << "1. UK - 708" << endl;
            cout << "\t08-3-2024 10:00AM 20hrs Rs. 22000" << endl;
            cout << "2. UK - 98" << endl;
            cout << "\t09-3-2024 6:00PM 22hrs Rs. 18000" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 22000;
                cout << "\nYou have successfully booked the flight UK -708" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 18000;
                cout << "\nYou have successfully booked the flight UK -98" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else
            {
                cout << "Invalid input , shifting to the  previous menu" << endl;
                flights();
            }
            cout << "Press 1 to go back to teh main menu" << endl;

            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 4:
        {
            cout << "__________________________Welcome to USA Airways__________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the Flights \n"
                 << endl;

            cout << "1. USA - 78" << endl;
            cout << "\t08-3-2024 9:00AM 19hrs Rs. 16000" << endl;
            cout << "2. USA - 908" << endl;
            cout << "\t09-3-2024 5:00PM 20hrs Rs. 18000" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 16000;
                cout << "\nYou have successfully booked the flight USA -78" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 18000;
                cout << "\nYou have successfully booked the flight USA -908" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else
            {
                cout << "Invalid input , shifting to the  previous menu" << endl;
                flights();
            }
            cout << "Press 1 to go back to teh main menu" << endl;

            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 5:
        {
            cout << "__________________________Welcome to Australian Airways__________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the Flights \n"
                 << endl;

            cout << "1. AUS - 33" << endl;
            cout << "\t010-3-2024 11:00AM 20hrs Rs. 25000" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 25000;
                cout << "\nYou have successfully booked the flight AUS -33" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else
            {
                cout << "Invalid input , shifting to the  previous menu" << endl;
                flights();
            }
            cout << "Press 1 to go back to teh main menu" << endl;

            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 6:
        {

            cout << "__________________________Welcome to European Airlines__________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the Flights \n"
                 << endl;

            cout << "1. EU - 20" << endl;
            cout << "\t08-3-2024 7:00AM 36hrs Rs. 15000" << endl;
            cout << "2. EU - 18" << endl;
            cout << "\t09-3-2024 11:00AM 28hrs Rs. 12500" << endl;
            cout << "3. EU - 38" << endl;
            cout << "\t09-3-2024 4:00PM 40hrs Rs. 11000" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 15000;
                cout << "\nYou have successfully booked the flight EU -20" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 12500;
                cout << "\nYou have successfully booked the flight EU -18" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 11000;
                cout << "\nYou have successfully booked the flight EU -38" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the  previous menu" << endl;
                flights();
            }
            cout << "Press 1 to go back to teh main menu" << endl;

            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        default:
        {
            cout << "Invalid input , shifting to the main menu! " << endl;
            mainMenu();
            break;
        }
        }
    }
};
float registration::charges;
int registration::choice;

class ticket : public registration, Details

{
public:
    void Bill()
    {
        string destinaton = "";
        ofstream outf("records.txt");
        {
            outf << "______________Xyz airlines_____________" << endl;
            outf << "______________Ticket____________" << endl;
            outf << "_______________________________________" << endl;

            outf << "Customer ID: " << Details::cId << endl;
            outf << "Customer Name: " << Details::name << endl;
            outf << "Customer Gender: " << Details::gender << endl;
            outf << "\tDescription" << endl
                 << endl;

            if (registration::choice == 1)
            {
                destinaton = "Dubai";
            }
            else if (registration::choice == 2)
            {
                destinaton = "Canada";
            }
            else if (registration::choice == 3)
            {
                destinaton = "UK";
            }
            else if (registration::choice == 4)
            {
                destinaton = "USA";
            }
            else if (registration::choice == 5)
            {
                destinaton = "Australia";
            }
            else if (registration::choice == 6)
            {
                destinaton = "Europe";
            }
            outf << "Destination\t\t" << destinaton << endl;
            outf << "Flight cost : \t\t" << registration::charges << endl;
        }
        outf.close();
    }
    void disBill()
    {
        ifstream ifs("records.txt");
        {
            if (ifs)
            {
                cout << "File error!" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};
void mainMenu()
{
    int iChoice;
    int sChoice;
    int back;

    cout << "\t                       PETER Airlines         \n " << endl;
    cout << "\t                         Main Menu                          \n " << endl;

    cout << "\t_____________________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;

    cout << "\t\t Press 1 to add the Customer Details    \t" << endl;
    cout << "\t\t Press 2 for Flight Registration        \t" << endl;
    cout << "\t\t Press 3 for Ticket and Charges         \t" << endl;
    cout << "\t\t Press 4 to exit                        \t" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t_____________________________________________________________" << endl;

    cout << "Enter the choice" << endl;
    cin >> iChoice;

    Details d;
    registration r;
    ticket t;

    switch (iChoice)
    {
    case 1:
    {
        cout << "____________Customers____________\n"
             << endl;
        d.information();
        cout << "Press 1 to go back to Main menu " << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }

    case 2:
    {
        cout << "____________Book a flight using this system____________\n"
             << endl;
        r.flights();
        break;
    }
    case 3:
    {
        cout << "____________GET YOUR TICKET____________\n"
             << endl;
        t.Bill();
        cout << "Your ticket is printed, you can collect it \n"
             << endl;
        cout << "Press 1 to display you ticket ";
        cin >> back;

        if (back == 1)
        {
            t.disBill();
            cout << "Press 1 to go back to main menu";
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 4:
    {
        cout << "\n\n\t__________Thank You_________" << endl;
        break;
    }
    default:
    {
        cout << "Invalid Input, Please Try Again!\n"
             << endl;
        mainMenu();
        break;
    }
    }
}

int main()
{
    Management Mobj;
    return 0;
}