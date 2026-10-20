/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_calloc.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: jodehii <jodehii@student.42kl.edu.my>	  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/08/11 16:20:13 by jodehii		   #+#	#+#			 */
/*   Updated: 2026/08/11 16:44:16 by jodehii		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*space;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	space = malloc(nmemb * size);
	if (!space)
		return (NULL);
	ft_memset(space, 0, nmemb * size);
	return (space);
}

// int	main(void)
// {
// 	int	*arr;
// 	int	i;

// 	arr = (int *)ft_calloc(5, sizeof(int));
// 	i = 0;
// 	printf("values in memory allocated: ");
// 	while (i < 5)
// 		printf("%d ", arr[i++]);
// 	printf("\n");
// 	free(arr);
// 	return (0);
// }
