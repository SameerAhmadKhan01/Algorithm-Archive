#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int length;
    int size;

public:
    // Constructor
    Array(int siz, int len = 0)
    {
        size = siz;
        length = len;
        A = new int[size];
    }

    // Destructor
    ~Array()
    {
        delete[] A;
    }

    void input(int n);
    void display();

    Array Union(Array &b);
    Array Intersection(Array &b);
    Array Difference(Array &b);
};

// Input elements
void Array::input(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element [" << i << "] : ";
        cin >> A[i];
        length++;
    }
}

// Display elements
void Array::display()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << "\t";
    }
    cout << endl;
}

// UNION of two unsorted arrays
Array Array::Union(Array &b)
{
    int i, j, k = 0;
    Array C(size + b.size);

    // Copy elements of first array
    for (i = 0; i < length; i++)
        C.A[k++] = A[i];

    // Add elements of second array if not present
    for (j = 0; j < b.length; j++)
    {
        i = 0;
        while (i < k)
        {
            if (C.A[i] == b.A[j])
                break;
            i++;
        }

        if (i == k)
            C.A[k++] = b.A[j];
    }

    C.length = k;
    return C;
}

// INTERSECTION of two unsorted arrays
Array Array::Intersection(Array &b)
{
    int i, j, k = 0;
    Array C(size + b.size);

    for (i = 0; i < length; i++)
    {
        j = 0;
        while (j < b.length)
        {
            if (A[i] == b.A[j])
                break;
            j++;
        }

        if (j < b.length)
        {
            int x = 0;
            while (x < k)
            {
                if (C.A[x] == A[i])
                    break;
                x++;
            }

            if (x == k)
                C.A[k++] = A[i];
        }
    }

    C.length = k;
    return C;
}

// DIFFERENCE (A - B)
Array Array::Difference(Array &b)
{
    int i, j, k = 0;
    Array C(size + b.size);

    for (i = 0; i < length; i++)
    {
        j = 0;
        while (j < b.length)
        {
            if (A[i] == b.A[j])
                break;
            j++;
        }

        if (j == b.length)
        {
            int x = 0;
            while (x < k)
            {
                if (C.A[x] == A[i])
                    break;
                x++;
            }

            if (x == k)
                C.A[k++] = A[i];
        }
    }

    C.length = k;
    return C;
}

// MAIN FUNCTION
int main()
{
    int len1, len2;

    cout << "Enter number of elements in Array 1 and Array 2:\n";
    cin >> len1 >> len2;

    Array A(20), B(20);

    cout << "\nEnter elements for Array 1:\n";
    A.input(len1);

    cout << "\nEnter elements for Array 2:\n";
    B.input(len2);

    cout << "\nArray 1:\n";
    A.display();

    cout << "\nArray 2:\n";
    B.display();

    Array C(40);

    C = A.Union(B);
    cout << "\nUnion:\n";
    C.display();

    C = A.Intersection(B);
    cout << "\nIntersection:\n";
    C.display();

    C = A.Difference(B);
    cout << "\nDifference (A - B):\n";
    C.display();

    return 0;
}
