#include <iostream>



using namespace std;


pair<int*, int> mod_array(int arr[], const int &n) {
    int x;
    int len = 0;



    for (int i = 0; i < n; i++) {
        if (arr[i] > 5) {
            len = len + 1;
        }
    }
    cout << endl;
    cout << endl;
    cout << len << endl;
    int* tmp = new int[len];

    int count = 0;

    for (int i = 0; i < len; i++){
        for (int j = count+1; j < n; j++) {
            if (arr[j] > 5) {
                count = j;
                tmp[i] = arr[j];
                break;
            }
        }

    }
    return { tmp, len };
}


pair<int*, int> dyn_array(int arr[]) {
    int x;
    int len = 1;
    do {
        len++;
        cin >> x;
        int* tmp = new int[len];
        for (int i = 0; i < len - 1; i++) {
            tmp[i] = arr[i];
        }
        tmp[len - 1] = x;



        for (int i = 0; i < len; i++) {
            arr[i] = tmp[i];
        }

        delete[] tmp;
    } while (x != 0);
    return { arr, len };
}


int main() {


    std::pair<int, int> pair_name;



    int arr[100000] = {0};



    auto T = dyn_array(arr);


    for (int i = 0; i < T.second ; i++) {
        cout << *(T.first + i) << ' ';
    }

    auto T_mod = mod_array(T.first, T.second);


    for (int i = 0; i < T_mod.second; i++) {
        cout << *(T_mod.first + i) << ' ';
    }


    return 0;
}