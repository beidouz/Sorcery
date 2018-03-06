#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "owner.h"

using namespace std;

Owner::Owner() {
  this->initializeCards();
}

void Owner::addOpponent(Owner* opp) {
  //this->opponent = opp;
  cout << "Opponent Added" << endl;
}

void Owner::rename(string name) {
  //this->name = name;
  cout << name << "Renamed" << endl;
}

Owner::~Owner() {
  //delete this->opponent;
}

void Owner::initializeCards() {
  //this->cardList.insert(pair<string, Card*>("Air Elemental", new Monster("Air Elemental", 0, 1, 1, None, nullptr, 0)));
  //this->cardList.insert(pair<string, Card*>("Earth Elemental", new Monster("Earth Elemental", 3, 4, 4, None, nullptr, 0)));
  //this->cardList.insert(pair<string, Card*>("Fire Elemental", new Monster("Fire Elemental", 2, 2, 2, OpponentSummon, new SingleTarget(0, -1), 0)));
  //this->cardList.insert(pair<string, Card*>("Potion Seller", new Monster("Potion Seller", 2, 1, 3, EndOfTurn, new AOE(0, 1, 1), 0)))
  //this->cardList.insert(pair<string, Card*>("Novice Pyromancer", new Monster("Novice Pyromancer", 1, 0, 1, None, new SingleTarget(0, -1), 1)));
  //this->cardList.insert(pair<string, Card*>("Apprentice Summoner", new Monster("Apprentice Summoner", 1, 1, 1, None, new Summon("Air Elemental", 1), 1)));
  //this->cardList.insert(pair<string, Card*>("Master Summoner", new Monster("Master Summoner", 3, 2, 2, None, new Summon("Air Elemental", 3), 2)));
  //this->cardList.insert(pair<string, Card*>("Banish", new Spell("Banish", 2, new Banish()));
  //this->cardList.insert(pair<string, Card*>("Unsummon", new Spell("Unsummon", 1, new Unsummon()));
  //this->cardList.insert(pair<string, Card*>("Recharge", new Spell("Recharge", 1, new Recharge(3)));
  //this->cardList.insert(pair<string, Card*>("Disenchant", new Spell("Disenchant", 1, new Disenchant(1)));
  //this->cardList.insert(pair<string, Card*>("Raise Dead", new Spell("RaiseDead", 1, new RaiseDead(1)));
  //this->cardList.insert(pair<string, Card*>("Blizzard", new Spell("Blizzard", 3, new AOE(0, 2, 2)));
  //this->cardList.insert(pair<string, Card*>("Giant Strength", new Buff("Giant Strength", 1, 2, 2)));
  //this->cardList.insert(pair<string, Card*>("Magic Fatigue", new MagicFatigue("Magic Fatigue", 0, 2)));
  //this->cardList.insert(pair<string, Card*>("Silence", new Silence("Silence", 1));
  //this->cardList.insert(pair<string, Card*>("Dark Ritual", new Ritual("Dark Ritual", 0, 5, StartOfTurn, new ChangeMagic(1), 1)));
  //this->cardList.insert(pair<string, Card*>("Aura of Power", new Ritual("Aura of Power", 1, 4, YouSummon, new SingleTarget(1, 1), 1)));
  //this->cardList.insert(pair<string, Card*>("Standstill", new Ritual("Standstill", 3, 4, AnySummon, new StandStill(), 2)));
  cout << "Cards Initialized" << endl;
}

void Owner::initializeDeck(istream &deck){
  cout << "Deck Initialized" << endl;
}

void Owner::play(int handIndex) {
  //this->Hand.play(handIndex, this, this->opponent);
  cout << handIndex << "Card in hand played" << endl;
}

void Owner::play(int handIndex, int player, int fieldIndex) {
  //if (fieldIndex > 4 || handIndex >= this->hand.size() || fieldIndex < 0 || handIndex < 0) {
    //throw 2;
  //} else {
    //if (player == 1) {
      //this->Hand.play(handIndex, this, fieldIndex);
    //} else if (player == 2) {
      //this->Hand.play(handIndex, this->opponent, fieldIndex);
    //} else {
      //throw 1;
    //}
  //}
  cout << handIndex << "Card in hand played on player" << player << "'s " << fieldIndex << "Monster" << endl;
}

void Owner::attack(int fieldIndex) {
  //if (fieldIndex > 4 || fieldIndex < 0) {
    //throw 2;
  //} else {
    //int damage = this->field.getMonster(fieldIndex).getAttack();
    //this->opponent->getAttacked(damage);
  //}
  cout << fieldIndex << "Monster attacks directly" << endl;
}

void Owner::attack(int myfieldIndex, int oppfieldIndex) {
  //if (fieldIndex > 4 || fieldIndex < 0) {
    //throw 2;
  //} else {
    //int damageDealt = this->field.getMonster(myfieldIndex).getAttack();
    //int damageTaken = this->opponent->getMonster(oppfieldIndex).getAttack();
    //this->field.getMonster(myfieldIndex).getAttacked(damageTaken);
    //this->opponent->field.getMonster(oppfieldIndex).getAttacked(damageDealt);
  //}
  cout << myfieldIndex << "Monster attacks" << oppfieldIndex << "Monster" << endl;
}

