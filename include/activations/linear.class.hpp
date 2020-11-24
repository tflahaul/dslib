/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thflahau <thflahau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 21:52:16 by thflahau          #+#    #+#             */
/*   Updated: 2020/11/24 15:05:53 by thflahau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LINEAR_CLASS_HPP__
#define __LINEAR_CLASS_HPP__

#include "../core/activation.class.hpp"
#include <vector>

namespace activation {

struct		linear : public Activation {
	void	call(std::vector<float> &) const;
	void	derivative(std::vector<float> &) const;
	linear(void);
};

} /* namespace activation */

#endif /* __LINEAR_CLASS_HPP__ */
