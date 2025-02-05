/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:17:13 by jmansikk          #+#    #+#             */
/*   Updated: 2025/02/03 16:59:55 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_ABS_H
# define FT_ABS_H

# ifndef ABS
#  define ABS(Value) ((Value) * ((Value > 0) - (Value < 0)))
# endif

#endif
