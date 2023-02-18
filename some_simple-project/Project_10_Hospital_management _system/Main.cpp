
// Header files

#include <iostream>
#include <conio.h> //gives us some function like getch(),clrscr();
#include <fstream>
#include <cstring> // works with the string , some of its function are strlen,strcpy,strcat,strcmp etc;
#include <windows.h>
#include <string.h>
#include <iomanip> // gives us some function like setw(),setprecision(),etc...
using namespace std;

/////////////////////////////////////////////////////////////class person details
class person
{
protected:
    string gender, phone;
    char name[50], address[40];
    int age;
    char All[1100];

public:
    void getDetails()
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Name: ";
        cin >> name;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Address: ";
        cin >> address;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Gender: ";
        cin >> gender;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Phone Number: ";
        cin >> phone;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Age: ";
        cin >> age;
    }
};

///////////////////////////////////////////class doctor
class Doctor : public person
{
protected:
    char language[50], specialty[50];
    string certificate, education, joinedDate;
    bool option = true;
    char DocName[50];

public:
    void getDoctors()
    {
        //  while (option)
        //{
        system("cls");
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Enter Doctor Details " << endl;
        getDetails();
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Specialty: ";
        cin >> specialty;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Joined Date: ";
        cin >> joinedDate;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Education: ";
        cin >> education;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Certificate: ";
        cin >> certificate;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Language: ";
        cin >> language;
        ofstream getdoctor("Doctor_Details.txt", ios::app);
        getdoctor << name << "\n"
                  << address << "\n"
                  << gender << "\n"
                  << phone << "\n"
                  << age << "\n"
                  << specialty << "\n"
                  << joinedDate << "\n"
                  << education << "\n"
                  << certificate << "\n"
                  << language << endl
                  << endl;
        cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Doctor Details Saved :) " << endl;
    }
    void showDoctor()
    {
        fstream getdoctor("Doctor_Details.txt");

        if (getdoctor.is_open())
        {
            getdoctor.seekp(0, ios::end);
            size_t size = getdoctor.tellg();
            if (size == 0)
            {

                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t NO Details to Show!" << endl;
            }
        }
        else
        {

            cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Our Respected Doctors Detail ^_^ " << endl;

            if (!getdoctor)
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Sorry! No Any Doctor Details To Display :(" << endl;
            }

            else
            {
                getdoctor >> name >> address >> gender >> phone >> age >> specialty >> joinedDate >> education >> certificate >> language;

                while (!getdoctor.eof())
                {
                    cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Name: " << name
                         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Address: " << address
                         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Gender: " << gender
                         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Phone: " << phone
                         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Age: " << age
                         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Specialty: " << specialty
                         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Joined Date: " << joinedDate
                         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Education: " << education
                         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Certificate: " << certificate
                         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Language: " << language << endl
                         << endl;
                    getdoctor >> name >> address >> gender >> phone >> age >> specialty >> joinedDate >> education >> certificate >> language;
                }
                getdoctor.close();
            }
        }
    }
    void deleteDoc() // Deleting doctor details *********************************************
    {
        int token = 0;
        fstream getdoctor;
        fstream UpdatedDeleteDoc;
        getdoctor.open("Doctor_Details.txt", ios::in);
        if (getdoctor.is_open())
        {
            getdoctor.seekp(0, ios::end);
            size_t size = getdoctor.tellg();
            if (size == 0)
            {

                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You Can't Delete Doctors" << endl;
            }
        }
        else
        {

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Delete Doctors " << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Enter the Doctor Name to Delete: ";
            cin >> DocName;

            if (!getdoctor.is_open())
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t File Doesn't Exist! " << endl;
            }
            else
            {
                UpdatedDeleteDoc.open("DoctorDetails.txt", ios::out | ios::app);
                getdoctor >> name >> address >> gender >> phone >> age >> specialty >> joinedDate >> education >> certificate >> language;
                while (!getdoctor.eof())
                {
                    if (strcmp(name, DocName) == 0)
                    {
                        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Doctor Details Deleted Successfully!" << endl;
                        token++;
                    }
                    else
                    {
                        UpdatedDeleteDoc << name << " "
                                         << address << " "
                                         << gender << " "
                                         << phone << " "
                                         << age << " "
                                         << specialty << " "
                                         << joinedDate << " "
                                         << education << " "
                                         << certificate << " "
                                         << language << endl
                                         << endl;
                    }
                    getdoctor >> name >> address >> gender >> phone >> age >> specialty >> joinedDate >> education >> certificate >> language;
                }
                getdoctor.close();
                UpdatedDeleteDoc.close();
                remove("Doctor_Details.txt");
                rename("DoctorDetails.txt", "Doctor_Details.txt");
                if (token == 0)
                {
                    cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Doctor Details NOt Found!" << endl;
                }
            }
        }
    }
};
/////////////////////////////////////////class patient
class Patient : public person
{
protected:
    string admittedDate, birthDate, sickness, checkedBy;
    char id[10], PatID[10];

public:
    void getPatient()
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Enter Patient Details Details " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ID: ";
        cin >> id;
        getDetails();
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Admitted Date: ";
        cin >> admittedDate;

        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Birthday: ";
        cin >> birthDate;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Sickness: ";
        cin >> sickness;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Checked By: ";
        cin >> checkedBy;

