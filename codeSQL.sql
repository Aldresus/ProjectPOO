/*------------------------------------------------------------
*        Script SQLSERVER 
------------------------------------------------------------*/


/*------------------------------------------------------------
-- Table: Superviseurs
------------------------------------------------------------*/
CREATE TABLE Superviseurs(
	id_superviseur               INT IDENTITY (1,1) NOT NULL ,
	nom_superviseur              VARCHAR (50) NOT NULL ,
	prenom_superviseur           VARCHAR (50) NOT NULL ,
	date_naissance_superviseur   DATETIME NOT NULL ,
	adresse_superviseur          VARCHAR (50) NOT NULL  ,
	CONSTRAINT Superviseurs_PK PRIMARY KEY (id_superviseur)
);


/*------------------------------------------------------------
-- Table: Article
------------------------------------------------------------*/
CREATE TABLE Article(
	reference_article    INT IDENTITY (1,1) NOT NULL ,
	nom_article          VARCHAR (255) NOT NULL ,
	prix_produit_HT      FLOAT  NOT NULL ,
	couleur              VARCHAR (50) NOT NULL ,
	nature               VARCHAR (50) NOT NULL ,
	remise_commerciale   FLOAT  NOT NULL ,
	marge_commerciale    FLOAT  NOT NULL  ,
	CONSTRAINT Article_PK PRIMARY KEY (reference_article)
);


/*------------------------------------------------------------
-- Table: Client
------------------------------------------------------------*/
CREATE TABLE Client(
	id_client               INT IDENTITY (1,1) NOT NULL ,
	nom_client              VARCHAR (255) NOT NULL ,
	prenom_client           VARCHAR (255) NOT NULL ,
	date_naissance_client   DATETIME NOT NULL ,
	date_inscription        DATETIME NOT NULL ,
	adresse_client          VARCHAR (50) NOT NULL  ,
	CONSTRAINT Client_PK PRIMARY KEY (id_client)
);


/*------------------------------------------------------------
-- Table: Commande
------------------------------------------------------------*/
CREATE TABLE Commande(
	id_commande   VARCHAR (255) NOT NULL ,
	reference_commande   VARCHAR (255) NOT NULL ,
	total_HT             FLOAT  NOT NULL ,
	TVA                  INT  NOT NULL ,
	date_commande        DATETIME NOT NULL ,
	date_livraison       DATETIME NOT NULL ,
	adresse_livraison    VARCHAR (50) NOT NULL ,
	id_client            INT  NOT NULL  ,
	CONSTRAINT Commande_PK PRIMARY KEY (id_commande)

	,CONSTRAINT Commande_Client_FK FOREIGN KEY (id_client) REFERENCES Client(id_client)
);


/*------------------------------------------------------------
-- Table: Facture
------------------------------------------------------------*/
CREATE TABLE Facture(
	ID_facture            INT IDENTITY NOT NULL ,
	date_facturation      DATETIME NOT NULL ,
	logo                  VARCHAR (50) NOT NULL ,
	num_service           VARCHAR (50) NOT NULL ,
	nom_societe           VARCHAR (50) NOT NULL ,
	adresse_facturation   VARCHAR (50) NOT NULL ,
	reference_commande    VARCHAR (255) NOT NULL  ,
	CONSTRAINT Facture_PK PRIMARY KEY (ID_facture)

	,CONSTRAINT Facture_Commande_FK FOREIGN KEY (id_commande) REFERENCES Commande(id_commande)
);


/*------------------------------------------------------------
-- Table: Employe
------------------------------------------------------------*/
CREATE TABLE Employe(
	ID_employe               INT IDENTITY (1,1) NOT NULL ,
	nom_employe              VARCHAR (50) NOT NULL ,
	prenom_employe           VARCHAR (50) NOT NULL ,
	date_naissance_employe   DATETIME NOT NULL ,
	adresse_employe          VARCHAR (50) NOT NULL ,
	id_superviseur           INT  NOT NULL  ,
	CONSTRAINT Employe_PK PRIMARY KEY (ID_employe)

	,CONSTRAINT Employe_Superviseurs_FK FOREIGN KEY (id_superviseur) REFERENCES Superviseurs(id_superviseur)
);


/*------------------------------------------------------------
-- Table: Paiement
------------------------------------------------------------*/
CREATE TABLE Paiement(
	id_payement       INT IDENTITY (1,1) NOT NULL ,
	numero_paiement   INT  NOT NULL ,
	date_paiement     DATETIME NOT NULL ,
	moyen_paiement    VARCHAR (50) NOT NULL ,
	ID_facture        INT  NOT NULL  ,
	CONSTRAINT Paiement_PK PRIMARY KEY (id_payement)

	,CONSTRAINT Paiement_Facture_FK FOREIGN KEY (ID_facture) REFERENCES Facture(ID_facture)
);


/*------------------------------------------------------------
-- Table: Stocks
------------------------------------------------------------*/
CREATE TABLE Stocks(
	id_stocks           INT IDENTITY (1,1) NOT NULL ,
	quantite_stock      INT  NOT NULL ,
	seuil_reapro        INT  NOT NULL ,
	demarque_inconnue   FLOAT  NOT NULL ,
	reference_article   INT  NOT NULL  ,
	CONSTRAINT Stocks_PK PRIMARY KEY (id_stocks)

	,CONSTRAINT Stocks_Article_FK FOREIGN KEY (reference_article) REFERENCES Article(reference_article)
	,CONSTRAINT Stocks_Article_AK UNIQUE (reference_article)
);


/*------------------------------------------------------------
-- Table: Composer
------------------------------------------------------------*/
CREATE TABLE Composer(
	reference_article    INT  NOT NULL ,
	reference_commande   VARCHAR (255) NOT NULL ,
	quantite             INT  NOT NULL  ,
	CONSTRAINT Composer_PK PRIMARY KEY (reference_article,id_commande)

	,CONSTRAINT Composer_Article_FK FOREIGN KEY (reference_article) REFERENCES Article(reference_article)
	,CONSTRAINT Composer_Commande0_FK FOREIGN KEY (id_commande) REFERENCES Commande(id_commande)
);



