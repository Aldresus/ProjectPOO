/*------------------------------------------------------------
*        Script SQLSERVER 
------------------------------------------------------------*/


/*------------------------------------------------------------
-- Table: Adresse
------------------------------------------------------------*/
CREATE TABLE Adresse(
	ID_adresse     INT  NOT NULL ,
	numero_voie    INT  NOT NULL ,
	nom_rue        VARCHAR (255) NOT NULL ,
	nom_batiment   VARCHAR (255) NOT NULL ,
	numero_etage   INT  NOT NULL ,
	code_postal    INT  NOT NULL ,
	ville          VARCHAR (255) NOT NULL ,
	autres_infos   VARCHAR (255) NOT NULL  ,
	CONSTRAINT Adresse_PK PRIMARY KEY (ID_adresse)
);


/*------------------------------------------------------------
-- Table: Date
------------------------------------------------------------*/
CREATE TABLE Date(
	ID_date   INT IDENTITY (1,1) NOT NULL ,
	date      INT  NOT NULL  ,
	CONSTRAINT Date_PK PRIMARY KEY (ID_date)
);


/*------------------------------------------------------------
-- Table: Superviseurs
------------------------------------------------------------*/
CREATE TABLE Superviseurs(
	ID_personnel   INT IDENTITY (1,1) NOT NULL  ,
	CONSTRAINT Superviseurs_PK PRIMARY KEY (ID_personnel)
);


/*------------------------------------------------------------
-- Table: Personne
------------------------------------------------------------*/
CREATE TABLE Personne(
	ID_personne   INT IDENTITY (1,1) NOT NULL ,
	nom           VARCHAR (255) NOT NULL ,
	prenom        VARCHAR (255) NOT NULL ,
	ID_date       INT  NOT NULL  ,
	CONSTRAINT Personne_PK PRIMARY KEY (ID_personne)
);


/*------------------------------------------------------------
-- Table: Couleurs
------------------------------------------------------------*/
CREATE TABLE Couleurs(
	id_couleur   INT IDENTITY (1,1) NOT NULL ,
	couleur      VARCHAR (50) NOT NULL  ,
	CONSTRAINT Couleurs_PK PRIMARY KEY (id_couleur)
);


/*------------------------------------------------------------
-- Table: Natures
------------------------------------------------------------*/
CREATE TABLE Natures(
	id_natures   INT IDENTITY (1,1) NOT NULL ,
	nature       VARCHAR (50) NOT NULL  ,
	CONSTRAINT Natures_PK PRIMARY KEY (id_natures)
);


/*------------------------------------------------------------
-- Table: Article
------------------------------------------------------------*/
CREATE TABLE Article(
	reference_article          INT  NOT NULL ,
	nom_article                VARCHAR (255) NOT NULL ,
	seuil_reaprovisionnement   INT  NOT NULL ,
	quantite_stock             INT  NOT NULL ,
	prix_produit_HT            INT  NOT NULL ,
	id_couleur                 INT  NOT NULL ,
	id_natures                 INT  NOT NULL  ,
	CONSTRAINT Article_PK PRIMARY KEY (reference_article)
);


/*------------------------------------------------------------
-- Table: Employe
------------------------------------------------------------*/
CREATE TABLE Employe(
	ID_employe     INT IDENTITY (1,1) NOT NULL ,
	ID_personnel   INT  NOT NULL ,
	ID_personne    INT  NOT NULL  ,
	CONSTRAINT Employe_PK PRIMARY KEY (ID_employe)
);


/*------------------------------------------------------------
-- Table: Societe
------------------------------------------------------------*/
CREATE TABLE Societe(
	id_societe              INT IDENTITY (1,1) NOT NULL ,
	nom_societe             VARCHAR (255) NOT NULL ,
	logo_entreprise         VARCHAR (255) NOT NULL ,
	numero_service_client   VARCHAR (255) NOT NULL  ,
	CONSTRAINT Societe_PK PRIMARY KEY (id_societe)
);


/*------------------------------------------------------------
-- Table: Localiser
------------------------------------------------------------*/
CREATE TABLE Localiser(
	ID_personne   INT  NOT NULL ,
	ID_adresse    INT  NOT NULL  ,
	CONSTRAINT Localiser_PK PRIMARY KEY (ID_personne,ID_adresse)
);


/*------------------------------------------------------------
-- Table: Commande
------------------------------------------------------------*/
CREATE TABLE Commande(
	reference_commande   INT  NOT NULL ,
	moyen_paiement       VARCHAR (255) NOT NULL ,
	ID_personne          INT  NOT NULL ,
	ID_facture           INT  NOT NULL ,
	ID_date              INT  NOT NULL  ,
	CONSTRAINT Commande_PK PRIMARY KEY (reference_commande)
);


