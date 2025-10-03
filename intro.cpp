#include <iostream>
using namespace std;

bool search (int arr[][4] , int targat , int n , int m){
     for ( int  i = 0 ; i < 4;  i++){
         for ( int  j = 0 ; j < 3 ;j++){
             if (arr[i ][j]==targat){
                return 1;
             }
         }
     }
     return 0;
}
int main()
{
    int arr[3][4];
for ( int  i = 0 ; i<4; i++){
        for ( int j = 0 ; j< 3;j++){
            cin>>arr[j][i];
        }
    }
    for (int i = 0; i<3;i++){
        for(int j = 0 ; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl ;
    }

 int targat;
 cout<<" enter a  valid targat  value  to search in the array";
 cin>>targat;
 
 if (search(arr,targat,3 ,4)){
    cout <<" find that  element in the  array ";
 }
else{
    cout<<" not find that element in the array ";
}

    /*
    // declaration of 2d array
        int arr[3][4] = { 1, 2, 3, 4,
                          5, 6, 7, 8,
                          9, 10, 11, 12};

    for ( int  i = 0 ; i<4; i++){
        for ( int j = 0 ; j< 3;j++){
            cin>>arr[j][i];
        }
    }
    for (int i = 0; i<3;i++){
        for(int j = 0 ; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl ;
    }
    */
    /*// that  is a  column  wise  input in  the  2d array
    for ( int  i = 0 ; i<4; i++){
        for ( int j = 0 ; j< 3;j++){
            cin>>arr[j][i];
        }
    }
    for (int i = 0; i<3;i++){
        for(int j = 0 ; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl ;
    }
    */

    // that  is   row  wise  input in  the  2d  array
    /* for (int i = 0; i<3;i++){
        for(int j = 0 ; j<4; j++){
            cin>>arr[i][j];
        }
     }


    // print   the array

for (int i = 0; i<3;i++){
        for(int j = 0 ; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl ;
     }

*/

    return 0;
}