#include "packet_sniffer.h"
#include <iostream>
#include <sys/socket.h>
#include <netinet/ip.h>
#include <netinet/if_ether.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>


void PacketSniffer::startCapture() {
	std::cout << "Starting packet capture..." << std::endl;

	rawSocket = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL))
	if (rawSocket < 0){
		perror("Socket creation failed");
		return;
	}
}

void PacketSniffer::processPacket() {
	std::cout << "Processing packet..." << std::endl;
}
