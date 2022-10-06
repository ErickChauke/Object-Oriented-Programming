#include <iostream>

using namespace std;

class house{

   private:                                      //Acess specifiers are private, protected, and public
   ///Member variables                           //by default the access specifier is private. Anything under private can't be accessed outside the class
   int length=0; int breadth=0;

   public:                                       //Under public everything is accessible inside and outside the class.
   ///Member functions
   //Access data outside class using this function
   void setData(int x, int y)
   {   length=x;
       breadth=y;  }

   //calculate area
   void area()
   { cout << "area=" << length*breadth << endl; }

   protected:     //Protected can be accessed only through enharitance

};

int main()
{

    house h1;               //House-1, access through object
    h1.setData(500, 600);  //take values to class
    h1.area();             //calculate area

    house h2;               //House-2, access through object
    h2.setData(700, 600);  //take values to class
    h2.area();             //calculate area

    return 0;
}
