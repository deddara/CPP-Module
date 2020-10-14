/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 11:30:07 by deddara           #+#    #+#             */
/*   Updated: 2020/10/14 17:00:28 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP
# include <string>

class Contact{

public:

	void	add_contact(void);
	void 	search_output(int id) const;
	void 	contact_output(int id) const;

private:

	std::string f_name;
	std::string l_name;
	std::string nickname;
	std::string login;
	std::string post_addr;
	std::string email_addr;
	std::string ph_num;
	std::string bday_date;
	std::string fav_meal;
	std::string undr_clr;
	std::string drkst_scrt;



};

#endif