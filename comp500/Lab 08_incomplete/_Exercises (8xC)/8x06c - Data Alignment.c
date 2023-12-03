#include <stdio.h>

struct Cell_Packet
{
	unsigned int sequence_num;
	unsigned int ack_num_field;
	unsigned int data_offset;
	unsigned int checksum;
	unsigned short source_port;
	unsigned short dest_port;
	unsigned short window_field;
	char reserved[6];
	char flags[6];
};

int main(void)
{
	printf("sizeof(Cell_Packet) is ");
	printf("%d bytes.\n", sizeof(struct Cell_Packet));

	return 0;
}