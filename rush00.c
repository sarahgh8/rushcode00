#include <unistd.h>
#include "ft_putchar.c"
void ft_putchar(char c, int length);


void rec (int x, int y) 
{
    if (x==1||y==1){ 
        if (y==1&&x==1){
            ft_putchar("o", 1);
            //write (1,"o",1);
        
        }   
        else if (y == 1)
        {
            write (1,"o",1);
            // print aa number of ,dashes dashes = x - 2
            int i = 1;
            while (i <= x-2)
            {
                //write (1,"-",1);
                ft_putchar("-",1);
                i++;
            }
            //print last asterisk, (last char in the row)
            //write (1,"o\n",2);
            ft_putchar("o\n",2);

        }
        else if (x == 1){
            int j = 1;
            //write (1,"o\n",2);
            ft_putchar("o\n",2);
            // iterates y - 2 times cuz we have 2 asterisks in the the first and last columns
            while (j <= y-2){
                //print the first |
                //write (1,"|\n",2);
                ft_putchar("|\n",2);
                // this loop prints a specific number of spaces, spaces = dashes
                int k = 1;
                while (k <= x-2){
                    //write (1," ",1);
                    ft_putchar(" ",1);
                    k++;
                }
                j++;
                }
                //write (1,"o",1);
                ft_putchar("o",1);

        }
        
        }
    else {
        //----[first row]-----{
        // print astersik to start the first row 
        //write (1,"o",1);
        ft_putchar("o",1);
        // print aa number of ,dashes dashes = x - 2
        int i = 1;
        while (i <= x-2)
        {
            //write (1,"-",1);
            ft_putchar("o",1);
            i++;
        }
        //print last asterisk, (last char in the row)
        //write (1,"o\n",2);
        ft_putchar("o\n",2);
        // }


        // ----[length]-----{
        // this loop prints |    | with a specific number of spaces (spaces = dashes)
        int j = 1;
        // iterates y - 2 times cuz we have 2 asterisks in the the first and last columns
        while (j <= y-2){
            //print the first |
            //write (1,"|",1);
            ft_putchar("|\n",2);
            // this loop prints a specific number of spaces, spaces = dashes
            int k = 1;
            while (k <= x-2){
                write (1," ",1);
                k++;
            }
            // last |
            //write (1,"|\n",2);
            ft_putchar("|\n",2);
            j++;
    }
    //}

    //----[last row]-----{
    // same as $[first row]
    // print astersik to start the first row
    //write (1,"o",1);
    ft_putchar("o",1);
    // print a number of dashes
    int q = 1;
    while (q <= x-2){
        //write (1,"-",1);
        ft_putchar("-",1);
        q++;
    }
    //print last asterisk, (last char in the row)
    //write (1,"o\n",2);
    ft_putchar("o\n",2);
    }
}

int main (){
    rec (3,4);
    return (0);
}