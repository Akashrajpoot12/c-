#include <iostream>
#include <vector>
using namespace std;

 //   Main function
 
  //    This function is used to test the various functions of vector
  //             like push_back, size, capacity, front, back, pop_back, clear.
int main()
{
    vector<int> a(5, 1);
    cout << "size : " << a.size() << endl;
    cout << "printing  the element of vector a : " << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    // capacity function
    cout << "capacity : " << a.capacity() << endl;

    vector<int> v;
    cout << " size : " << v.size() << endl;

    v.push_back(1);

    cout << "  size : " << v.size() << endl;
    v.push_back(2);

    cout << "  size : " << v.size() << endl;
    v.push_back(3);

    cout << "  size : " << v.size() << endl;
    v.push_back(4);

    cout << "  size : " << v.size() << endl;

    cout << " first element : " << v.front() << endl;

    cout << "last  element : " << v.back() << endl;

    // now  use  the pop_back  function
    cout << "before pop  back size : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }
    v.pop_back();
    cout << "after pop  back size : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }
    // clear function

    cout << " before  clear  size :" << v.size() << endl;
    v.clear();
    cout << " after  clear  size :" << v.size() << endl;
}
