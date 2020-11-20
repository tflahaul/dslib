/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear.struct.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thflahau <thflahau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 21:52:16 by thflahau          #+#    #+#             */
/*   Updated: 2020/11/07 22:53:44 by thflahau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LINEAR_CLASS_HPP__
#define __LINEAR_CLASS_HPP__

#include "../core/activation.class.hpp"
#include <cstdint>
#include <vector>

namespace activation {

struct		linear : public Activation {
	void	call(std::vector<float> &) const;
	linear(void);
};

void		linear::call([[maybe_unused]] std::vector<float> & units) const {}

linear::linear(void) : Activation("linear") {}

} /* namespace activation */

#endif /* __LINEAR_CLASS_HPP__ */
