#ifndef CONTACT_H
# define CONTACT_H

class Contact {

	public:
		Contact(void);
		~Contact(void);

		std::string	getInfo(void) const;

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif