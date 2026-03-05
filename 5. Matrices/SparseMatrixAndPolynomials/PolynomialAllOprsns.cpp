#include<iostream>
#include<cmath>
using namespace std;

class Term {
public:
    int coefficient;
    int expo;
};

class Polynomial {
private:
    int n;
    Term *t;
public:
    Polynomial() { 
        n = 0; 
        t = nullptr; 
    }
    
    Polynomial(int n) {
        this->n = n;
        t = new Term[this->n];
    }

    Polynomial(const Polynomial &p) {
        n = p.n;
        if (n > 0) {
            t = new Term[n];
            for (int i = 0; i < n; i++) t[i] = p.t[i];
        } else {
            t = nullptr;
        }
    }

    Polynomial& operator=(const Polynomial &p) {
        if (this != &p) {
            delete[] t;
            n = p.n;
            t = new Term[n];
            for (int i = 0; i < n; i++) t[i] = p.t[i];
        }
        return *this;
    }

    ~Polynomial() {
        delete[] t;
    }

    Polynomial operator+(Polynomial p);
    friend istream & operator>>(istream &is, Polynomial &p);
    friend ostream & operator<<(ostream &os, Polynomial &p);
};

Polynomial Polynomial::operator+(Polynomial p) {
    int i = 0, j = 0, k = 0;
    Polynomial res(n + p.n);

    while (i < n && j < p.n) {
        if (t[i].expo > p.t[j].expo)
            res.t[k++] = t[i++];
        else if (t[i].expo < p.t[j].expo)
            res.t[k++] = p.t[j++];
        else {
            res.t[k].expo = t[i].expo;
            res.t[k++].coefficient = t[i++].coefficient + p.t[j++].coefficient;
        }
    }
    for (; i < n; i++) res.t[k++] = t[i];
    for (; j < p.n; j++) res.t[k++] = p.t[j];
    
    res.n = k;
    return res;
}

istream & operator>>(istream &is, Polynomial &p) {
    cout << "Enter the number of non-zero terms: ";
    is >> p.n;
    
    delete[] p.t; 
    p.t = new Term[p.n];
    
    for (int i = 0; i < p.n; i++) {
        cout << "Enter coefficient and exponent for term " << i + 1 << ": ";
        is >> p.t[i].coefficient >> p.t[i].expo;
    }
    return is;
}

ostream & operator<<(ostream &os, Polynomial &p) {
    if (p.n == 0) {
        os << "0";
        return os;
    }
    for (int i = 0; i < p.n; i++) {
        os << p.t[i].coefficient << "x^" << p.t[i].expo;
        if (i < p.n - 1) os << " + ";
    }
    os << endl;
    return os;
}

int main() {
    Polynomial p1, p2, p3;
    
    cin >> p1;
    cin >> p2;
    
    p3 = p1 + p2;
    
    cout << "\nResultant Polynomial:" << endl;
    cout << p3;

    return 0;
}