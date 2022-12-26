#include <iostream>
using namespace std;

int main()
{
//--- Execute the program from input.txt and output file
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int row, col;

    cin >> row >> col;

    //----- First Program of Pattern  //rectangel
    cout << "Program to make rectangle " << endl;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    //------ Second program of pattern // blank rectangel
    cout << "Program to make blank rectangel " << endl;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            i == 0 || i == row - 1 || j == 0 || j == col - 1 ? cout << " * " : cout << "   ";
        }
        cout << endl;
    }

    //------ Third program of pattern  //oposite triangle
    cout << "Program to make oposite triangle " << endl;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = i; j < row; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    //------ Fourth program of pattern  //Half Pyramid After 180*C rotation
    cout << "Program to make Half Pyramid After 180*C rotation" << endl;
    for (size_t i = 1; i <= row; i++)
    {
        for (size_t j = 1; j <= row; j++)
        {
            j <= row - i ? cout << "   " : cout << " * ";
        }
        cout << endl;
    }

    //-----Fifth program Half Pyramid Using Numbers
    cout << "Program to make Half  Pyramid Using Numbers" << endl;

    for (size_t i = 1; i <= row; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << " " << i << " ";
        }
        cout << endl;
    }

    //----- 6th Floyd's Triangle
    cout << "Program to make Floyd's Triangle" << endl;
    int count = 1;
    for (size_t i = 1; i <= row; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << " " << count << " ";
            count++;
        }
        cout << endl;
    }

    //----Butterfly pattern
    cout << "Program to make Butterfly pattern" << endl;
    for (size_t i = 1; i <= row * 2; i++)
    {
        if (i == row)
        {
            continue;
        }
        if (i < row)
        {
            for (size_t k = 1; k <= row; k++)
            {
                k <= i ? cout << "* " : cout << "  ";
            }
            for (size_t k = 1; k <= row; k++)
            {
                k <= row - i ? cout << "  " : cout << "* ";
            }
        }
        else
        {
            int currentRow = 0;
            currentRow = row * 2 + 1 - i;
            for (size_t k = 1; k <= row; k++)
            {
                currentRow >= k ? cout << "* " : cout << "  ";
            }
            for (size_t k = 1; k <= row; k++)
            {
                currentRow > row - k ? cout << "* " : cout << "  ";
            }
        }
        cout << endl;
    }

    //-------- Inverted pattern print number
    cout << "Program to make Inverted pattern print number" << endl;
    for (size_t i = 1; i <= row; i++)
    {
        for (size_t j = 1; j <= row + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    //-------0-1 Pattern
    cout << "Program to make 0-1 Pattern" << endl;
    for (size_t i = 1; i < row; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            (i + j) % 2 == 0 ? cout << "1 " : cout << "0 ";
        }
        cout << endl;
    }

    //---Rhombus Pattern
    cout << "Program to make Rhombus Pattern" << endl;
    // First way
    for (size_t i = 1; i <= row; i++)
    {
        for (size_t j = 1; j <= row - i; j++)
        {
            cout << "   ";
        }
        for (size_t j = 1; j <= row; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    // second way
    int space = 0;
    space = row - 1;
    for (size_t i = 1; i <= row; i++)
    {
        for (size_t j = 1; j <= row * 2 - 1; j++)
        {
            if (j <= space)
                cout << "   ";
            if (j >= row)
                cout << " * ";
        }
        space--;
        cout << endl;
    }

    //-----Number Pattern Triangle
    cout << "Program to make Pattern Triangle" << endl;
    for (size_t i = 1; i <= row; i++)
    {
        for (size_t j = 1; j <= row - i; j++)
        {
            cout << "  ";
        }
        for (size_t j = 1; j <= i; j++)
        {
            cout << "  " << j << "  ";
        }

        cout << endl;
    }

    //----Palindromic Pattern
    cout << "Program to make Palindromic Pattern" << endl;
    for (size_t i = 1; i <= row; i++)
    {
        for (size_t j = row; j >= 1; j--)
        {
            j > i ? cout << "   " : cout << " " << j << " ";
        }
        for (size_t j = 2; j <= row; j++)
        {
            j <= i ? cout << " " << j << " " : cout << "   ";
        }
        cout << endl;
    }

    //-----Star Pattern
    cout << "Program to make Star Pattern" << endl;
    for (size_t i = 1; i <= row; i++)
    {
        for (size_t j = 1; j <= row - i; j++)
        {
            cout << "   ";
        }
        for (size_t j = 1; j <= i * 2 - 1; j++)
        {
            cout << " * ";
        }
        // for (size_t j = 1; j <= row * 2 - 1; j++)
        // {
        //     j <= row - i || j >= row + i ? cout << "   " : cout << " * ";
        // }
        cout << endl;
    }

    for (size_t i = row; i >= 1; i--)
    {
        if (i == row)
        {
            continue;
        }
        for (size_t j = 1; j <= row - i; j++)
        {
            cout << "   ";
        }
        for (size_t j = 1; j <= i * 2 - 1; j++)
        {
            cout << " * ";
        }

        cout << endl;
    }

    //----Zig-Zag Pattern
    cout << "Program to make Zig-Zag Pattern" << endl;
    for (size_t i = 1; i <= 3; i++)
    {
        for (size_t j = 1; j <= col; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}