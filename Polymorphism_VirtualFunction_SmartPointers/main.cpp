#include <iostream>
#include <memory>
#include <vector>

using namespace std;

 class Animal                       //This is the base class
 {
   public:
   Animal(int age, float weight): _age(age), _weight(weight) {}

   virtual void Speak() const { cout << "I don't know how to speak";};  //Constructor of base class is virtual, this means that the show constructor function when is shared amongst
   int getAge() {return _age;}                                          //parent and children the program will execute the show constructor of a child given its address
   float getWeight() { return _weight; }

   //Implemented function

   private:
   int _age;
   float _weight;
 };

 class Dog: public Animal         //Dog class inheriting from Animal
 {
    public:
    Dog(int age, float weight):Animal(age,weight) {}
    virtual void Speak() const { cout << "Woof"; }
 };

 class Cat: public Animal        //Cat class inheriting from Animal
 {
   public:
    Cat(int age, float weight):Animal(age,weight) {}
    virtual void Speak() const { cout << "Meeow"; }
 };

 void AnimalChorus(vector<shared_ptr<Animal> > animal_shared_ptrs) //the vector comtains the addresses of the child classes'constructors
 {
     cout << "cat chorus: ";
     auto cat = animal_shared_ptrs[0]; //getting the address of Cat child class constructor, similar to ptr = new Cat{3, 3} when ptr=cat.
     cat->Speak();                     //Using the address of constructor in Cat child class to print the correct show constructor of many.
     cout << endl;

     cout << "dog chorus: ";
     auto dog = animal_shared_ptrs[1];   //getting the address of Dog child class, similar to ptr = new Dog{3, 3} when ptr=dog.
     dog->Speak();                       //Using the address of constructor in Dog child class to print the correct show constructor of many.
     cout << endl;
 }

int main()
{
    using AnimalRawPtr = Animal*;
    using AnimalSharedPtr = shared_ptr<Animal>;
    using AnimalUniquePtr = unique_ptr<Animal>;

    cout << "Shared pointer chorus:" << endl;
    vector<AnimalSharedPtr> animal_shared_ptrs{make_shared<Cat>(3,3), make_shared<Dog>(3,3)};
    AnimalChorus(animal_shared_ptrs);

    return 0;
}


/*
      Option 2
      cout << "Shared pointer chorus:" << endl;
      vector<AnimalSharedPtr> animal_shared_ptrs{make_shared<Cat>(3,3),
      make_shared<Dog>(3,3)};
      AnimalChorus(animal_shared_ptrs);

      Option 3
      cout << "Animal chorus:" << endl;
      vector<Animal> animals{Cat{3,3},Dog{3,3}} ;
      AnimalChorus(animals);

      Option 4
      cout << "Animal references chorus:" << endl;
      vector<Animal&> animal_refs{Cat{3,3},Dog{3,3}} ;
      AnimalChorus(animal_refs);

      Option 5 - Challenge
      cout << "Unique pointer chorus:" << endl;
      vector<AnimalUniquePtr> animal_unique_ptrs;
     // can you populate a vector with unique_ptrs?
    */

/*
//Option2 will work as expected
//Option1, will not work as expected, because raw pointer is used and this will promote memory leak
//Option3, will work but not as expected because the memory is not dynamically allocated. This will have an effect on object lifetime.
//Option4, will work but will also have disadvantage on objects lifetime
//In option 5 you can populated vector with unique_ptrs but with an exception that they have their owners of the underlying pointers
*/
//
//
//
//
//
