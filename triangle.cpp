#include <iostream>
#include <stdlib.h>
#include <cmath>
#include "triangle.h"
using namespace std;

Triangle::Triangle()
{
        int size = 1;
        char bordchar = '#';
        char fillchar = '*';
}

Triangle::Triangle(int s, char bdchar, char fchar)
{
        if (s<1)
        {
                s = 1;
        }
        else if (s >39)
        {
                s = 39;
        }
        size = s;
        bordchar = bdchar;
        fillchar = fchar;
}

int Triangle::GetSize()
{
        return size;
}
int Triangle::Perimeter()
{
        int peri;
        peri = size * 3;
        return peri;
}

double Triangle::Area()
{
        double triarea;
        triarea = (sqrt(3) / 4) *size*size;
        return triarea;
}
void Triangle::Grow()
{
        int growsize;
        growsize = size + 1;
        if (growsize > 39)
        {
                growsize = size;
        }
        size = growsize;
}

void Triangle::Shrink()
{
        int shrksize;
        shrksize = size - 1;
        if (shrksize < 1)
        {
                shrksize = size;
        }
        size = shrksize;
}
void Triangle::SetBorder(char bdchar)
{
        if (bdchar >126 || bdchar<33)
        {
                bordchar = 35;
        }
        else
        {
                bordchar = bdchar;
        }
}

void Triangle::SetFill(char fchar)
{
        if (fchar>126 || fchar<33)
        {
                fillchar = 42;
        }
        else
        {
                fillchar = fchar;
        }

}
void Triangle::Draw()
{
        int i, k;
        for (i = 0; i < size; i++)
        {
                //cout << "\n";
                for (k = 0; k < size - i; k++)
                {
                        cout << " ";
                }
                for (k = 0; k <= i; k++)
                {
                        if (i == size - 1)
                        {
                                cout << bordchar << " ";
                        }
                        else if ((k == 0) || (k == i))
                        {
                                cout << bordchar << " ";
                        }
                        else
                        {
                                cout << fillchar << " ";
                        }
                }
                cout << endl;

        }

}
void Triangle::Summary()
{
                cout << "The length of triangle is:" << size << "\n";
                cout << "The perimeter of triangle is:" << Perimeter() << "\n";
                cout << "The area of triangle is:" << Area() << "\n";
                cout << "Here is the triangle:" << "\n"; Draw();

        }
