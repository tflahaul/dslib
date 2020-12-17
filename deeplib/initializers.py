# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    initializers.py                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thflahau <thflahau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/06 15:03:31 by thflahau          #+#    #+#              #
#    Updated: 2020/12/16 16:26:34 by thflahau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import numpy as np

def regular(shape):
	return np.random.ranf(size=shape)

def uniform(shape):
	return np.random.uniform(low=-1.0, high=1.0, size=shape)

def regular_scaled(shape):
	return np.random.ranf(size=shape) * 0.01
