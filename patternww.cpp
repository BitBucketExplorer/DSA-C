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
    cout << "Enter Two number " << endl;
    cin >> row >> col;

    //----- First Program of Pattern  //rectangel
    /*
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
      */
    //------ Second program of pattern // blank rectangel
    /*
     for (size_t i = 0; i < row; i++)
     {
         for (size_t j = 0; j < col; j++)
         {
             i == 0 || i == row - 1 || j == 0 || j == col - 1 ? cout << " * " : cout << "   ";
         }
         cout << endl;
     }
     */

    //------ Third program of pattern  //oposite triangle
    /*
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = i; j < row; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    */
    //------ Fourth program of pattern  //Half Pyramid After 180*C rotation
    /*
     for (size_t i = 1; i <= row; i++)
     {
         for (size_t j = 1; j <= row; j++)
         {
             j <= row - i ? cout << "   " : cout << " * ";
         }
         cout << endl;
     }
    */
    //-----Fifth program Half Pyramid Using Numbers
    /*
    for (size_t i = 1; i <= row; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << " " << i << " ";
        }
        cout << endl;
    }
    */
    //----- 6th Floyd's Triangle
    /*
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
        */

    //----Butterfly pattern
    /*
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
    */

    //-------- Inverted pattern print number
    /*
     for (size_t i = 1; i <= row; i++)
       {
           for (size_t j = 1; j <= row + 1 - i; j++)
           {
               cout << j << " ";
           }
           cout << endl;
       } */

    return 0;
}