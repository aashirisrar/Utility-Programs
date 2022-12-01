#include <iostream>
using namespace std;

int lenOfArr(char s[]);
void toUpper(char s[], int sizeOfArr);
void toLower(char s[], int sizeOfArr);
bool isUpper(char a);
bool isLower(char a);
bool isAlpha(char a);
bool isDigit(char a);
bool isAlphaNum(char a);
bool isSpace(char a);

int main()
{
    char arr[50];

    cout << "Enter a character array:";
    cin.getline(arr, 50);

    int sizeOfArr = lenOfArr(arr);

    // lowercase
    toLower(arr, sizeOfArr);

    cout << "The lowercase array is:";

    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << arr[i];
    }

    // uppercase
    toUpper(arr, sizeOfArr);

    cout << "\nThe uppercase array is:";

    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << arr[i];
    }

    // is upper
    char s = 'F';
    cout << endl
         << isUpper(s);

    // is lower
    s = 'f';
    cout << endl
         << isLower(s);

    // is alpha
    s = 'F';
    cout << endl
         << isAlpha(s);

    // is digit
    s = '1';
    cout << endl
         << isDigit(s);

    // is alpha numeric
    s = 'F';
    cout << endl
         << isAlphaNum(s);

    // is space
    s = ' ';
    cout << endl
         << isSpace(s);

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

void toUpper(char s[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
    }
}

void toLower(char s[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }
}

bool isUpper(char a)
{
    if (a >= 65 && a <= 90)
    {
        return 1;
    }

    return 0;
}

bool isLower(char a)
{
    if (a >= 97 && a <= 122)
    {
        return 1;
    }

    return 0;
}

bool isAlpha(char a)
{
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
    {
        return 1;
    }

    return 0;
}

bool isDigit(char a)
{
    if (a >= 48 && a <= 57)
    {
        return 1;
    }

    return 0;
}

bool isAlphaNum(char a)
{
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122) || (a >= 48 && a <= 57))
    {
        return 1;
    }

    return 0;
}

bool isSpace(char a)
{
    if (a == 32)
    {
        return 1;
    }

    return 0;
}