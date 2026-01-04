#include <iostream> 
#include <functional>
#include<algorithm>
using namespace std;


int main(){

    int arr[] = {1,3,5,2,6,10,8,7,9,4};

    sort(arr,arr+10);

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
    


     
    return 0;
}