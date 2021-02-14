#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <../crypt_blowfish-1.3.tar/crypt_blowfish-1.3/crypt.h>
int main()
{

    /*que coño es esto */
    char user[32];
    char pass[32];
    /*HOLA WEY QUIERE TAMALES*/
    printf("Enter a username: ");
    fgets(user,32,stdin);
    printf("Gimme da pass: ");
    fgets(pass,32,stdin);
    /*USE BCRYPT BRO*/
    char *passh = crypt_gensalt_rn("$2a$",20,pass,32,passh,312);
    /*DA FILE*/
    FILE *fp;
    fp = fopen("C:/tmp/songname.txt", "w+");
    fputs( "que estoy haciendo con mi vida\nUsername: ",fp);
    fputs( user,fp);
    fputs( "Password: ",fp);
    fputs( pass,fp);
    return 0;
}
