#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[]) {
  if (argc < 5) {
    fputs("usage: iniset section key value dest.ini\n", stderr);
    return 1;
  }
  if (!WritePrivateProfileStringA(argv[1], argv[2], argv[3], argv[4])) {
    return GetLastError();
  }
  return 0;
}
