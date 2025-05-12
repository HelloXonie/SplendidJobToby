#ifndef PACKET_SNIFFER_H
#define PACKET_SNIFFER_H

class PacketSniffer {
public:
	void startCapture();
private:
	void processPacket();
};

#endif
