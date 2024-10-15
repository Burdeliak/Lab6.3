#include <iostream> 
#include <ctime>
#include <iomanip>
using namespace std;

const int SIZE = 20;  


void COUT(int mas[], int size, int i = 0) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << mas[i] << " ";
    COUT(mas, size, i + 1);
}


int FindMaxEven(int mas[], int size) {
    int maxEven = -1; 

    for (int i = 0; i < size; i++) {
        if (mas[i] % 2 == 0) {  
            if (maxEven == -1 || mas[i] > maxEven) {
                maxEven = mas[i];  
            }
        }
    }

    return maxEven;
}

int main() {
    srand((unsigned)time(0));
    setlocale(LC_CTYPE, "ukr");

    int a[SIZE];

    
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 100;
    }

    cout << "Початковий масив: " << endl;
    COUT(a, SIZE);  

    
    int maxEven = FindMaxEven(a, SIZE);

    
    if (maxEven != -1) {
        cout << "Найбільший парний елемент: " << maxEven << endl;
    }
    else {
        cout << "Парних елементів немає." << endl;
    }

    return 0;
}
