/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:13:54 by wifons            #+#    #+#             */
/*   Updated: 2024/09/18 21:26:58 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive_print_hex(unsigned char c)
{
	char			*hex_digits;
	char			buffer[2];
	unsigned int	hex_base;

	hex_digits = "0123456789abcdef";
	hex_base = 16;
	buffer[0] = hex_digits[c / hex_base];
	buffer[1] = hex_digits[c % hex_base];
	write(1, buffer, 2);
}

void	ft_print_addr_to_hex(unsigned long long addr)
{
	char			*hex_digits;
	char			buffer[17];
	unsigned int	hex_base;
	int				index;

	hex_digits = "0123456789abcdef";
	hex_base = 16;
	index = 0;
	while (index < 16)
	{
		buffer[index] = '0';
		index++;
	}
	buffer[index] = '\0';
	index = 15;
	while (addr > 0 && index >= 0)
	{
		buffer[index] = hex_digits[addr % hex_base];
		addr /= hex_base;
		index--;
	}
	write(1, buffer, 16);
}

void	ft_print_content_to_hex(char *content, unsigned int size)
{
	unsigned int	byte_index;
	unsigned int	line_size;

	byte_index = 0;
	line_size = 16;
	while (byte_index < line_size)
	{
		if (byte_index < size)
			ft_recursive_print_hex((unsigned char)content[byte_index]);
		else
			write(1, "  ", 2);
		if (byte_index % 2)
			write(1, " ", 1);
		byte_index++;
	}
}

void	ft_print_content(char *content, unsigned int size)
{
	unsigned int	char_index;
	unsigned int	min_printable;
	unsigned int	max_printable;
	unsigned int	line_size;

	line_size = 16;
	min_printable = 32;
	max_printable = 126;
	char_index = 0;
	while (char_index < line_size)
	{
		if (char_index < size)
		{
			if ((unsigned char)content[char_index] >= min_printable
				&& (unsigned char)content[char_index] <= max_printable)
				write(1, &content[char_index], 1);
			else
				write(1, ".", 1);
		}
		char_index++;
	}
}

void	ft_print_memory(void *addr, unsigned int size)
{
	char			*content;
	unsigned int	offset;
	unsigned int	line_size;

	line_size = 16;
	content = (char *)addr;
	offset = 0;
	while (offset < size)
	{
		ft_print_addr_to_hex((unsigned long long)(content + offset));
		write(1, ": ", 2);
		ft_print_content_to_hex(content + offset, size - offset);
		ft_print_content(content + offset, size - offset);
		write(1, "\n", 1);
		offset += line_size;
	}
}

// #include <stdio.h>

// void run_test_case(void *addr, unsigned int size)
// {
// 	printf("Test case - Address: %p, Size: %u\n", addr, size);
// 	ft_print_memory(addr, size);
// 	printf("\n");
// }

// int main(void)
// {
// 	// Cas de test
// 	char test1[] = "Hello, World!";
// 	char test2[] = "Hello\nWorld";
// 	char test3[] = "Non-printable: \x01\x02\x03";
// 	char test4[] = "";
// 	char test5[] = "Printable: 1234567890";

// 	run_test_case(test1, sizeof(test1));
// 	run_test_case(test2, sizeof(test2));
// 	run_test_case(test3, sizeof(test3));
// 	run_test_case(test4, sizeof(test4));
// 	run_test_case(test5, sizeof(test5));

// 	return (0);
// }