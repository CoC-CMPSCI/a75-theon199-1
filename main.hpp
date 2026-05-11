#ifndef MAIN_HPP
#define MAIN_HPP

// Find the sub string in the original string

#include <iostream>
#include <cstring>
using namespace std;

int finduserstring(char[], int, char[], int);

int finduserstring(char cstr[], int cstrlen, char userstr[], int userlen)
{
    if (userlen == 0)
    {
        return 0;
    }

    if (cstrlen <= 0 || userlen < 0 || userlen > cstrlen)
    {
        return -1;
    }

    for (int i = 0; i <= cstrlen - userlen; i++)
    {
        bool match = true;

        for (int j = 0; j < userlen; j++)
        {
            if (cstr[i + j] != userstr[j])
            {
                match = false;
                break;
            }
        }

        if (match)
        {
            return i;
        }
    }

    return -1;
}

#endif
