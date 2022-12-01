#include <iostream>
#include <cstring>
using namespace std;

int lenOfArr(char s[]);
bool equalsCase(char ar1[], int size1, char ar2[], int size2);

int main()
{
    char arr1[10];
    char arr2[10];

    cout << "Enter a character array:";
    cin.getline(arr1, 10);

    cout << "Enter the second array:";
    cin.getline(arr2, 10);

    int lenOfArr1 = lenOfArr(arr1);
    int lenOfArr2 = lenOfArr(arr2);

    bool equal = equalsCase(arr1, lenOfArr1, arr2, lenOfArr2);

    if (equal)
    {
        cout << "Both of strings are equal!";
    }
    else
    {
        cout << "Both strings are not equal";
    }

    return 0;
}

int lenOfArr(char s[])
{
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

bool equalsCase(char ar1[], int size1, char ar2[], int size2)
{
    if (size1 == size2)
    {
        for (int i = 0; i < size1; i++)
        {
            toupper(ar1[i]);
            toupper(ar2[i]);
        }

        int count;

        for (int i = 0; i < size1; i++)
        {
            if (ar1[i] == ar2[i])
            {
                count++;
            }

            if (count == size1)
            {
                return 1;
            }
        }
    }
    else
    {
        return 0;
    }

    return 0;
}