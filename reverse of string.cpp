#include <iostream>
#include <string.h>
using namespace std;

void revstr(char *str1) {

    int i, len, temp;
    len = strlen(str1);


    for(i = 0;i < len/2;i++)
    {
    
    
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
}
int main()
{
    char str[50] = "Priyanka";
    cout << "Before reversing the string: " << str;

    revstr(str);
    
    cout<< "\nAfter reversing the string: " << str;
    return 0;
}

