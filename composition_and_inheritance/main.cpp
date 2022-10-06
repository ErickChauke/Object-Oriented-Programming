#include <iostream>

using namespace std;

//Composition is in contrast to inheritance, it enables the creation of complex types by
//combining objects (components) of other types, rather than inheriting from a base or parent class.
//To put it simply, composition contains instances of other classes that implement the desired functionality.


// let's make a robot that can walk around and grab things.
//We'll make one robot using inheritance, and another robot using composition:

class Legs
{
  public:
     void WalkAround()
     {
         //... code for walking around goes here...
     }
};

class Arms
{
   public:
      void GrabThings()
      {
          //... code for grabbing things goes here...
      }
};

class InheritanceRobot : public Legs, public Arms
{
  public:
   // WalkAround() and GrabThings() methods are implicitly
   // defined for this class since it inherited those
   // methods from its two superclasses
};

class CompositionRobot
{
  public:
    void WalkAround() {legs.WalkAround();}
    void GrabThings() {arms.GrabThings();}

  private:
     Legs legs;
     Arms arms;
};

int main()
{

    return 0;
}
