/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:41:07 by kamitsui          #+#    #+#             */
/*   Updated: 2023/08/20 11:15:40 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER_H
# define MY_HEADER_H

# include <stdio.h>
# include <stdlib.h>

/**
 * @brief 文字列データのマクロ定義
 */
# define MESSAGE "Japanese だー！ 日本語"

/**
 * @brief mainで使う関数
 */
void	JapaneseFunction(char *str);
int	add(int a, int b);

#endif
