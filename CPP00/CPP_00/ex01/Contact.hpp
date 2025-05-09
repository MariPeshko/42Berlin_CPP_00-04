#ifndef CONTACT_H
# define CONTACT_H



class	Contact
{
    public:
		Contact( void );
		~Contact( void );
        void Set_Contact(const std::string &f_name, const std::string &l_name,
					const std::string &n_name, const std::string &ph_number,
					const std::string &secret);
		void Display_Cont(int _index);
		void Display_All_Cont();
		void Print_Column(const std::string& str);

	private:
	
        std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _dark_secret;
};

#endif