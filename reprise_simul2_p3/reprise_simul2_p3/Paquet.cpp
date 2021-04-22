#include "Paquet.h"

#include <vector>
#include <iostream>

Paquet::Paquet(std::vector<Paquet> m_paquet_brasse) :m_cartes{ cartes }, m_paquet_brasse{ m_paquet_brasse } {}

float Paquet::piger()
{
	if (m_cartes.size() > 0)
	{
		if (m_main.size() < 10)
		{
			m_cartes.size() - 1;
			m_main.size() + 1;
		}
	}
}

void Paquet::afficher()
{
	std::cout << "Paquet\n" + m_paque_brasse;

}


float Paquet::shuffle()
{
	for (int i = 0; i < 40; i++)
	{
		cartes = cartes + ressources;
		int r = i + (rand() % (40 - i));
		while (r != types)
		{
			int r = i + (rand() % (40 - i));
		}
	}
}