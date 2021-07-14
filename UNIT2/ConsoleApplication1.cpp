

#include <iostream>

//типы переменных, задание 1
/*short int a = 5;
int b = 5;
long long c = 1'000'000;
char chLength = 'm';
bool d = true;
float e = 9.87654321f;
double massEarth = 5e24;



int main()
{

}

*/
//-------------------------------------------------------------------------------------------------------------------------
// Перечисление, задание 2, массив задание 3

/*
enum Game
{
    ZNAKX = 'x',
    ZNAK0 ='0',
    EMPTY_POLE = '- ',  // пустые ячейки
    POLE1 = '|'   // границы между ячейками
};


int main()
{
    Game Znaki[2] = { ZNAKX, ZNAK0 };
    Game PoleGame[2] = { POLE, POLE1 };
}

*/
//-------------------------------------------------------------------------------------------------------------------------

//задание 4*
/*
#include <iostream>

enum PlayerMove { ZNAKX = 'x', ZNAK0 = '0' };

struct Game
{
    char defis;
    char slesh;
    char EMPTY_POLE = '-';
    char POLE1 = '|';
    PlayerMove mPlayer1, mPlayer2;
};


int main()
{
 
   
}
*/

//-------------------------------------------------------------------------------------------------------------------------
//задание 5**
//-------------------------------------------------------------------------------------------------------------------------

/*union MyVariantData
{
    int DataInt;
    float DataFloat;
    char DataChar;
};

struct MyData
{
    MyVariantData data;

    unsigned int isInt : 1;
    unsigned int isFloat : 1;
    unsigned int isChar : 1;
};

int main()
{
    MyData var;

    var.data.DataFloat = 77.77f;
    var.isInt = 0;
    var.isFloat = 1; //храним float
    var.isChar = 0;
}
*/




//-------------------------------------------------------------------------------------------------------------------------
//игра в крестики нолики
//-------------------------------------------------------------------------------------------------------------------------



/*
#include <iostream>//стандартная библиотека

using namespace std;



int main()
{
    setlocale(0, "");


    char positions[9] = { '-','-','-','-','-','-','-','-','-', };

    int x;
    int o;

    cout << "Номера клеток:" << endl;
    cout << " 1 " <<'|' << " 2 " << '|' << " 3 " << "|" << endl;
    cout << " 4 " << '|'<< " 5 " << '|' << " 6 " << "|" << endl;
    cout << " 7 " << '|' <<  " 8 " << '|' << " 9 " << "|" << "\n" << endl;


    cout << "Игровое поле (--- пусто):" << endl;
    cout << positions[0] << '|' << positions[1] << '|' << positions[2] << endl;
    cout << positions[3] << '|' << positions[4] << '|' << positions[5] <<  endl;
    cout << positions[6] << '|' << positions[7] << '|' << positions[8] << "\n" << endl;

   for (int o = 0; o <= 9; ++o) {
        cout << "Введите номер клетки, куда ходить  X: ";
        cin >> x;
        positions[x - 1] = 'x';

        cout << positions[0] << '|' << positions[1] << '|' << positions[2] << "|" << endl;
        cout << positions[3] << '|' << positions[4] << '|' << positions[5] << "|" << endl;
        cout << positions[6] << '|' << positions[7] << '|' << positions[8] << "|" << "\n" << endl;



        cout << "Введите номер клетки, куда ходить 0: ";
        cin >> o;
        positions[o - 1] = '0';

        cout << positions[0] << '|' << positions[1] << '|' << positions[2] << "|" << endl;
        cout << positions[3] << '|' << positions[4] << '|' << positions[5] << "|" << endl;
        cout << positions[6] << '|' << positions[7] << '|' << positions[8] << "|" << "\n" << endl;


    }

    system("pause");
    return 0;

    
}
*/