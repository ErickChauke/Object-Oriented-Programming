#include <iostream>

using namespace std;

///Polymorphism
//Polymorphism in OOPs is inseparable and an essential concept of every object-oriented programming language.
//An object or reference basically can take multiple forms in different instances. As the word suggests,
//‘poly’ means ‘many’ and ‘morph’ points at ‘forms’; thus, polymorphism as a whole would mean
//‘a property of having many forms.’


//*Polymorphism allows you to call a function on many different objects
// since they all inherit from the same class.
//*It is like using the same function and having many different outcomes.

class Enemy
{
   protected:
       int attackPower;
   public :
    void setAttackPower(int a)            //setter
    {attackPower=a;}

};

class Ninja : public Enemy
{
   public:
       void attack()
       {cout << "I am a ninja, ninja chop! -" << attackPower << endl; }
};

class Monster: public Enemy
{ public:
    void attack()
    {cout << "monster must eat you!!! -" << attackPower << endl;}
};

int main()
{
    Ninja ninjaObj;
    Monster monsterObj;

    Enemy *enemy1 = &ninjaObj;               //pointer objects
    Enemy *enemy2 = &monsterObj;

    enemy1->setAttackPower(29);
    enemy2->setAttackPower(99);

    ninjaObj.attack();                            //the objects are now part of parent class
    monsterObj.attack();

    return 0;
}
