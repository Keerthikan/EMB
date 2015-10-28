#include <iostream>
#include "uTosNet.hpp"

#include <boost/asio/read.hpp>
#include <boost/asio/write.hpp>

#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost::asio;
using namespace boost::algorithm;

uTosNet::uTosNet() : serial(io)
{
    serial.open(port);
    serial.set_option(serial_port_base::baud_rate(baud_rate));
    serial.set_option(serial_port_base::flow_control(serial_port::flow_control::none));
    serial.set_option(serial_port_base::parity(serial_port::parity::none));
    serial.set_option(serial_port_base::stop_bits(serial_port::stop_bits::one));
    serial.set_option(serial_port_base::character_size(char_size));

    if(serial.is_open())
    {
        cout << "Serial connection established!" << std::endl;
    }
}

uTosNet::~uTosNet()
{
    serial.close();
}

void uTosNet::writeln(std::string &addr, std::string &msg)
{
    string res = 'w' + addr + ' ' + msg.c_str();
    send_data(res);
}

string uTosNet::readln(std::string &addr)
{
    string buffer = "r" + addr;

    send_data(buffer);

    return read_data();
}

string uTosNet::read_data()
{
    char response[9] = {};
    boost::asio::read(serial, boost::asio::buffer(response, 9));

    string res(response);
    res.pop_back();
    return res;
}

void uTosNet::send_data(string &msg)
{
    boost::asio::write(serial,buffer(msg.c_str(), msg.size()));
}

void uTosNet::interface()
{
    string in;
    std::vector<std::string> cmd;

    while(true)
    {
        cmd.empty();
        in = "";
        cout << ":>";
        getline(cin,in);
        boost::split(cmd, in, boost::is_any_of(" "));

        if(cmd[0] == "exit")
        {
            break;
        }
        else if(cmd[0] == "w")
        {
            cout << "Sending: " << "w" << cmd[1] << " "
                 << cmd[2] << " to the FPGA." << endl;
            writeln(cmd[1],cmd[2]);
        }
        else if(cmd[0] == "r")
        {
            cout << "Received: " << readln(cmd[1]) << " from the FPGA." << endl;
        }
    }
    cout << "Program terminated" << endl;
}
