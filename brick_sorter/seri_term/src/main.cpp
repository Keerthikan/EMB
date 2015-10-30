#include "iostream"
#include "uTosNet.hpp"

using namespace std;

int main()
{
    uTosNet port;
    port.poll();
    port.interface();
    return 0;
}
