#include <iostream>

using namespace std;
enum suits
{
    clubs,
    diamonds,
    heart,
    spades
};
enum
{
    jack = 11, // face cards
    queen = 12,
    king = 13,
    ace = 14
};

struct card
{
    int number; // 2 to 10 jack,queen,king,ace
    int suit;   // clubs,dimonds,heart,spades
};
int main()
{
    card temp, chosen, prize; // defines card
    int position;
    card card1 = {7, clubs};
    cout << "Card 1 is 7 of clubs\n";
    card card2 = {jack, heart};
    cout << "Card 2 is jack of heart\n";
    card card3 = {ace, spades};
    cout << "card 3 is ace of spades\n";
    prize = card3; // copy this card to remember it
    cout << "I'm swapping card 1 and card 3\n";
    temp = card3;
    card3 = card1;
    card1 = temp;
    cout << "I'm swapping card 1 and card 2\n";
    temp = card2;
    card2 = card1;
    card1 = temp;
    cout << "I'm swapping card 2 and card 3\n";
    temp = card3;
    card3 = card2;
    card2 = temp;
    cout << "I'm swapping card 1 and card 2\n";
    temp = card2;
    card2 = card1;
    card1 = temp;

    cout << "Now , where (1,2 and 3) is the ace of spades?";
    cin >> position;
    switch (position)
    {
    case 1:
    {
        chosen = card1;
        break;
    }
    case 2:
    {
        chosen = card2;
        break;
    }
    case 3:
    {
        chosen = card3;
        break;
    }
    }
    if (chosen.number == prize.number && chosen.suit == prize.suit) // compars card
    {
        cout << "That's right ! You won:)\n ";
    }
    else
        cout << "sorry you lose :(";
    return 0;
}