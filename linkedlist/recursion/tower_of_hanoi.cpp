#include <iostream>
using namespace std;

//make a function 
void towerOfHanoi(int n, char source, char auxiliary, char destination) {

    //condition 1
    if(n==0){
        return;
    }

    //condition 2
    if(n==1){
        cout<<source<<" "<<destination<<endl;
    }
    
    //recursion call
    else{
    towerOfHanoi(n-1, source, destination , auxiliary);
     cout<<source<<" "<<destination<<endl;
    towerOfHanoi(n-1, auxiliary,source,destination);
        
    }

}
int main() {
    int n;
    cin >> n;

    // a ,b , c are the three rods
    towerOfHanoi(n, 'a', 'b', 'c');
}


