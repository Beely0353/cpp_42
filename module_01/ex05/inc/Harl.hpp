/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:10:48 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 16:04:48 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <cstdlib>

# define RED "\033[38;5;204m"
# define GRE "\033[92m"
# define BLU "\033[38;5;32m"
# define YEL "\033[93m"
# define BEI "\033[38;5;223m"
# define EOC "\033[0m"

class Harl {
    public:
        Harl(void);
        ~Harl(void);

        void complain(std::string level);

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

};

#endif