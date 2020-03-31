/*
 * Rectangle.h
 *
 *  Created on: 31 Mar 2020
 *      Author: Sylvain
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle {
public:
	/**
	 * constructeur par défaut
	 * initialise largeur à 5.5
	 * initialise hauteur à 11.2
	 */
	Rectangle();

	/**
	* constructeur
	* \param largeur : la largeur
	* \param hauteur : la hauteur
	*/

	Rectangle(double largeur, double hauteur);

	/**
	 * destructeur
	 */
	~Rectangle();

	/**
	* Calcule la surface du rectangle
	* \return la surface
	*/
	double getSurface() const;
	/**
	* Renvoie la hauteur
	* \return la hauteur
	*/
	double getHauteur() const;
	/**
	* Renvoie la largeur
	* \return la largeur
	*/
	double getLargeur() const;
	/**
	* Mutateur de la hauteur
	* \param dim : la hauteur
	*/
	void setHauteur(double dim);
	/**
	* Mutateur de la largeur
	* \param dim : la largeur
	*/
	void setLargeur(double dim);

	// declaration des attributs
	private:
		double m_hauteur;
		double m_largeur;
};

#endif /* RECTANGLE_H_ */
