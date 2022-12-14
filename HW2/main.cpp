#include <iostream>





int main() {

    // Задание 1. Змейкой

    const int M = 4;
    const int N = 3;
    int array_zmeya[M][N];

    int count = 1;

    for (int i = 0; i < M; i++) {
        if (i % 2 == 0) {

            for (int j = 0; j < N; j++) {
                array_zmeya[i][j] = count;
                count = count + 1;
            }
        }
        else {
            for (int j = N-1; j >= 0; j--) {
                array_zmeya[i][j] = count;
                count = count + 1;
            }
        }

    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << array_zmeya[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;


    // Задание 2. Умножение матриц


    const int columns_1 = 3;
    const int raws_1 = 3;
    int umnozh_1[raws_1][columns_1];

    for (int i = 0; i < raws_1; i++) {
        for (int j = 0; j < columns_1; j++) {
            umnozh_1[i][j] = rand();
        }
    }

    const int columns_2 = 3;
    const int raws_2 = 3;
    int umnozh_2[raws_2][columns_2];

    for (int i = 0; i < raws_2; i++) {
        for (int j = 0; j < columns_2; j++) {
            umnozh_2[i][j] = rand();
        }
    }

    const int columns_rez = columns_2;
    const int raws_rez = raws_1;
    int array_rez[raws_rez][columns_rez];


    for (int i = 0; i < raws_rez; i++) {
        for (int j = 0; j < columns_rez; j++) {
            array_rez[i][j] = 0;
        }
    }

    for (int i = 0; i < raws_1; i++) {
        for (int j = 0; j < columns_2; j++) {
            for (int k = 0; k < columns_1; k++) {
                array_rez[i][j] = array_rez[i][j] + umnozh_1[i][k] * umnozh_2[k][j];
            }
        }
    }


    for (int i = 0; i < raws_rez; i++) {
        for (int j = 0; j < columns_rez; j++) {
            std::cout << array_rez[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;



    // Задание 3. По спирали


    const int n = 4;

    int spiral[n][n];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            spiral[i][j] = 0;
        }
    }




    int Count = 1;



    int first_column = 0;
    int first_raw = 0;
    int last_column = n;
    int last_raw = n;



    while (Count <= n * n) {


        for (int i = first_column; i < last_column; i++) {
            spiral[first_raw][i] = Count;
            Count++;
        }



        first_raw++;

        for (int i = first_raw; i < last_raw; i++) {
            spiral[i][last_column-1] = Count;
            Count++;
        }

        Count--;

        last_column--;


        for (int i = last_column; i >= first_column; i--) {
            spiral[last_raw-1][i] = Count;
            Count++;
        }
        Count--;

        last_raw--;



        for (int i = last_raw; i >= first_raw; i--) {
            spiral[i][first_column] = Count;
            Count++;
        }

        first_column++;

    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << spiral[i][j] << ' ';
        }
        std::cout << std::endl;
    }


    return 0;
}
