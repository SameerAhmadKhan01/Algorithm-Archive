#include <iostream>
using namespace std;

class SymMat {
private:
    int *A;
    int n;

    // index formula for lower triangular (1-based)
    int index(int i, int j) {
        return i*(i-1)/2 + (j-1);
    }

public:
    SymMat(int n = 10) {
        this->n = n;
        A = new int[n*(n+1)/2]{0};
    }

    ~SymMat() {
        delete[] A;
    }

    void Set(int i, int j, int value);
    int Get(int i, int j);
    void Display();
};

/* Set value */
void SymMat::Set(int i, int j, int value) {
    if (i >= j)
        A[index(i, j)] = value;
    else
        A[index(j, i)] = value;   // symmetry
}

/* Get value */
int SymMat::Get(int i, int j) {
    if (i >= j)
        return A[index(i, j)];
    else
        return A[index(j, i)];
}

/* Display matrix */
void SymMat::Display() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << Get(i, j) << " ";
        }
        cout << endl;
    }
}

/* Driver code */
int main() {
    SymMat m(4);

    m.Set(1,1,1);
    m.Set(2,1,2);
    m.Set(2,2,3);
    m.Set(3,1,4);
    m.Set(3,2,5);
    m.Set(3,3,6);
    m.Set(4,1,7);
    m.Set(4,2,8);
    m.Set(4,3,9);
    m.Set(4,4,10);

    cout << "Symmetric Matrix:\n";
    m.Display();

    return 0;
}
