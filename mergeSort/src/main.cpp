#include <bits/stdc++.h>
using namespace std;

template <typename first, typename second>
std::ostream &operator<<(std::ostream &os, const std::pair<first, second> p)
{
    os << p.first << " " << p.second << "";
    return os;
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i] << " ";
    }
    return os;
}

void merge(vector<int> &v, int low, int mid, int high)
{
    int n2 = mid - low + 1;
    int n1 = high - mid;

    vector<int> left(n1);
    copy(v.begin() + low, v.begin() + mid, left.begin());
    std::cout << left;
    vector<int> right(n2 - 1);
    copy(v.begin() + mid, v.begin() + high, right.begin());
    std::cout << right;
}

void mergeSort(vector<int> &v,int low,int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        mergeSort(v, low, mid);
        mergeSort(v, mid + 1, high);

        merge(v, low, mid, high);
    }
}

int main(int argc, char *argv[])
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    mergeSort(v, 0, 10);
    return 0;
}
