#include "Rectangle.h"

Rectangle::Rectangle() {
	m_largeur = 5.5;
	m_hauteur = 11.2;

}

Rectangle::Rectangle(double largeur, double hauteur) {
	m_largeur = largeur;
	m_hauteur = hauteur;

}



double Rectangle::getHauteur() const{
	return m_hauteur;
}

double Rectangle::getLargeur() const{
	return m_largeur;
}

void Rectangle::setHauteur(double dim){
	m_hauteur = dim;
}
void Rectangle::setLargeur(double dim){
	m_largeur = dim;
}

double Rectangle::getSurface() const{
	return m_largeur*m_hauteur;
}


Rectangle::~Rectangle() {
	// Rien à faire pour cette classe
}

