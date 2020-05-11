#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  struct in_addr inaddr;
  uint16_t addr;
  char dest[INET_ADDRSTRLEN];

  if (argc < 2) {
    printf("arguments too few");
    exit(-1);
  }

  sscanf(argv[1], "%X", &addr);
  inaddr.s_addr = htons(addr);

  if (!inet_ntop(AF_INET, &inaddr, dest, INET_ADDRSTRLEN)) {
    printf("error occured\n");
    exit(-1);
  }

  printf("%s\n", dest);
  return 0;
}
