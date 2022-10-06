#include <iostream>

using namespace std;

//Stack and heap are areas that store data
//Stack- an abstract data structure that contains a collection of elements.
//heap- is a data structure that has the form of a tree and that respects the heap property.
//e.g. stack is more like it stores memory like an array while heap is more like it stores memory like a list (tree form)


//When creating a struct, the struct name acts as datatype
struct Vector3
{
    float x, y, z;

    Vector3()
    :x(10), y(11), z(12)
};

int main()
{
    //By default everything is stored in stack
    //To allocate memory in heap you use the key word "new", deals mostly with pointers
    //examples:

    ///Stack
    int value=5;           //This is how you allocate memory in stack
    int Array[5];
    Vector3 vec;           //vec is of type Vector3 and it has vec.x, vec.y, and vec.z

    ///Heap
    int* hVal = new int;    //This is how you allocate memory in heap
    *hVal = 5;

    int * Arr = new int[5];
    Vector3*hvector = new Vector3();      //hvector is a pointer of type Vector3


    return 0;
}
