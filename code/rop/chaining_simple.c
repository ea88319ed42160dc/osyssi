#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hidden_gem() {
  printf("You have found the secret: ALL HAIL HELIX!\n");
}

void other_gem() {
  printf("Well done!\n");
}

void lagnol() {
  printf("I love Jack\n");
}

void pirate() {
  printf("Sparrow ;)\n");
}

int check_pwd(char *pwd) {
        // Variables
        int auth = 0 ;
        char pwd_buffer[16] ;

        // Copies the password into pwd_buffer
        strcpy(pwd_buffer, pwd);

        // Compares pwd_buffer to known passwords
        // TODO

        // Returns 0 if failed, 1 if succeeded
        return auth;
}

int main(int argc, char *argv[]) {
  printf("Hint : %p\n", &hidden_gem);

  if (argc < 2) {
    // Wrong number of command-line arguments
    printf("Usage: %s <password>\n", argv[0]);
    return 1;
  }

        if (check_pwd(argv[1])) {
                printf("Password accepted, access granted !\n");
        } else {
                printf("Password incorrect, access denied !\n");
        }
        
        return 0;
}

