#include <iostream>
using namespace std;

void towers(int diskSize, int start, int dest, int wait)
{
    if (diskSize == 1)
    {
        cout << "Move disk " << diskSize << " from peg " << start << " to peg " << dest << endl;
        return;
    }
    else
    {
        towers(diskSize - 1, start, wait, dest);
        cout << " Move disk " << diskSize << " from peg " << start << " to peg " << dest << endl;
        towers(diskSize - 1, wait, dest, start);
    }
}

int main() {
    int disks;
    cout << "Enter the number of disks : ";
    cin >> disks;
    towers(disks, 1, 2, 3);
}