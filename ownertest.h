#ifndef OWNER_H
#define OWNER_H
#include <iostream>
#include <string>
#include <vector>
#include <map>

class Owner {
  //std::map<std::string, Card*> cardList;
  //Owner* opponent;
  //Deck deck;
  //Hand hand;
  //MonsterField field;
  //int life;
  //int magicLim;
  //int magicCurr;
  //std::string name;

 public:
  Owner();
  ~Owner();

  void addOpponent(Owner* opp);

  void rename(std::string name);

  void initializeCards();

  void initializeDeck(std::istream &deck);

  void play(int handIndex);

  void play(int handIndex, int player, int fieldIndex);

  void attack(int fieldIndex);

  void attack(int myfieldIndex, int oppfieldIndex);

  void getAttacked(int damage);

  void getAttacked(int oppfieldIndex, int damage);

  void discard(int handIndex);

  void draw(int numCards);

  void shuffle();

  void endTurn();

  void getMonster(int fieldIndex); //RETURN CARD*

  void activateRitual();

  void use(int fieldIndex);

  void use(int fieldIndex, int player, int targFieldIndex);

  void board();

  void inspect(int fieldIndex);

  void seeHand();

  void magicChange(int change);

  void magicLimChange(int change);

};

#endif