/*------------------------------------------------------------
-- Table: Facture
------------------------------------------------------------*/
CREATE TABLE Facture(
	ID_facture           INT  NOT NULL ,
	tva                  FLOAT  NOT NULL ,
	total_ht             FLOAT  NOT NULL ,
	reference_commande   INT  NOT NULL ,
	ID_date              INT  NOT NULL ,
	id_societe           INT  NOT NULL  ,
	CONSTRAINT Facture_PK PRIMARY KEY (ID_facture)
);


/*------------------------------------------------------------
-- Table: Paiement
------------------------------------------------------------*/
CREATE TABLE Paiement(
	id_payement       INT IDENTITY (1,1) NOT NULL ,
	numero_paiement   VARCHAR (255) NOT NULL ,
	ID_facture        INT  NOT NULL ,
	ID_date           INT  NOT NULL  ,
	CONSTRAINT Paiement_PK PRIMARY KEY (id_payement)
);


/*------------------------------------------------------------
-- Table: Contenir
------------------------------------------------------------*/
CREATE TABLE Contenir(
	reference_article    INT  NOT NULL ,
	reference_commande   INT  NOT NULL ,
	quantite             INT  NOT NULL  ,
	CONSTRAINT Contenir_PK PRIMARY KEY (reference_article,reference_commande)
);




ALTER TABLE Personne
	ADD CONSTRAINT Personne_Date0_FK
	FOREIGN KEY (ID_date)
	REFERENCES Date(ID_date);

ALTER TABLE Article
	ADD CONSTRAINT Article_Couleurs0_FK
	FOREIGN KEY (id_couleur)
	REFERENCES Couleurs(id_couleur);

ALTER TABLE Article
	ADD CONSTRAINT Article_Natures1_FK
	FOREIGN KEY (id_natures)
	REFERENCES Natures(id_natures);

ALTER TABLE Employe
	ADD CONSTRAINT Employe_Superviseurs0_FK
	FOREIGN KEY (ID_personnel)
	REFERENCES Superviseurs(ID_personnel);

ALTER TABLE Employe
	ADD CONSTRAINT Employe_Personne1_FK
	FOREIGN KEY (ID_personne)
	REFERENCES Personne(ID_personne);

ALTER TABLE Employe 
	ADD CONSTRAINT Employe_Personne0_AK 
	UNIQUE (ID_personne);

ALTER TABLE Localiser
	ADD CONSTRAINT Localiser_Personne0_FK
	FOREIGN KEY (ID_personne)
	REFERENCES Personne(ID_personne);

ALTER TABLE Localiser
	ADD CONSTRAINT Localiser_Adresse1_FK
	FOREIGN KEY (ID_adresse)
	REFERENCES Adresse(ID_adresse);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Personne0_FK
	FOREIGN KEY (ID_personne)
	REFERENCES Personne(ID_personne);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Facture1_FK
	FOREIGN KEY (ID_facture)
	REFERENCES Facture(ID_facture);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Date2_FK
	FOREIGN KEY (ID_date)
	REFERENCES Date(ID_date);

ALTER TABLE Commande 
	ADD CONSTRAINT Commande_Facture0_AK 
	UNIQUE (ID_facture);

ALTER TABLE Facture
	ADD CONSTRAINT Facture_Commande0_FK
	FOREIGN KEY (reference_commande)
	REFERENCES Commande(reference_commande);

ALTER TABLE Facture
	ADD CONSTRAINT Facture_Date1_FK
	FOREIGN KEY (ID_date)
	REFERENCES Date(ID_date);

ALTER TABLE Facture
	ADD CONSTRAINT Facture_Societe2_FK
	FOREIGN KEY (id_societe)
	REFERENCES Societe(id_societe);

ALTER TABLE Facture 
	ADD CONSTRAINT Facture_Commande0_AK 
	UNIQUE (reference_commande);

ALTER TABLE Paiement
	ADD CONSTRAINT Paiement_Facture0_FK
	FOREIGN KEY (ID_facture)
	REFERENCES Facture(ID_facture);

ALTER TABLE Paiement
	ADD CONSTRAINT Paiement_Date1_FK
	FOREIGN KEY (ID_date)
	REFERENCES Date(ID_date);

ALTER TABLE Contenir
	ADD CONSTRAINT Contenir_Article0_FK
	FOREIGN KEY (reference_article)
	REFERENCES Article(reference_article);

ALTER TABLE Contenir
	ADD CONSTRAINT Contenir_Commande1_FK
	FOREIGN KEY (reference_commande)
	REFERENCES Commande(reference_commande);
