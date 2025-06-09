#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int> arr1, vector<int> arr2)
{
    int i = 0, j = 0, n1 = arr1.size(), n2 = arr2.size();
    vector<int> unique;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unique.size() == 0 || unique.back() != arr1[i])
            {
                unique.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unique.size() == 0 || unique.back() != arr2[j])
            {
                unique.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (unique.back() != arr1[i])
        {
            unique.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (unique.back() != arr2[j])
        {
            unique.push_back(arr2[j]);
        }
        j++;
    }

    return unique;
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

    vector<int> unique = findUnion(arr1, arr2);

    cout << "The Union of the arrays is: ";
    for (auto i : unique)
    {
        cout << i << " ";
    }

    return 0;
}