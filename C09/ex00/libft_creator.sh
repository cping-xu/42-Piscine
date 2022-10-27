# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cping-xu <cping-xu@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 12:19:43 by cping-xu          #+#    #+#              #
#    Updated: 2022/09/04 14:02:17 by cping-xu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh -e
rm -rf libft.a
find . -name "*.c" -type f -maxdepth 1 -exec gcc -Wall -Wextra -Werror -c {} \;
ar cr libft.a *.o
find . -name "*.o" -type f -maxdepth 1 -delete
