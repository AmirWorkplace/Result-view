#include<stdio.h>
int main(){
    /*   char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
 */
//  char name[30];
   /*  printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name); */    // display string
    // return 0;SYE

  /* printf("\n\n\n");
  char name[100];
  printf("\nWhat's Your Name : ");
  scanf("%s", &name);
  int x,y,z;
  
  printf("\nPlease Inter Your First Number :");
  scanf("%d", &x);
  printf("\nPlease Inter Your Second Number :");
  scanf("%d", &y);

  z = x+y;
  printf("\n%s Your Result is : %d", z);


  printf("\n\n\n"); */

  char writeName[100];
  printf("Please Enter Your Name : ");
  fgets(writeName, sizeof(writeName), stdin);

  int x,y,z;
  
  printf("\nPlease Inter Your First Number :");
  scanf("%d", &x);
  printf("\nPlease Inter Your Second Number :");
  scanf("%d", &y);

  z = x+y;
  // puts(writeName);
  printf("\n%s Your Result is : %d", writeName, z);


  printf("\n\n\n"); 

  return 0;
}

void pinDefine(pin){
  digitalWrite(pin, OUTPUT);
}
void ledDefine(led){
  
}