        ofstream getpatient("Patient_Details.txt", ios::app);
        getpatient << id << "\n "
                   << name << "\n "
                   << address << "\n "
                   << gender << "\n "
                   << phone << "\n "
                   << age << "\n "
                   << admittedDate << "\n "
                   << birthDate << "\n "
                   << sickness << "\n "
                   << checkedBy << "\n "
                   << endl
                   << endl;
        getpatient.close();
        cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Patient Details Saved :) " << endl;
    }
    void showPatient()
    {
        cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Patient Detail ^_^ " << endl;
        ifstream getpatient("Patient_Details.txt");
        if (!getpatient)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  Sorry No Any Patient Details To Display :(" << endl;
        }
        else
        {
            while (!getpatient.eof())
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Id: " << id
                     << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Name: " << name
                     << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Address: " << address
                     << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Gender: " << gender
                     << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Phone: " << phone
                     << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Age: " << age
                     << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t AdmittedDate: " << admittedDate
                     << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t BirthDate: " << birthDate
                     << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Sickness: " << sickness
                     << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Checked By: " << checkedBy << endl
                     << endl;
                getpatient >> id >> name >> address >> gender >> phone >> age >> admittedDate >> birthDate >> sickness >> checkedBy;
            }
            getpatient.close();
        }
    }
    void deletePatient() // Deleting Patient details *********************************************
    {
        int token = 0;
        fstream getpatient;
        fstream UpdatedDeletePat;
        getpatient.open("Patient_Details.txt", ios::in);
        if (getpatient.is_open())
        {
            getpatient.seekp(0, ios::end);
            size_t size = getpatient.tellg();
            if (size == 0)
            {

                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You Can't Delete Patients" << endl;
            }
        }
        else
        {

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Delete Patient " << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Enter the Patient ID to Delete: ";
            cin >> PatID;

            if (!getpatient.is_open())
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t File Doesn't Exist! " << endl;
            }
            else
            {
                UpdatedDeletePat.open("PatientDetails.txt", ios::out | ios::app);
                getpatient >> id >> name >> address >> gender >> phone >> age >> admittedDate >> birthDate >> sickness >> checkedBy;
                while (!getpatient.eof())
                {
                    if (strcmp(id, PatID) == 0)
                    {
                        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Patient Details Deleted Successfully!" << endl;
                        token++;
                    }
                    else
                    {
                        UpdatedDeletePat << id << " "
                                         << name << " "
                                         << address << " "
                                         << gender << " "
                                         << phone << " "
                                         << age << " "
                                         << admittedDate << " "
                                         << birthDate << " "
                                         << sickness << " "
                                         << checkedBy << " " << endl
                                         << endl;
                    }
                    getpatient >> name >> address >> gender >> phone >> age >> admittedDate >> birthDate >> sickness >> checkedBy;
                }
                getpatient.close();
                UpdatedDeletePat.close();
                remove("Patient_Details.txt");
                rename("PatientDetails.txt", "Patient_Details.txt");
                if (token == 0)
                {
                    cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Patient Details NOt Found!" << endl;
                }
            }
        }
    }
};


