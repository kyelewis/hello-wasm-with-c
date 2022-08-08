extern unsigned char __heap_base;
extern int getLevel();
char *out = (char *)&__heap_base;

char* render() {

  int level = getLevel();

  char hello[5][16] = {
    "Ready To Rock\0",
    "Warming Up\0",
    "Toasty!\0",
    "Roasting\0",
    "oN fIrE!1!\0",
  };

  for(int i = 0; i < 16; i++) {
    out[i] = hello[level][i];
  };

  return out;
}
