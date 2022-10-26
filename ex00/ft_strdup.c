/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:49:55 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/16 09:53:58 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* char *strdup(const char *s);
   The  strdup() function returns a pointer to a new string which is a du‐
   plicate of the string s.  Memory for the new string  is  obtained  with 
   malloc(3), and can be freed with free(3).

   On success, the strdup() function returns a pointer to the duplicated
   string.  It returns NULL if insufficient memory was available, with er‐
   rno set to indicate the cause of the error.

   errno - number of last error
   The  <errno.h> header file defines the integer variable errno, which is
   set by system calls and some library functions in the event of an error
   to indicate what went wrong. 
   On any particular Linux system, one can obtain a list of  all  symbolic
   error names and the corresponding error numbers using the errno(1) com‐
   mand.

Space is allocated by calling malloc with the number of bytes needed (for 
strings this is always one more than the maximum length of the string to be
stored): 
char *pc = malloc(MAXSTR + 1) ;     // can hold a string of up to MAXSTR 
characters.
pc = malloc(strlen("Hello!") + 1) ; // can hold a copy of "Hello" with 
terminating NUL.
 */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* If no memory is available, the pointer to the intended allocated space
is NULL
*/
char	*ft_strdup(char *src)
{
	char	*dupl;
	int		k;

	k = 0;
	dupl = (char *) malloc ((str_len(src) + 1) * sizeof(char));
	if (dupl == NULL)
		return ('\0');
	while (src[k])
	{
		dupl[k] = src[k];
		k++;
	}
	dupl[k] = '\0';
	return (dupl);
}

// int	main(void)
// {
// 	char	str1[] = "Ciao bello, come sta";
// 	char	*output;
// 	output = ft_strdup(str1);
// 	printf("%s\n", output);
// 	free (output);
// 	return (0);
// }
