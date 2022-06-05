#include <stdlib.h>
int main(){
int opt;

do {
printf("___MENU___\n");
printf("1 - ipconfig\n");
printf("2 - ipconfig displaydns\n");
printf("3 - Open Chrome\n");
printf("4 - msinfo32\n");
printf("5 - inetcpl\n");
printf("6 - applwiz.cpl\n");
printf("0 - exit\n");
scanf("%i", &opt);

switch(opt){

    case 1:
    system("ipconfig");
    break;
    //system("C:\\Windows\\System32\\ipconfig");
    case 2:
    system("ipconfig/displaydns");
    break;

    case 3:
    system("\"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\"");
    break;

    case 4:
    system("Start msinfo32");
    break;

    case 5:
    system("Start inetcpl.cpl");
    break;

    case 6:
    system("Start appwiz.cpl");
    break;

    default:
    printf("try again");
    }
}
while(opt != 0);
printf("try again");
return 0;
}


//%ProgramFiles% Program Files folder
//%systemroot% Windows folder
