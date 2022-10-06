#include <iostream>
#include <memory>
#include <vector>

using namespace std;

 class Animal
 {
   public:
   Animal(int age, float weight): _age(age), _weight(weight) {}

   virtual void Speak() const { cout << "I don't know how to speak";};
   int getAge() {return _age;}
   float getWeight() { return _weight; }

   //Implemented function

   private:
   int _age;
   float _weight;
 };

 class Dog: public Animal
 {
    public:
    Dog(int age, float weight):Animal(age,weight) {}
    virtual void Speak() const { cout << "Woof"; }
 };

 class Cat: public Animal
 {
   public:
    Cat(int age, float weight):Animal(age,weight) {}
    virtual void Speak() const { cout << "Meeow"; }
 };

 void AnimalChorus(vector<Animal&> animals)
 {
     cout << "cat chorus: ";
     auto cat = animals[0];
     cat->Speak();
     cout << endl;

     cout << "dog chorus: ";
     auto dog = animals[1];
     dog->Speak();
     cout << endl;
 }

int main()
{
    using AnimalRawPtr = Animal*;
    using AnimalSharedPtr = shared_ptr<Animal>;
    using AnimalUniquePtr = unique_ptr<Animal>;


    /*
    cout << "Shared pointer chorus:" << endl;
    vector<AnimalSharedPtr> animal_shared_ptrs{make_shared<Cat>(3,3), make_shared<Dog>(3,3)};
    AnimalChorus(animal_shared_ptrs); */

    /*
    cout << "Animal chorus:" << endl;
    vector<Animal> animals{Cat{3,3},Dog{3,3}} ;
    AnimalChorus(animals);*/

    cout << "Animal references chorus:" << endl;
    vector<Animal&> animal_refs{Cat{3,3},Dog{3,3}} ;
    AnimalChorus(animal_refs);

    return 0;
}
