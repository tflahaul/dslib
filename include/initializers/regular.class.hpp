/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regular.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thflahau <thflahau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:18:30 by thflahau          #+#    #+#             */
/*   Updated: 2020/11/09 19:00:36 by thflahau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __REGULAR_CLASS_HPP__
#define __REGULAR_CLASS_HPP__

#include "../core/initializer.class.hpp"
#include "../core/matrix.struct.hpp"
#include <cstdint>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

namespace initializer {

/*!
 * \brief Initialize weights using a regular distribution of values
 */
struct			Regular : public Initializer {
	virtual void	init(struct Matrix &, vector<float> &);
};

void			Regular::init(struct Matrix & weights, vector<float> & biases) {
	for (register uint_fast32_t x = 0; x < weights.xdim; ++x)
		for (register uint_fast32_t y = 0; y < weights.ydim; ++y)
			weights.values[x][y] = static_cast<float>(rand()) / RAND_MAX;
	for (register uint_fast32_t idx = 0; idx < biases.size(); ++idx)
		biases[idx] = static_cast<float>(rand()) / RAND_MAX;
}

} /* namespace initializer */

#endif /* __REGULAR_CLASS_HPP__ */
