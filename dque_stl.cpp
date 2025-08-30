#include <iostream>
#include <deque>
using namespace std;

int main (){
     deque<int> d;
     d.push_back(5);
     d.push_front(4);
     cout <<"printing the element of deque "<<endl;
    for(int i =0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
     cout <<endl;
      cout <<"first element is  "<<d.at(0)<<endl;

      cout<<"frount element is "<<d.front()<<endl;
      cout<<"last element is "<<d.back()<<endl;

    cout <<"empty or not "<<d.empty()<<endl;
    cout <<"before pop  "<<endl;
    for(int i =0;i<d.size();i++){
        cout<<d[i]<<" ";
    }


    cout<<"before erase size "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase size "<<d.size()<<endl;
    
    }