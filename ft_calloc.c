/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 13:39:11 by ohearn        #+#    #+#                 */
/*   Updated: 2022/06/28 15:33:19 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer;

	pointer = (char *)malloc(count * size);
	if (!pointer)
		return (0);
	ft_bzero(pointer, count * size);
	return (pointer);
}

// int main()
// {
//
//     // This pointer will hold the
//     // base address of the block created
//     int* ptr;
//     int n, i;
//
//     // Get the number of elements for the array
//     n = 5;
//     printf("Enter number of elements: %d\n", n);
//
//     // Dynamically allocate memory using calloc()
//     ptr = (int*)ft_calloc(n, sizeof(int));
//
//     // Check if the memory has been successfully
//     // allocated by calloc or not
//     if (ptr == NULL) {
//         printf("Memory not allocated.\n");
//         exit(0);
//     }
//     else {
//
//         // Memory has been successfully allocated
//         printf("Memory successfully allocated using ft_calloc.\n");
//
//         // Get the elements of the array
//         for (i = 0; i < n; ++i) {
//             ptr[i] = i + 1;
//         }
//
//         // Print the elements of the array
//         printf("The elements of the array are: ");
//         for (i = 0; i < n; ++i) {
//             printf("%d, ", ptr[i]);
//         }
//     }
//
//     return 0;
// }