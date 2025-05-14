#include <iostream>
#include <packet_sniffer.h>


int main(){
	PacketSniffer sniffer;
	sniffer.startCapture();
	sniffer.stopCapture();
    	return 0;
}
