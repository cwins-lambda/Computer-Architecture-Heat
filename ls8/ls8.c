#include <stdio.h>
#include "cpu.h"
#include <stdlib.h>

/**
 * Main
 */

int main(int argc, char *argv[])
{
  struct cpu cpu;

  if (argc < 2) {
    printf("Please enter the file to run\n");
    exit(2);
  }

  cpu_init(&cpu);
  cpu_load(&cpu, argv[1]);
  cpu_run(&cpu);

  return 0;
}