  #include <stdio.h>
  int main() {
   char redBoldBlinking[] = "\033[0;1;5;31m";
   char defaultConsole[] = "\033[0m";
   printf("%s",redBoldBlinking);
   printf("NEED CHOCOLATE!\n");
   printf("%s",defaultConsole);
  return 0;
  }
