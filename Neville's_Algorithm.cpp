#include <iostream>
#include <windows.h>

// a simple console app using the implementation of Neville's Algorithm
using namespace std;

class al_Nevilles
{
    public:
    float Neville(int T, float x[], float y[], int n)
{

    float final_result;

    for (int j = 1; j < n; j++)
    {
        for (int i = n-1; i >= j ; i--)
        {

            y[i]=(( (T-x[i-j]) * y[i] - (T-x[i]) * y[i-1] ) / (x[i] - x[i-j]));
            cout << "p(" << j-1 << "," << i << ") " << y[i] << endl;

        }

    final_result = y[n-1];

    cout << "The final result of the column " << wynik << endl;
    cout << " " << endl;
    }

}



};

int main()
{
    al_Nevilles algo;
    int choice;
    cout << "Make your own set of data [1] or pick one of the following [2]" << endl;
    cin >> choice;


    switch (choice)
    {
     case 1:
        {
        cout << "Pass the T argument -> p(T)" << endl;
        int T,n; // n is for the amount of points
        cin >> T;
        cout << "You've picked p(" << T << ")" << endl;
        cout << "Set the amount of points " << endl;
        cin >> n;
        float x[n];
        float y[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Set the x argument value " << endl;
            cin >> x[i];
            cout << "Set the y {f{x}} argument value " << endl;
            cin >> y[i];
            system("cls");
        }
        algo.Neville(T,x,y,n);
        }
        break;

        case 2:
            {
            cout << "Choose one of the following sets" << endl;
            cout << "Set [A] p(2)  x{-2,-1,1,3} y{-13,3,5,7}" << endl;
            cout << "Set [B] p(-1) x{-2,0,1} y{-4,2,1}" << endl;
            cout << "Set [C] p(3) x{-7,-2,4,8,13} y{-3,-2,2,6,9}" << endl;
            char sec_choice;
            cin >> sec_choice;
                switch (sec_choice)
                {
                    case 'A':
                        {
                         int T = 2;
                         float x[4]={-2,-1,1,3};
                         float y[4]={-13,3,5,7};
                         int n = 4;
                        algo.Neville(T,x,y,n);
                        }
                        break;
                    case 'B':
                        {
                        int T = -1;
                        float x[3]={-2,0,1};
                        float y[3]={-4,2,1};
                        int n = 3;
                        algo.Neville(T,x,y,n);
                        }
                        break;
                    case 'C':
                        {
                        int T = 3;
                        float x[5]={-7,-2,4,8,13};
                        float y[5]={-3,-2,2,6,9};
                        int n = 5;
                        algo.Neville(T,x,y,n);
                        }
                        break;
                }
            }

        }

    return 0;
}

