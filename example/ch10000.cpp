#include <thread>
#include <iostream>
#include "../include/chan.hpp"

using namespace std;
using namespace channel;

void ping(chan<string> &ch)
{
    for (int i = 0; i < 10000; ++i)
        ch.send("ping");
        //ch << "ping";
}

int main(int argc, char const* argv[])
{
    chan<string> ch;
    thread t(ping, std::ref(ch));

    string s;
    for (int i = 0; i < 10000; ++i) {
        //ch >> s;
        ch.recv(s);
        cout << i << " >> " << s << '\n';
    }

    ch.close();
    t.join();
    return 0;
}
