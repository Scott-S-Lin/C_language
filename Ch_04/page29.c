#include <stdio.h>

int main(void)
{
    int a_ct, e_ct, i_ct, o_ct, u_ct;
    int ch;

    a_ct = e_ct = i_ct = o_ct = u_ct = 0;

    while ((ch = getchar()) != '#')
    {
        //ch = toupper(ch);

        switch (ch)
        {
			case 'a':
			case 'A':
                a_ct++;
                break;
                
            case 'e':            	
            case 'E' :
                e_ct++;
                break;
                
            case 'i' :            	
            case 'I' :
                i_ct++;
                break;
                
            case 'o':
			case 'O' :
                o_ct++;
                break;
                
            case 'u':
			case 'U' :
                u_ct++;
                break;
                
            default :
                break;
        }
    }


    /*while ((ch = getchar()) != '#')
    {
        ch = toupper(ch);

        if(ch=='A')
            a_ct++;
        else if(ch=='E')
            e_ct++;
        else if(ch=='I')
            i_ct++;
        else if(ch=='O')
            o_ct++;
        else if(ch=='U')
            u_ct++;
        else
            ;
    }*/


    printf("A:%d\nE:%d\nI:%d\nO:%d\nU:%d\n", a_ct, e_ct, i_ct, o_ct, u_ct);

    return 0;
}
