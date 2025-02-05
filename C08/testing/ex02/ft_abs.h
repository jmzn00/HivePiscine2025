/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:17:13 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/29 18:16:59 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_ABS_H
# define FT_ABS_H

# ifndef ABS
#  define ABS(nb) if (nb < 0) nb = -nb; else nb = nb;
# endif

#endif
