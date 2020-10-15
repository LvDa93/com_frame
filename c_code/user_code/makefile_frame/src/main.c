#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct tunnel_ser {
	int tun_fd;
	char name;
};

int set_ser_name(struct tunnel_ser **tun_ser_lis)
{
	struct tunnel_ser *tun_ser;
	tun_ser = malloc(sizeof(struct tunnel_ser));

	tun_ser->name = 'a';

	*tun_ser_lis = tun_ser;
	return 0;
}

int main()
{
	struct tunnel_ser *tun_ser = NULL;
	set_ser_name(&tun_ser);
	if (tun_ser == NULL) {
		printf("tun_ser NULL prt\n");
		return 0;
	}
	printf("tun_ser name is %c\n", tun_ser->name);
	return 0;
}
