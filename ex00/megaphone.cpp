# include <iostream>

void ft_megaphone(char **argv)
{
    int i;
    int j;

    i = 0;
    while (argv[++i]){
        j = -1;
        while (argv[i][++j]){
            std::cout << (char) std::toupper(argv[i][j]);
        }
       
    }
    return;
}

int main(int agvn, char **agv)
{
    if (agvn == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    ft_megaphone(agv);
    return (0);
}