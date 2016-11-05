#include <sys/socket.h>
#include <linux/if_packet.h>
#include <net/ethernet.h> /* the L2 protocols */
#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <sys/ioctl.h>
#include <net/if.h>

int main(){
	int packet_socket;
	int indice;

	packet_socket = socket(AF_PACKET, SOCK_RAW , htons(ETH_P_ALL));

	if(packet_socket ==-1){
		perror("error en socket");
		exit(0);
	}else{
		perror("exito al abrir el socket");
		indice = obtenerdatos(packet_socket);
		//estructurartrama(trama);
		//enviartrama(packet_socket,trama,indice);
		puts("nmjds");
		recibirtrama(packet_socket,recibo);
	}
	close(packet_socket);	
}