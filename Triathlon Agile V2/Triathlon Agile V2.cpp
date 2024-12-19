#include <iostream>
#include "categorie.h"
#include "triathlete.h"
#include "inscription.h"
#include "triathlon.h"
#include "type.h"
#include "prelevement.h"
#include "epreuve.h"
#include "annee.h"
#include "taux.h"
#include "produitdopant.h"
#include "temps.h"
#include "course.h"
#include "natation.h"
#include "cyclisme.h"

int main()
{
	// CREATION DES DONNEES

	// Création de deux Categories
	Categorie* J1 = new Categorie(1, "Junior", 16, 19, NULL);
	Categorie* S1 = new Categorie(2, "Senior", 20, 39, NULL);

	// Création de quatre Triathletes
	Triathlete A(1, "TOTO", "TOTO", "M", "Annecy", "23/02/2009", J1, NULL);
	Triathlete B(2, "TITI", "TITI", "F", "Rumilly", "12/02/2008", J1, NULL);
	Triathlete C(3, "TATA", "TATA", "M", "Chambéry", "22/03/2000", S1, NULL);
	Triathlete D(4, "TUTU", "TUTU", "F", "Epagny", "30/06/2009", J1, NULL);

	// Création d'un type d'épreuve
	Type M(0, "M", 1.5, 50.0, 10.0);
	// 1. Afficher la distance de l'épreuve de natation du type M
	std::cout << "Distance natation : " << M.getLongNage() << " km" << std::endl;

	// Création du Triathlon International d’Annecy
	Epreuve* lesEpreuves[2];
	Inscription** lesInscriptions = new Inscription * [100];
	Triathlon* Annecy = new Triathlon(1, "Triathlon International d’Annecy", "le Pasquier", "21/06/2025", lesInscriptions, lesEpreuves, M);

	// 2. Type du Triathlon d'Annecy
	Type* TriathlonAnnecy = new Type(1, "M", 1.5, 50.0, 10.0);

	// 3. Faire une liste de 100 Inscritpions vides pour un Triathlon ...

	// Réaliser deux Inscriptions
	Inscription J11(1, "22/11/2024", false, 0, &A, NULL, Annecy, NULL, lesEpreuves);
	Inscription J12(2, "22/11/2024", false, 0, &B, NULL, Annecy, NULL, lesEpreuves);

	// 4. Insérer les deux Inscriptions à la Liste d'Inscriptions lesInscrptions
	lesInscriptions[0] = &J11;
	lesInscriptions[1] = &J12;

	// 5. Ajouter la liste lesInscriptions au Triathlon d'Annecy
	Annecy->addLesinscriptions(lesInscriptions);

	// Ajouter les deux Inscriptions sur la partie Natation du Triathlon d’Annecy
	Natation J11nage(9, "45.0", "5.0", Annecy, J11);
	Natation J12nage(9, "45.0", "5.0", Annecy, J12);

	// AFFICHAGE DES DONNEES

	// Faire une Liste de 100 Inscriptions vides pour le Triathlon d’Annecy ...
	Inscription** lesInscriptionsAnnecy = new Inscription * [100];


	// 6. Afficher la temperature de l’eau pour la partie natation de l’Inscription J11 à Annecy
	std::cout << "Longeur natation : " << J11nage.getTemperature() << " km" << std::endl;

	// 7. A partir de l’Inscription de J11 récupérer le Triathlon et les Inscriptions associées
	std::cout << "Type Triathlon : " << J11.getLeTriathlon()->affiche() << std::endl;

	// 8. Afficher les deux Triathletes inscrits sur le Triathlon d’Annecy avec leur Categorie
	J11.getLeTriathlete()->affiche();
	J12.getLeTriathlete()->affiche();

	// 9. Afficher les deux Inscriptions sur le Triathlon d’Annecy
	std::cout << lesInscriptionsAnnecy[0] << std::endl;
	std::cout << lesInscriptionsAnnecy[1] << std::endl;

	Triathlete** listJunior = new Triathlete * [3];

	// 10. Ajouter les Triathlete A,B,D à la liste ListJunior
	listJunior[0] = &A;
	listJunior[1] = &B;
	listJunior[2] = &D;

	// 11. Ajouter la Liste ListJunior de Triathletes juniors à la Categorie J1
	J1->addLeTriathletes(listJunior);

	Triathlete** list = new Triathlete * [3];
	// 12. Afficher les Triathletes juniors de la Categorie J1 en vérifiant la Categorie avec une boucle while à partir de List
	int i = 0;
	while (listJunior[i] != nullptr && i < 3)
	{
		if (listJunior[i]->getLaCategorie() == J1)
		{
			list[i] = listJunior[i];
			i++;
		}
		std::cout << list[i]->affiche() << std::endl;
	}

	return 0;

}


