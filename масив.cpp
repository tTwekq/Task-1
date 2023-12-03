#include <iostream>
#include <unordered_set>
using namespace std;


void rearrangeArray(int A[], int size) {
    int dodatniCslhi = 0;

    
    for (int i = 0; i < size; ++i) {
        
        if (A[i] > 0) {
            swap(A[i], A[dodatniCslhi]);
            dodatniCslhi++;
        }
    }
}

int main() {
    setlocale(0, ".1251");

    int A[]{ 8, -5, 10, -2 };
    int size = sizeof(A) / sizeof(int);

    unordered_set<int> uniqueNumbers;

    for (int i = 0; i < size; i++) {
        uniqueNumbers.insert(A[i]);
    }

    cout << "Кількість різних чисел: " << uniqueNumbers.size() << endl;

    
    rearrangeArray(A, size);

    
    for (int i = 0; i < size; ++i) {
        cout << A[i] << endl;
    }

    return 0;
}