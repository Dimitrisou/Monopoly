#include "card.h"
#include<string>
// TODO: Implement here the methods of Card, CardMove, and CardMoney
Card::Card(int id,string text)
{
    this->id = id;
    this->text = text;
}

int Card::getId()
{
    return id;
}

string Card::getText()
{
    return text;
}

CardMove::CardMove(int id, string text, int location):Card(id, text)
{
    this->location = location;
}

CardMoney::CardMoney(int id, string text, int amount):Card(id, text)
{
    this->amount = amount;
}

void CardMove::cardAction(Bank* bank, Player* player)
{
    player->setLocation(location);
}

void CardMoney::cardAction(Bank *bank,Player *player)
{
    if(amount < 0){
        bank->giveMoneyToFreePark((-1)*amount);
        player->giveMoneyToPlayer(amount);
    }
    else{
        player->giveMoneyToPlayer(amount);
        bank->takeMoneyFromBank(amount);
    }
}


