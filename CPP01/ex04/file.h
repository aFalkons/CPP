/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:44:56 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/27 19:27:32 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <fstream>
#include "file.hpp"

int	parser_for_1(char	*av[], file *fil, std::string *s1, std::string *s2, file *fil_out);
int	parser_for_4(char	*av[], file *fil, std::string *s1, std::string *s2, file *fil_out);


#endif
