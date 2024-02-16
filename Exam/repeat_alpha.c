#include <unistd.h>

void index_str(char str, int x)
{
    while (x > 0)
    {
        write(1, &str,1);
        x--;
    }
}    

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                index_str(argv[1][i], (argv[1][i] - 'a' + 1));
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                index_str(argv[1][i], (argv[1][i] - 'a' + 1));
            }
            else
                write(1,argv,1);
            i++;
        }
        
    }
    write(1,"\n",1);
    return 0;
}
