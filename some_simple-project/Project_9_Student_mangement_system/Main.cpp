#include <iostream>
#include <conio.h>

using namespace std;
class Node
{
public:
    int roll_no;
    string name;
    float marks, percent;
    Node *next_Add;
};
class Linked_List
{
public:
    Node *head = NULL;
    int r;
    string n;
    float m;
    void Insert()
    {
        int r;
        string n;
        float m;
        cout << "\n\t\t\t\t\t\t\tEnter Your RollNo: ";
        cin >> r;
        cout << "\n\t\t\t\t\t\t\tEnter Your Name: ";
        cin >> n;
        cout << "\n\t\t\t\t\t\t\tEnter Your Marks: ";
        cin >> m;
        Node *new_node = new Node;
        new_node->roll_no = r;
        new_node->name = n;
        new_node->marks = m;
        new_node->percent = m / 100 * 100;
        new_node->next_Add = NULL;
        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next_Add != NULL)
            {
                ptr = ptr->next_Add;
            }
            ptr->next_Add = new_node;
        }
        cout << "\n\n\t\t\t\t\t New Node inserted successfully" << endl;
    }
    void Search()
    {
        if (head == NULL)
        {
            cout << "\n\n\t\t\t\t Linked_List is empty" << endl;
        }
        else
        {
            int r, found = 0;
            cout << "\n\n\t\t\t\tEnter RollNo for Search: ";
            cin >> r;
            Node *ptr = head;
            while (ptr != NULL)
            {
                if (r = ptr->roll_no)
                {
                    cout << "\n\n\t\t\t RollNo : " << ptr->roll_no << endl;
                    cout << "\n\n\t\t\t Name   : " << ptr->name << endl;
                    cout << "\n\n\t\t\t Marks  : " << ptr->marks << endl;
                    cout << "\n\n\t\t\t Per %  : " << ptr->percent << endl;
                    found++;
                }
                ptr = ptr->next_Add;
            }
            if (found == 0)
            {
                cout << "\n\n\t\t\tSearch RollNo. " << r << " Can't Found" << endl;
            }
        }
    }
    void count()
    {
        if (head == NULL)
        {
            cout << "\n\n Linked List is Empty..." << endl;
        }
        else
        {
            int c = 0;
            Node *ptr = head;
            while (ptr != NULL)
            {
                c++;
                ptr = ptr->next_Add;
            }
            cout << "\n\n\tTotal Number of Nodes : " << c << endl;
        }
    }
    void Update()
    {
        if (head == NULL)
        {
            cout << "\n\n\t\t\t\t Linked_List is empty" << endl;
        }
        else
        {
            int r, found = 0;
            cout << "\n\n\t\t\t\tEnter RollNo for Updation: ";
            cin >> r;
            Node *ptr = head;
            while (ptr != NULL)
            {
                if (r = ptr->roll_no)
                {
                    cout << "\n\t\t\t\t\t\t\tEnter New Your RollNo: ";
                    cin >> ptr->roll_no;
                    cout << "\n\t\t\t\t\t\t\tEnter Your Name: ";
                    cin >> ptr->name;
                    cout << "\n\t\t\t\t\t\t\tEnter Your Marks: ";
                    cin >> ptr->marks;
                    ptr->percent = ptr->marks / 100 * 100;
                    cout << "\n\t\t\t\t\t\t Recorded Updated Sucessfully " << endl;

                    found++;
                }
                ptr = ptr->next_Add;
            }
            if (found == 0)
            {
                cout << "\n\n\t\t\tUpdate RollNo. " << r << " Can't Found" << endl;
            }
        }
    }
    void Delete()
    {
        if (head == NULL)
        {
            cout << "\n\n\t\t\t\t Linked_List is empty" << endl;
        }
        else
        {
            int r, found = 0;
            cout << "\n\n\t\t\t\tEnter RollNo for Deletion : ";
            cin >> r;
            if (r == head->roll_no)
            {
                Node *ptr = head;
                head = head->next_Add;
                cout << "\n\t Record deleted Sucessfully" << endl;
                found++;
                delete ptr;
            }
            else
            {
                Node *pre = head;
                Node *ptr = head->next_Add;
                while (ptr != NULL)
                {
                    if (r == ptr->roll_no)
                    {
                        pre->next_Add = ptr->next_Add;

                        cout << "\n\t Record deleted Sucessfully" << endl;
                        found++;
                        delete ptr;
                        break;
                    }
                    pre = ptr;
                    ptr = ptr->next_Add;
                }
            }
            if (found == 0)
            {
                cout << "\n\n\t\t\tDelete RollNo. " << r << " Can't Found" << endl;
            }
        }
    }
    void show()
    {
        if (head == NULL)
        {
            cout << "\n\n\t\t\t\t Linked_List is empty" << endl;
        }
        else
        {

            Node *ptr = head;
            while (ptr != NULL)
            {

                cout << "\n\n\t\t\t RollNo : " << ptr->roll_no << endl;
                cout << "\n\n\t\t\t Name   : " << ptr->name << endl;
                cout << "\n\n\t\t\t Marks  : " << ptr->marks << endl;
                cout << "\n\n\t\t\t Per %  : " << ptr->percent << endl;

                ptr = ptr->next_Add;
            }
        }
    }
};
int main()
{
    Linked_List obj;
    int choice;
p:
    system("CLS");
    cout << "\n\n\t\t\t\t\t\t 1.Insert Record" << endl;
    cout << "\n\n\t\t\t\t\t\t 2.Search Record" << endl;
    cout << "\n\n\t\t\t\t\t\t 3.Count Nodes" << endl;
    cout << "\n\n\t\t\t\t\t\t 4.Update Record" << endl;
    cout << "\n\n\t\t\t\t\t\t 5.Delete Record" << endl;
    cout << "\n\n\t\t\t\t\t\t 6.Show All Record" << endl;
    cout << "\n\n\t\t\t\t\t\t 7.Exit" << endl;

    cout << "\n\n\t\t\t\t\t\t Your Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        system("CLs");
        obj.Insert();
        break;
    case 2:
        system("CLs");
        obj.Search();
        break;
    case 3:
        system("CLs");
        obj.count();
        break;
    case 4:
        system("CLs");
        obj.Update();
        break;
    case 5:
        system("CLs");
        obj.Delete();
        break;
    case 6:
        system("CLs");
        obj.show();
        break;
    case 7:
        exit(0);

    default:
        cout << "\n\n\t\t\t\t\t\tInvalid Choice....Please Try Again! " << endl;
    }
    getch();
    goto p;

    return 0;
}