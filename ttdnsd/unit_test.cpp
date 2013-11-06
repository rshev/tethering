#include "ttdnsd.h"

int main(int argc, char** argv)
{
    DNSServer* dns_srv = DNSServer::getInstance();
    if (argc ==2)
        dns_srv->startDNSServer(1, argv[1]);
    else
        dns_srv->startDNSServer(1, "192.168.2.13");
    return 0;
}