// new class services
class Service{
    protected:
    char serviceName[50];
    char serviceDescription[255];



};
////////////////////////////////////////////////Appintment
/*class Appointment
{
protected:
    int cusBillNumber, cusAge;
    string cusName, cusGender;
    char All[999];

public:
    void showAppointments()
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Please Enter YOur Details! " << endl;// i will have to make a new software to put data in appitments list
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tBillNumber: ";
        cin >> cusBillNumber;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tCustomer Name: ";
        cin >> cusName;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tCustomer Age: ";
        cin >> cusAge;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tCustomer Gender: ";
        cin >> cusGender;
    }
};*/
int main()
{

    system("cls");
    system("color bf");
    int choice;
    char select, All[1100];

    ///////////for doctor
    Doctor doctor;

    ///////////for patient
    Patient patient;

    cout << "\n\n\n\n\n"
         << endl;
    cout << setw(180) << "__________________________________________________________" << endl;
    cout << setw(180) << "|                                                        |" << endl;
    cout << setw(180) << "|                                                        |" << endl;
    cout << setw(180) << "|~~~~~~~~~~ WELCOME TO BIRAT CENTER HOSPITAL ~~~~~~~~~~~~|" << endl;
    cout << setw(180) << "|              Main Road Near Center Mall                |" << endl;
    cout << setw(180) << "|               We Are Here 24*7 For You                 |" << endl;
    cout << setw(180) << "|                                                        |" << endl;
    cout << setw(180) << "|________________________________________________________|" << endl;
    cout << "\n\n\n\n\t"
         << setw(185) << " \u001b[34;1m            ---- MENU ----                        \u001b[0m" << endl;

    cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 1. See Appintment " << endl
         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 2. Doctors" << endl
         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 3. Patient" << endl
         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 4. Manage Services" << endl
         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 5. Manage Staff" << endl
         << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 6. Exit" << endl;

    cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\u001b[33;1m Select What You Want to Do ^_^ : \u001b[0m";

    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        system("cls");

        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press Any Key To GoTo Main Menu :) " << endl;
        getch();
        main();
    }
    case 2:
    {
    b:
        system("cls");
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 1. Add New Doctor" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 2. See Old Doctors" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 3. Remove Doctors" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 4. Press 4 ToGo Main Menu " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Enter YOur Choice: ";
        cin >> choice;
        if (choice == 1)
        {
        m:
            do
            {
                doctor.getDoctors();
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Add More!....Press Y or N " << endl;
                cin >> select;
                if (select == 'y')
                {
                    system("cls");
                    goto m;
                }
            } while (select == 'y');

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Going Back To Previous Menu...Wait 5 sec " << endl;
            Sleep(5000);
            system("cls");
            goto b;
        }
        else if (choice == 2)
        {
            system("cls");
            doctor.showDoctor();
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press Any Key ToGo Back ! " << endl;
            getch();
            system("cls");
            goto b;
        }
        else if (choice == 3)
        {
            system("cls");
            doctor.showDoctor();
            doctor.deleteDoc();
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press Any Key ToGo Back ! " << endl;
            getch();
            system("cls");
            goto b;
        }
        else if (choice == 4)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Going Back To Main Menu...Wait 5 sec " << endl;
            Sleep(5000);
            system("cls");
            main();
        }
        else
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Invalid Choice :(";
        }

        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press Any Key To GoTo Main Menu :) " << endl;
        getch();
        main();
    }
    case 3:
    {
    c:
        system("cls");
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 1. Add New Patients" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 2. See Old Patients" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 3. Remove Patients" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 4. Press 4 ToGo Main Menu " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  Enter YOur Choice: ";
        cin >> choice;
        if (choice == 1)
        {
        n:
            do
            {
                patient.getPatient();
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Add More!....Press Y or N " << endl;
                cin >> select;
                if (select == 'y')
                {
                    system("cls");
                    goto n;
                }
                else
                {
                    cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Going Back To Previous Menu...Wait 5 sec " << endl;
                    Sleep(5000);
                    system("cls");
                    goto c;
                }
            } while (select == 'y');
        }
        else if (choice == 2)
        {
            system("cls");
            patient.showPatient();
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press Any Key ToGo Back ! " << endl;
            getch();
            system("cls");
            goto c;
        }
        else if (choice == 3)
        {
            system("cls");
            patient.showPatient();

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press Any Key ToGo Back ! " << endl;
            getch();
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Going Back To Previous Menu...Wait 5 sec " << endl;
            Sleep(5000);
            system("cls");
            goto c;
        }
        else if (choice == 4)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Going Back To Main Menu...Wait 5 sec " << endl;
            Sleep(5000);
            system("cls");
            main();
        }
        else
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Invalid Choice :( ";
        }

        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press Any Key To GoTo Main Menu :) " << endl;
        getch();
        system("cls");
        main();
    }
    case 4:
    {
        int choice;
        system("cls");
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t \u001b[1mOUR SERVICES\u001b[0m ";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 1.OUR SERVICES ";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 2.ADD SERVICES ";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Select: ";
        cin>>choice;
        if(choice ==1){

        }else if(choice ==2) {
            cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Add Service: ";
            cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ";

        }
        


        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press Any Key To GoTo Main Menu :) " << endl;
        getch();
        main();
    }
    case 5:
    {
        system("cls");

        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press Any Key To GoTo Main Menu :) " << endl;
        getch();
        main();
    }
    case 6:
    {
        system("cls");

        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press Any Key To GoTo Main Menu :) " << endl;
        getch();
        main();
    }
    default:
    {
        system("cls");

        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press Any Key To GoTo Main Menu :) " << endl;
        getch();
        main();
    }
    }

    return 0;
}