void Owner::getAttacked(int damage) {
  //this->life -= damage;
  cout << damage << "Taken" << endl;
}

void Owner::getAttacked(int fieldIndex, int damage) {
  //if (fieldIndex > 4 || fieldIndex < 0) {
    //throw 2;
  //} else {
    //this->field.getMonster(fieldIndex).getAttacked(damage);
  //}
  cout << damage << "Damage taken by" << fieldIndex << "Monster" << endl;
}

void Owner::discard(int handIndex) {
  //if (handIndex >= this->hand.size() || handIndex < 0) {
    //throw 2;
  //} else {
    //this->hand.discard(handIndex);
  //}
  cout << "Discarded" << handIndex << "card in Hand" << endl;
}

void Owner::draw(int numCards) {
  //while (numCards > 0) {
    //try {
      //Card* cardDrawn = this->deck.draw();
      //if (this->hand.size() == 5) {
        //delete cardDrawn;
      //} else {
        //this->hand.addCard(cardDrawn);
      //}
    //} catch "No cards left in deck" {
      //cerr << "No cards left in deck";
      //break;
    //}
  //}
  cout << "Drew" << numCards << "Cards" << endl;
}

void Owner::shuffle() {
  cout << "Deck Shuffled" << endl;
}

void Owner::endTurn() {
  cout << "Turn Ended" << endl;
}

void Owner::getMonster(int fieldIndex) {        //RETURN CARD*
  //return this->field.getMonster(fieldIndex);
}

//void Owner::summon(Monster* monster) {
  //if (this->field.size() == 5) {
    //cerr << "5 monsters on the field" << endl;
  //} else {
    //this->field.summon(monster);
  //}
//}

void Owner::activateRitual() {
  //this->field.activateRitual(this, this->opponent);
  cout << "Ritual Activated" << endl;
}

void Owner::use(int fieldIndex) {
  //if (fieldIndex > 4 || fieldIndex < 0) {
    //cerr << "Invalid Arguement" << endl;
  //} else {
    //try {
      //this->field.getMonster(fieldIndex).activate(this, this->opponent);
    //} catch "no ability" {
      //if (fieldIndex == 0) {
        //cerr << fieldIndex << "st monster has no abilty" << endl;
      //} else if (fieldIndex == 1) {
        //cerr << fieldIndex << "nd monster has no ability" << endl;
      //} else {
        //cerr << fieldIndex << "th monster has no ability" << endl;
      //}
   // }
  //}
  cout << "Use" << fieldIndex << "Monster's Ability" << endl;
}

void Owner::use(int fieldIndex, int player, int targFieldIndex) {
  //if (fieldIndex > 4 || fieldIndex < 0 || targFieldIndex > 4 || targetFieldIndex < 0) {
  //cerr << "Invalid Arguement" << endl;
  //} else {
    //if (player == 1) {
      //try {
       //this->field.getMonster(fieldIndex).activate(targFieldIndex, this);
      //} catch "no ability" {
       //if (fieldIndex == 0) {
          //cerr << fieldIndex << "st monster has no abilty" << endl;
        //} else if (fieldIndex == 1) {
          //cerr << fieldIndex << "nd monster has no ability" << endl;
        //} else {
          //cerr << fieldIndex << "th monster has no ability" << endl;
        //}
      //}
    //} else if (player == 2) {
      //try {
       //this->field.getMonster(fieldIndex).activate(targFieldIndex, this->opponent);
      //} catch "no ability" {
       //if (fieldIndex == 0) {
          //cerr << fieldIndex << "st monster has no abilty" << endl;
        //} else if (fieldIndex == 1) {
          //cerr << fieldIndex << "nd monster has no ability" << endl;
        //} else {
          //cerr << fieldIndex << "th monster has no ability" << endl;
        //}
      //}
    //} else {
      //cerr << "Invalid Arguement" << endl;
    //}
  //}
  cout << "Used" << fieldIndex << "Monster Ability on player" << player << "'s " << targFieldIndex << "Monster" << endl;
}

void Owner::board() {
  //cout << this->field;
  cout << "Board" << endl;
}

void Owner::inspect(int fieldIndex) {
  //if (fieldIndex > 4 || fieldIndex < 0) {
    //cerr << "Invalid Arguement" << endl;
  //} else {
    //cout << this->field.getMonster(fieldIndex);
  //}
  cout << "Inspect" << endl;
}

void Owner::seeHand() {
  //cout << this->hand;
  cout << "Hand" << endl;
}

void Owner::magicChange(int change) {
  //this->magicCurr += change;
}

void Owner::magicLimChange(int change) {
  //this->magicLim += change;
}
