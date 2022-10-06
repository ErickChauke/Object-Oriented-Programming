#include <iostream>

using namespace std;

class Bee
{
private :
    static int numOfObjects;
    int totalObjects;

public :

    Bee()
    { totalObjects = ++numOfObjects; }

    void fly(){}
    void buzz(){}
    void honeyBee(){}
    void Andrena(){}


    // returns the total number of
    // existing Bee objects
    static const int getNumberOfBeesInSwarm()
    { return numOfObjects; }

 };

int Bee::numOfObjects=0;

int main()
{
    Bee obj, obj2, obj3, obj4;
    obj.Andrena();
    obj2.buzz();
    obj3.fly();
    obj4.honeyBee();
    cout << "The number of objects is " << obj.getNumberOfBeesInSwarm();
    return 0;
}

/*#include <iostream>

using namespace std;
class Bee
{
public:

    void fly()//everytime a bee is seen flying, number of bees is incremented
    {
        NumberOfBees++;
    }
    void buzz()//everytime a bee is heard buzzing, number of bees is incremented
    {
        NumberOfBees++;
    }

    int getNumberOfBeesInSwarm() const
    {
        return NumberOfBees;
    }
private:
    static int NumberOfBees;

};

int Bee::NumberOfBees=0;



int main()
{
    Bee bee;
    bee.fly();
    cout << bee.getNumberOfBeesInSwarm()<<endl;
    bee.buzz();
    cout << bee.getNumberOfBeesInSwarm()<<endl;


    return 0;
}*/
