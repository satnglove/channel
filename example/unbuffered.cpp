#include <thread>
#include <iostream>
#include "../include/chan.hpp"

using namespace std;
using namespace channel;

void ping(chan<string> &ch)
{
    ch.send("ping");
    //ch << "ping";
}

int main(int argc, char const* argv[])
{
    chan<string> ch;
    thread t(ping, std::ref(ch));

    string s;
    ch.recv(s);
    //ch >> s;
    cout << s << '\n';
    t.join();

    return 0;
}
