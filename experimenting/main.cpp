#include <iostream>

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
}
