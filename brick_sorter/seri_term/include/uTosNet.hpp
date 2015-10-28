#include <string>
#include <vector>

#include <boost/asio/serial_port.hpp>

class uTosNet {
public:
    uTosNet();
    ~uTosNet();

    void interface();

    void writeln(std::string &addr, std::string &msg);
    std::string readln(std::string &addr);
private:
    boost::asio::io_service io;
    boost::asio::serial_port serial;

    const uint32_t baud_rate  = 115200;
    const uint8_t char_size   = 8;
    const std::string port = "/dev/ttyUSB0";

    std::string read_data();
    void send_data(std::string &msg);
};
