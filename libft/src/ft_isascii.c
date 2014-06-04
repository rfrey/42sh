/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrey <rfrey@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:13:24 by rfrey             #+#    #+#             */
/*   Updated: 2013/11/19 18:14:54 by rfrey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}