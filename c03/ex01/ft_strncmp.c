/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaiz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:40:07 by rsaiz-ca          #+#    #+#             */
/*   Updated: 2024/07/23 11:25:35 by rsaiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned) s1[i] - (unsigned) s2[i]);
		++i;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

/*int main()
{
    char s1[] = "";
    char s2[] = "";
    printf ("%d\n", ft_strncmp(s1, s2, 4));
}*/
