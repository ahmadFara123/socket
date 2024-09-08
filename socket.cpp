#include "socket.h"


namespace socketConfig{

Socket_builder::Socket_builder(string ip , int port, connection_type connection_type_setup): network_info_(new network_configuration(ip , port))
, connection_type_setup_(connection_type_setup)
{
    cout << "SOCKET HASS BEING CREATED" << endl;
}

Socket_builder::~Socket_builder(){
    cout << "SOCKET CLASS HASS BEEN DELETED" << endl;
}

string Socket_builder::GetIp() const{
    return this->network_info_->ip;
}

int Socket_builder::GetPort() const{
    return network_info_->port;
}

void Socket_builder::setIp(string ip){
     network_info_->ip=ip;
}

void Socket_builder::setPort(int port){
    network_info_->port=port;
}

connection_type Socket_builder::GetConnectionType() const{
    return connection_type_setup_;
}

void Socket_builder::SetConnectionType(int connection_type_setup){
    connection_type_setup_ = static_cast<connection_type> (connection_type_setup);
}

}