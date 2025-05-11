#include <string>
#include <iostream>

# define RED "\001\033[1;91m\002"
# define NORMAL "\001\033[0;39m\002"

#ifndef HARL_H 
# define HARL_H

class Harl
{
    public:
        Harl(void);
        ~Harl(void);

        void complain(std::string level);

    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
};

#endif