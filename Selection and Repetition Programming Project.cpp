

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFileA;
    inputFileA.open("file1.txt");
    string namesa;
    int usednamesa = 0;
    int counting = 0;

    ifstream inputFileB;
    inputFileB.open("file2.txt");
    string namesb;
    int usednamesb = 0;

    int Nametype = 1;

    while (counting++ <= 13)
    {
        if (counting == 0 || counting == 3 || counting == 5 || counting == 7 || counting == 9 || counting == 11 || counting == 13)
        {
            cout << endl;
            if (namesa < namesb || usednamesb == 6)
                Nametype = 1;
            else if (namesb < namesa && usednamesb < 6)
                Nametype = 2;
        }        
        
        if (Nametype == 1)
        {
            inputFileA >> namesa;
            cout << namesa << " ";
            usednamesa = usednamesa + 1;
        }

        if (Nametype == 2)
        {
            inputFileB >> namesb;
            cout << namesb << " ";
            usednamesb = usednamesb + 1;
        }
    }
}

