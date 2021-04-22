#pragma once

#include <vector>

class Paquet
{
private:
protected:
	std::vector<Paquet> m_paquet_brasse [40];
	int m_compteur_carte;
	int m_compteur_ressource;
	int m_carte;
public:
	Paquet(std::vector<Paquet> m_paquet_brasse);
	float shuffle();
	float piger();
	virtual void afficher();
};