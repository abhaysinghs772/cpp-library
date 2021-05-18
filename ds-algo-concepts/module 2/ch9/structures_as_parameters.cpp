#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

// int area(struct rectangle r1) // call by value

int area(struct rectangle &r1) // call by refrence
{
    return (r1.length * r1.breadth);
}

// call by address example
struct polygon
{
    int length;
    int breadth;
};

void changeLength(struct polygon *ptr, int l)
{
    // (*ptr).length= l;

    // can also be written as
    ptr->length = l;
}

// passing a structure (which contains array inside it) by call by value
struct test
{
    int arr[5];
    int n;
};

void func(struct test t1, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << t1.arr[i] << " ";
    }
}

int main()
{

    struct rectangle r = {10, 15};
    printf("%d\n", area(r)); // -> in c

    cout << area(r) << endl;

    // call by address example
    struct polygon a = {20, 40};
    changeLength(&a, 50);
    cout << a.length << endl;

    struct test t = {{1, 2, 3, 4, 5}, 5};
    func(t,5);

    return 0;
}