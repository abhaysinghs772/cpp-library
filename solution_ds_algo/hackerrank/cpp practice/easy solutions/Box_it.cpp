#include <bits/stdc++.h>
using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

// Box b1;              // Should set b1.l = b1.b = b1.h = 0;
// Box b2(2, 3, 4);                 // Should set b1.l = 2, b1.b = 3, b1.h = 4;
// b2.getLength();              	// Should return 2
// b2.getBreadth();              // Should return 3
// b2.getheight();	                // Should return 4
// b2.CalculateVolume();                // Should return 24
// bool x = (b1 < b2);	                // Should return true based on the conditions given
// cout<<b2;                // Should print 2 3 4 in order.

class Box
{
private:
    int l, b, h;

public:
    Box(void)
    {
        l = b = h = 0;
    }

    Box(int x, int y, int z)

    {
        l = x;
        b = y;
        h = z;
    }

    Box(const Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    int getLength() { return l; }  // Return box's length
    int getBreadth() { return b; } // Return box's breadth
    int getHeight() { return h; }  //Return box's height
    long long CalculateVolume()    // Return the volume of the box
    {

        return (long long)l * b * h;
    }

    friend bool operator<(Box &A, Box &B)
    {
        if ((A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.b == B.b) && (A.l == B.l)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    friend ostream &operator<<(ostream &out, Box &B)
    {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    };
};

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    // Box b1 ;
    // Box b2(2, 3, 4);
    // b1 = b2 ;
    // // Box b1(2, 3, 4) == Box b1 = b1(2, 3, 4)

    // b2.getLength();
    // b2.getBreadth();
    // b2.getHeight();
    // b2.CalculateVolume();

    check2();

    return 0;
}
