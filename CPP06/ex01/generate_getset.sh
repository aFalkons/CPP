#!/bin/bash

# Estrai gli argomenti
type="$1"
variable_name="$2"
namehpp="$3"

echo "$type $variable_name $namehpp"

# Definisci l'include
include="#include \"${namehpp}.hpp\""

# Definisci il setter e il getter
setter="void	${namehpp}::set${variable_name}($type ${variable_name}New)
{
	this->${variable_name} = ${variable_name}New;
}"
getter="$type	${namehpp}::get${variable_name}() const
{
	return(this->${variable_name});
}"

if [ -f "${namehpp}getset.cpp" ]; then
	echo "setter e getter aggiunti"
else

	# Aggiungi il setter e il getter al file getset.cpp
	echo "/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ${namehpp}GetSet.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:41:17 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/15 14:41:18 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
	" > ${namehpp}GetSet.cpp
	echo "$include" >> ${namehpp}GetSet.cpp
fi
echo \ >> ${namehpp}GetSet.cpp
echo "$setter" >> ${namehpp}GetSet.cpp
echo "$getter" >> ${namehpp}GetSet.cpp

echo "Setter and getter for variable '$variable_name' of type '$type' added to GetSet.cpp."
