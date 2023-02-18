#include <iostream>

using namespace std;
class market
{
private:
    char name[30];
    float rate;
    float quantity;
    float grossPrice;

public:
    void get()
    {
        cout << "Enter the name of goods :";
        cin >> name;
        cout << "Enter the quantity :";
        cin >> quantity;
        cout << "Enter the Rate";
        cin >> rate;
    }
    void show()
    {
        cout << "Name of goods :", name;
        cout << "Quantity of goods :", quantity;
        cout << "Rate of goods :", rate;
    }
    void total()
    {
        grossPrice = rate * quantity;
        cout << "Total :", grossPrice;
    }
};
int main()
{
    int num, i;
    market item[i];

    cout << "Enter the number of iterms :";
    cin >> num;
    for (i = 1; i < num; i++)
    {
        cout << "Items numbser " << i;
        item[i].get();
    }
    for (i = 1; i < num; i++)
    {
        cout << "Items numbser " << i;
        item[i].show();
    }
    for (i = 1; i < num; i++)
    {
        item[i].total();
    }
    return 0;
}