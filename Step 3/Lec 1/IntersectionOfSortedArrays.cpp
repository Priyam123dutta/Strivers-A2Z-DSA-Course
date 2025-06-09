#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(vector<int> arr1, vector<int> arr2)
{
    int i = 0, j = 0;
    vector<int> inter;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] == arr2[j])
        {
            if (inter.size() == 0 || inter.back() != arr1[i])
            {
                inter.push_back(arr1[i]);
            }
            i++;
            j++;
        }
        else
        {
            if (arr1[i] < arr2[j])
                i++;
            else
                j++;
        }
    }

    return inter;
}

int main()
{
    int size;
    cout << "Enter 1st Array Size: ";
    cin >> size;
    vector<int> arr1(size);
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter 2nd Array Size: ";
    cin >> size;
    vector<int> arr2(size);
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }

    vector<int> intersection = findIntersection(arr1, arr2);

    cout << "The Intersection of the arrays is: ";
    for (auto i : intersection)
    {
        cout << i << " ";
    }

    return 0;
}