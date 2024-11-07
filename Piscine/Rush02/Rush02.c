#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_strcmp(char *s1, char *s2)
{
        if (s1[0] != s2[0])
            return (s1[0] - s2[0]);
    return (s1[0] - s2[0]);
}

void ft_0()
{
    write(1, "zero", 4);
}

void ft_1to9(char *str)
{
    if (str[0] == '1')
        write(1, "one", 3);
    else if (str[0] == '2')
        write(1, "two", 3);
    else if (str[0] == '3')
        write(1, "three", 5);
    else if (str[0] == '4')
        write(1, "four", 4);
    else if (str[0] == '5')
        write(1, "five", 4);
    else if (str[0] == '6')
        write(1, "six", 3);
    else if (str[0] == '7')
        write(1, "seven", 5);
    else if (str[0] == '8')
        write(1, "eight", 5);
    else if (str[0] == '9')
        write(1, "nine", 4);
}

void ft_10to19(char *str)
{
    if (ft_strcmp(str, "10") == 0)
        write(1, "ten", 3);
    else if (ft_strcmp(str, "11") == 0)
        write(1, "eleven", 6);
    else if (ft_strcmp(str, "12") == 0)
        write(1, "twelve", 6);
    else if (ft_strcmp(str, "13") == 0)
        write(1, "thirteen", 8);
    else if (ft_strcmp(str, "14") == 0)
        write(1, "fourteen", 8);
    else if (ft_strcmp(str, "15") == 0)
        write(1, "fifteen", 7);
    else if (ft_strcmp(str, "16") == 0)
        write(1, "sixteen", 7);
    else if (ft_strcmp(str, "17") == 0)
        write(1, "seventeen", 9);
    else if (ft_strcmp(str, "18") == 0)
        write(1, "eighteen", 8);
    else if (ft_strcmp(str, "19") == 0)
        write(1, "nineteen", 8);
}

void ft_by10(char *str)
{
    if (ft_strcmp(str, "2") == 0)
        write(1, "twenty ", 7);
    else if (ft_strcmp(str, "3") == 0)
        write(1, "thirty ", 7);
    else if (ft_strcmp(str, "4") == 0)
        write(1, "forty ", 6);
    else if (ft_strcmp(str, "5") == 0)
        write(1, "fifty ", 6);
    else if (ft_strcmp(str, "6") == 0)
        write(1, "sixty ", 6);
    else if (ft_strcmp(str, "7") == 0)
        write(1, "seventy ", 8);
    else if (ft_strcmp(str, "8") == 0)
        write(1, "eighty ", 7);
    else if (ft_strcmp(str, "9") == 0)
        write(1, "ninety ", 7);
}

void ft_numbers_0to999(char* str)
{
    int length = ft_strlen(str);

    if (length == 1 && str[0] == '0')
    {
        ft_0();
        return;
    }
    if (length == 3)
    {
        ft_1to9(&str[0]);
        write(1, " hundred ", 9);
    }
    if (length >= 2)
    {
        if (str[length - 2] == '1')
        {
            ft_10to19(&str[length - 2]);
            return;
        }
        if (str[length - 2] != '0')
        {
            ft_by10(&str[length - 2]);
        }
    }
    if (length >= 1)
    {
        ft_1to9(&str[length - 1]);
    }
}



char *suffixes[] = {
    "",        
    " thousand",
    " million",
    " billion",
    " trillion",
    " quadrillion",
    " quintillion",
    " sextillion",
    " septillion",
    " octillion",
    " nonillion",
    " decillion",
    " undecillion"
};

void ft_big_numbers(char *number, int group)
{
    int len = ft_strlen(number);
    int group_size;
    int i;

    if (group > 12)
    {
        write(1, "Number too big", 14);
        return;
    }
    if (len == 0)
        return;

    if (len % 3 == 0)
    {
        group_size = 3;
    }
    else
    {
        group_size = len % 3;
    }
    char group_str[4] = {0};
    
	i = 0;
	while(i < group_size)
    {
        group_str[i] = number[i];
		i++;
    }
    ft_big_numbers(number + group_size, group + 1);
    if (ft_strlen(group_str) > 0)
    {
        write(1, " ", 1);
        ft_numbers_0to999(group_str);
        if (group > 0)
        {
            write(1, suffixes[group], ft_strlen(suffixes[group]));
        }
    }
}

int main()
{
    char number[] = "123456789123456";
    ft_big_numbers(number, 0);
    return 0;
}
