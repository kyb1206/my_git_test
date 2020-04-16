#include "sorting.h"

int sorted[10];

int main(){

    int num[10];

    for(int i=0; i<10; i++){
        cin>>num[i];   
    }

    //merge(num, 0, 5, 9);
    merge_sort(num, 0, 9);
    
    for(int i=0; i<10; i++){
        cout<<sorted[i]<<" ";
    }
    cout<<endl;

    return 0;
}