#include <iostream>
#include "socket.h" 

using namespace std; 

int main(){

    string ip_Addr = "127.0.0.1";
    int port = 8080;
    connection_type connection = connection_type::UDP ;
    shared_ptr<socketConfig::Socket_builder> socket_builder = make_shared<socketConfig::Socket_builder>(ip_Addr , port, connection);
   
    cout << socket_builder->GetIp() << endl;
    cout << socket_builder->GetPort() << endl;
    
    return 0;
}