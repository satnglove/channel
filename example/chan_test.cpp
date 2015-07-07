#include <iostream>
#include "../include/chan.hpp"

using namespace std;
using namespace channel;
int main(int argc, char const* argv[])
{
    chan<int, 1> ch;
    ch.send(7);
    //ch << 7;
    int i;
    ch.recv(i);
    //ch >> i;
    cout << "recv: " << i << '\n';

    return 0;
}

