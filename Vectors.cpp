#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{

    vector<int> num1(5);
    vector<int> num2(5);
    vector<int> somar(2);
    vector<int> vetor(10);
    vector<int> procurar = {1, 2, 3, 4, 5, 6, 7};
    bool a = 0;

    int menu, num, media, esc, soma;

    do
    {
        cout << "\n1- Numbers sum\t2- Media \t3- sum of the vectors" << endl;
        cout << "\n4- Descending sort\t5- Element searcht 0- Out" << endl;
        cout << "\nChoose the exercice";
        cin >> esc;

        switch (esc)
        {
        case 1:

            cout << "Insert 5 numbers: " << endl;
            for (int i = 0; i < num1.size(); i++)
            {

                cout << "Number" << i + 1 << ": ";
                cin >> num1[i];
            }

            cout << "Numbers you entered: \n"
                 << endl;
            for (int num : num1)
            {
                cout << num1[1] << " ";
            }
            break;
        case 2:

            cout << "Please enter 10 numbers: \n";

            for (int i = 0; i < 10; i++)
            {

                cout << "Number" << i + 1 << ": ";
                cin >> vetor[i];
                soma += vetor[i];
            }

            media = soma / 10;

            cout << media;
            break;
        case 3:

            for (int i = 0; i < num1.size(); i++)
            {
                cout << "Please enter 5 numbers: \n"
                     << i + 1;
                ;
                cin >> num1[i];
                somar[0] += num1[i];
            }

            for (int i = 0; i < num2.size(); i++)
            {
                cout << "Please enter 5 numbers: \n"
                     << i + 1;
                ;
                cin >> num2[i];
                somar[0] += num2[i];
            }
            // Add the two vectors

            cout << "Result of the sum: " << somar[0];
            break;
        case 4:

            break;
        case 5:

            cout << "Choose a number to search in the vector: ";
            cin >> num;

            for (int i = 0; i < procurar.size(); i++)
            {

                if (num == procurar[i])
                {
                    cout << " \nNumber: " << num << " Found in Position "
                         << i << endl;
                    a = 1;
                    break;
                }

                if (a != 1)
                {
                    cout << "\nNumber not found." << endl;
                }
            }

            break;
        }

    }

    while (esc != 0);
}

// not fully done