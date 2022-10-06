#include <iostream>

using namespace std;

class Rectangle
{  public:
    Rectangle(int b, int h):base_{b}, height_{h}             //constructor //This is a setter in style and only constructors take member initializers
    { }

    int base() const {return base_;}
    int perimiter() const {return((base_+ height_)*2);}

    //...

private:
    int base_;
    int height_;
};

enum Colour {RED, GREEN, BLUE};

class ColourRect : public Rectangle
{
public :
    ColourRect (int b, int h, Colour c): Rectangle{b, h}, colour_{c}       //you can also initialize from fucntions instead of only variables
    { }

    void colour (Colour c)
    {colour_=c; }

    Colour colour() {return colour_;}

private:
    Colour colour_;
};

int main()
{
    Rectangle rect{10, 20};   //uses rectangle's functions
    cout << rect.perimiter();
    cout << rect.base();

    ColourRect colrect{10, 20, GREEN};  //ColourRect inherits Rectangle's functions
    cout << colrect.perimiter();
    cout << colrect.base();

    cout << colrect.colour();  //only defined for ColourRect

    return 0;
}
