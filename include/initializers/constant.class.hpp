/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constant.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thflahau <thflahau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:38:38 by thflahau          #+#    #+#             */
/*   Updated: 2020/11/25 14:30:01 by thflahau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONSTANT_CLASS_HPP__
#define __CONSTANT_CLASS_HPP__

#include "../core/initializer.class.hpp"
#include "../core/matrix.struct.hpp"
#include <cstdint>
#include <vector>

namespace initializer {

class		Constant : public Initializer {
private:
	double	_constant = 0.0;
public:
	void	init(struct Matrix *, std::vector<float> *);
	Constant(double const);
};

void		Constant::init(struct Matrix * weights, std::vector<float> * biases) {
	if (weights != NULL && biases != NULL) {
		for (uint_fast32_t x = 0; x < weights->xdim; ++x)
			for (uint_fast32_t y = 0; y < weights->ydim; ++y)
				weights->values[x][y] = static_cast<float>(this->_constant);
		for (uint_fast32_t idx = 0; idx < biases->size(); ++idx)
			(*biases)[idx] = static_cast<float>(this->_constant);
	}
}

Constant::Constant(double const x) : _constant(x) {}

} /* namespace initializer */

#endif /* __CONSTANT_CLASS_HPP__ */
