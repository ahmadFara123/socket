#pragma once

#include <string>
#include <iostream>
#include <utility>
#include <memory>

using namespace std ;

    struct network_configuration{
        int port; 
        std::string ip;
        network_configuration(string ip , int port ): port(port) , ip(ip) {}
        ~network_configuration(){
            cout<< "NETWORK CONFIGURATION DELETED" << endl;
        }
    };

   enum connection_type{
        TCP , 
        UDP
   };

namespace socketConfig{

    class Socket_builder{
    public:

        Socket_builder( std::string ip , int port , connection_type connection_type_setup );
        ~Socket_builder();

        void setPort(int port);
        void setIp(string ip);
        void SetConnectionType(int connection_type_setup);

        int GetPort() const;
        string GetIp() const;
        connection_type GetConnectionType() const;

       



    private: 
    std::unique_ptr<network_configuration> network_info_ ;
    connection_type connection_type_setup_;
    };
};