            #include<stdio.h>
            #include<string.h>
            #include<ctype.h>
            int main()
            {
                char password[200];
                int a=1;

           {
                while(a<2){
                int x = 4;
                int i=0;
                int L;
                int lc=0;
                int uc=0;
                int dig=0;
                int sym=0;
                printf("\nEnter your password:");
                scanf("%s", password);



                L = strlen(password);
               if(L>5){

                while(i < L){
                    if( islower(password[i]))
                {
                    x--;
                    lc++;
                    break;
                }
                i++;
              }

              i=0;
              while(i<L){
                if( isupper(password[i])){
                    x--;
                    uc++;
                    break;
                }
                i++;
              }

              i=0;
              while(i<L){
                if( isdigit(password[i])){
                    x--;
                    dig++;
                    break;
                }
                i++;
              }

            i=0;
              while(i<L){
                if( !isalpha(password[i]) && !isdigit(password[i]) ){
                  x--;
                  sym++;
                  break;
                }
                i++;
              }

                 if(x==0){
                    printf("\nEntered password is safe\n");
                 } else{
                       printf("\nEntered password is unsafe\n");
                    a--;
                    if(lc==0){
                        printf("\n**Lower case alphabet is missing**\n");
                    }
                    if(uc==0){
                        printf("\n**Upper case alphabet is missing**\n");
                    }
                    if(dig==0){
                        printf("\n**Digit is missing**\n");
                    }
                    if(sym==0){
                        printf("\n**Symbol is missing**\n");
                    }
                 }
               }
             else{
               printf("\nEnter atleast 6 characters\n");
                a--;
             }
                    a++;
                }
              }


                return 0;
            }




