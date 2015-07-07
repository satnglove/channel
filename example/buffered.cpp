#include <iostream>
#include <string>
#include "../include/chan.hpp"

using namespace std;
using namespace channel;

int main(int argc, char const* argv[])
{
    chan<string, 2> ch;
    ch.send("buffered");
    //ch << "buffered" << "channel";
    ch.send("channel");

    string s;
    ch.recv(s);
    cout << s << '\n';

    ch.recv(s);
    cout << s << '\n';


    return 0;
}

