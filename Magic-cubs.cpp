#include <iostream>
#include <cmath>
#define SIZE 1000
using namespace std;

bool isPerfectSquare(int x)
{
    if (x >= 0)
    {
        int sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

int goie(int size)
{
    //Make num
    int num[SIZE];
    for (int i = 1; i < SIZE; i++)
    {
        num[i] = i;
    }
    //define mile
    int mile[SIZE];
    //set other line
    for (int numbrs = 1;; numbrs++)
    {
        bool flag = false;
        bool flag2 = false;
        for (int mill = 1; mill <= size; mill++)
        {
            if (mile[mill] == mile[0])
            {
                flag2 = true;
            }
            if (mile[mill] != mile[0])
            {
                if (isPerfectSquare(mile[mill] + num[numbrs]))
                {
                    mile[mill] = num[numbrs];
                    flag = true;
                    break;
                }
            }
        }
        if (flag2 == true)
        {
            for (int mill = 1; mill <= size; mill++)
            {
                if (mile[mill] == mile[0])
                {
                    mile[mill] = num[numbrs];
                    break;
                }
            }
        }
        if ((flag == false) && (flag2 == false))
        {
            return numbrs - 1;
        }
    }
}
int main()
{
    int size;
    cin >> size;
    cout << goie(size);
}