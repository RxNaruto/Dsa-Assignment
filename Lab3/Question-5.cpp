#include <iostream>
using namespace std;
void towerOfHanoi(int n,char fromRod,char toRod,char rod){
    if (n == 0){
        return;
    }
    towerOfHanoi(n - 1, fromRod, rod, toRod);
    cout << "Move disk " << n << " from rod " << fromRod << " to rod " << toRod << endl;
    towerOfHanoi(n - 1, rod, toRod, fromRod);
}
int main()
{
    int N = 3;
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}

