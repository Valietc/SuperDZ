#include <iostream>
#include <vector>
using namespace std;

bool proverka(char strk[], int len) {

    vector <int> skobka_v_num(len);

    int type_1 = 0;
    int type_2 = 0;




    for (int i = 0; i < len; i++) {
        if (strk[i] == '(') {
            type_1 = type_1 + 1;

            skobka_v_num.at(i) = 1;

        }
        if (strk[i] == ')') {
            type_1 = type_1 - 1;

            skobka_v_num.at(i) = -1;

        }
        if (strk[i] == '[') {
            type_2 = type_2 + 1;

            skobka_v_num.at(i) = 2;

        }
        if (strk[i] == ']') {
            type_2 = type_2 - 1;

            skobka_v_num.at(i) = -2;

        }

    }


    bool check = false;

    if ((type_1 == 0) && (type_2 == 0)) {
        check = true;
    }
    else {
        check = false;
    }


    if (check == true) {


        for (int i = 1; i < len; i++) {
            if ( ( (skobka_v_num.at(i) == -1)&&(skobka_v_num.at(i-1)==2) ) ||
                 ((skobka_v_num.at(i) == 1) && (skobka_v_num.at(i - 1) == -2)) ) {
                check = false;
                break;
            }

        }

    }

    return check;
}


int main()
{

    // возможные варианты посл-сти скобок
    char strk[] = "([()])";
    // char strk[] = "((]))";
   // char strk[] = "(]()[)";
    // char strk[] = "(]()[)";


    cout << proverka(strk , sizeof(strk)) << endl;
    return 0;
}