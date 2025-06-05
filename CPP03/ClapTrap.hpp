#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class ClapTrap
{

public:
    ClapTrap( void );
	ClapTrap( const std::string &name );
	/* ClapTrap(const std::string &name, int const health, 
		int const energy, int const damage); */
	ClapTrap( ClapTrap const & src );	
	ClapTrap &	operator=( ClapTrap const & rhs );	
    ~ClapTrap( void );	

	const std::string&	getName() const;
	const int			getEnergyPoint() const;
	const int			getHitPoints() const;
	void				attack(const std::string& target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);					

private:
	std::string _name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;


};

std::ostream &	operator<<(std::ostream &o, ClapTrap const &i);

#endif
