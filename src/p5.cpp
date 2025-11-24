#include <iostream>
#include <cmath>

using namespace std;
void hanoi(int n, int from, int to, int aux){
    if(aux == 2){
        hanoi(n , from , 2 , to);
        hanoi(n , 2 , to , from);
    }
    else if(n == 1){
        cout << "Move disk " << n << " from " << from << " to " << to <<endl;
    }
    else{
        hanoi(n-1 , from , aux , to);
        cout << "Move disk " << n << " from " << from << " to " << to <<endl;
        hanoi(n-1 , aux , to , from);
    }
    
   
}


int main() {
    

    return 0;
}