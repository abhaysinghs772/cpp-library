#include <iostream>
#include <cstdlib>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    /********************* STATIC METHOD OF POINTING TO STRUCTURE *******************/

    // struct rectangle r = {10, 5};
    // cout << r.length << endl;
    // cout << r.breadth;

    // // accessing r using pointer p
    // struct rectangle *p = &r;

    // (*p).length = 15; // type 1 of inialising variable

    // cout << (*p).length << endl; // 15
    // cout << r.length << endl;    // now r's length is 15

    // p->breadth = 20; // 2nd type using arrow operator
    // cout << p->breadth << endl; 
    // cout << r.breadth;


    /********************* DYNAMIC METHOD OF POINTING TO STRUCTURE *******************/

    // 1. in c 

    // struct rectangle *p;
    // p = (struct rectangle*)malloc(sizeof(struct rectangle));
    // p->length = 10;
    // p->breadth = 20;

    // cout<< p->length<< endl;
    // cout<< p->breadth;

    // 2. in c++

    struct rectangle *p;
    p = new struct rectangle;
    p->length= 10;
    p->breadth= 20;

    cout<< p->length<< endl;
    cout<< p->breadth;
    free(p);

    return 0;
}