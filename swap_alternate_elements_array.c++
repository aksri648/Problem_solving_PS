#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4,5,6};
    for(int i=0;i<v.size();i+=2){
        int temp=v[i];
        v[i]=v[i+1];
        v[i+1]=temp;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
