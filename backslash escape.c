#include <stdio.h>      //single quote(\')
int main() {
char a[]="om \'sai\' ram";
printf("%s",a);
return 0;
}

#include <stdio.h>  //double quotes(\")
int main() {
char a[]="om \"sai\" ram";
printf("%s",a);
return 0
}


#include <stdio.h>    //backslash(\\)
int main() {
char a[]="om \\sai\\ ram";
printf("%s",a);
return 0;
}



#include <stdio.h>    //new line(\n)
int main() {
char a[]="om\nsai\nram";
printf("%s",a);
return 0;
}

#include <stdio.h>    //tab space(\t)
int main() {
char a[]="om\tsai\tram";
printf("%s",a);
return 0;
}


int main() {      //null(\0)
  char txt[] = {'o', 'm', 's', 'a', 'i', '\0'};
  printf("%s", txt);
  return 0;
}

