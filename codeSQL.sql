
CREATE TABLE Adresse(
	ID_adresse     INT  NOT NULL ,
	numero_voie    INT  NOT NULL ,
	nom_rue        VARCHAR (255) NOT NULL ,
	nom_batiment   VARCHAR (255) NOT NULL ,
	numero_etage   INT  NOT NULL ,
	code_postal    VARCHAR  NOT NULL ,
	ville          VARCHAR (255) NOT NULL ,
	autres_infos   VARCHAR (255) NOT NULL  ,
	CONSTRAINT Adresse_PK PRIMARY KEY (ID_adresse)
);


CREATE TABLE Superviseurs(
	ID_personnel   INT IDENTITY (1,1) NOT NULL  ,
	CONSTRAINT Superviseurs_PK PRIMARY KEY (ID_personnel)
);



CREATE TABLE Client(
	id_client               INT IDENTITY (1,1) NOT NULL ,
	nom_client              VARCHAR (255) NOT NULL ,
	prenom_client           VARCHAR (255) NOT NULL ,
	date_naissance_client   DATETIME NOT NULL ,
	date_inscription        DATETIME NOT NULL  ,
	CONSTRAINT Client_PK PRIMARY KEY (id_client)
);



CREATE TABLE Couleurs(
	id_couleur   INT IDENTITY (1,1) NOT NULL ,
	couleur      VARCHAR (50) NOT NULL  ,
	CONSTRAINT Couleurs_PK PRIMARY KEY (id_couleur)
);



CREATE TABLE Natures(
	id_natures   INT IDENTITY (1,1) NOT NULL ,
	nature       VARCHAR (50) NOT NULL  ,
	CONSTRAINT Natures_PK PRIMARY KEY (id_natures)
);



CREATE TABLE Employe(
	ID_employe               INT IDENTITY (1,1) NOT NULL ,
	nom_employe              VARCHAR (50) NOT NULL ,
	prenom_employe           VARCHAR (50) NOT NULL ,
	date_naissance_employe   DATETIME NOT NULL ,
	ID_personnel             INT  NOT NULL  ,
	CONSTRAINT Employe_PK PRIMARY KEY (ID_employe)
);



CREATE TABLE Commande(
	reference_commande    VARCHAR  NOT NULL ,
	total_HT              FLOAT  NOT NULL ,
	TVA                   INT  NOT NULL ,
	date_commande         DATETIME NOT NULL ,
	date_livraison        DATETIME NOT NULL ,
	id_client             INT  NOT NULL ,
	ID_facture            INT  NOT NULL ,
	ID_adresse            INT  NOT NULL ,
	ID_adresse_Facturer   INT  NOT NULL  ,
	CONSTRAINT Commande_PK PRIMARY KEY (reference_commande)
);



CREATE TABLE Article(
	reference_article   INT  NOT NULL ,
	nom_article         VARCHAR (255) NOT NULL ,
	prix_produit_HT     FLOAT  NOT NULL ,
	id_couleur          INT  NOT NULL ,
	id_natures          INT  NOT NULL ,
	id_stocks           INT  NOT NULL  ,
	CONSTRAINT Article_PK PRIMARY KEY (reference_article)
);



CREATE TABLE Facture(
	ID_facture           INT  NOT NULL ,
	date_facturation     DATETIME NOT NULL ,
	logo                 VARCHAR (50) NOT NULL ,
	num_service          VARCHAR (50) NOT NULL ,
	nom_societe          VARCHAR (50) NOT NULL ,
	reference_commande   INT  NOT NULL  ,
	CONSTRAINT Facture_PK PRIMARY KEY (ID_facture)
);



CREATE TABLE Paiement(
	id_payement       INT IDENTITY (1,1) NOT NULL ,
	numero_paiement   INT (255) NOT NULL ,
	date_paiement     DATETIME NOT NULL ,
	moyen_paiement    VARCHAR (50) NOT NULL ,
	ID_facture        INT  NOT NULL  ,
	CONSTRAINT Paiement_PK PRIMARY KEY (id_payement)
);



CREATE TABLE Stocks(
	id_stocks           INT IDENTITY (1,1) NOT NULL ,
	quantite_stock      INT  NOT NULL ,
	seuil_reapro        INT  NOT NULL ,
	reference_article   INT  NOT NULL  ,
	CONSTRAINT Stocks_PK PRIMARY KEY (id_stocks)
);


CREATE TABLE Composer(
	reference_article    INT  NOT NULL ,
	reference_commande   INT  NOT NULL ,
	quantite             INT  NOT NULL  ,
	CONSTRAINT Composer_PK PRIMARY KEY (reference_article,reference_commande)
);




ALTER TABLE Employe
	ADD CONSTRAINT Employe_Superviseurs0_FK
	FOREIGN KEY (ID_personnel)
	REFERENCES Superviseurs(ID_personnel);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Client0_FK
	FOREIGN KEY (id_client)
	REFERENCES Client(id_client);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Facture1_FK
	FOREIGN KEY (ID_facture)
	REFERENCES Facture(ID_facture);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Adresse2_FK
	FOREIGN KEY (ID_adresse)
	REFERENCES Adresse(ID_adresse);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Adresse3_FK
	FOREIGN KEY (ID_adresse_Facturer)
	REFERENCES Adresse(ID_adresse);

ALTER TABLE Commande 
	ADD CONSTRAINT Commande_Facture0_AK 
	UNIQUE (ID_facture);

ALTER TABLE Article
	ADD CONSTRAINT Article_Couleurs0_FK
	FOREIGN KEY (id_couleur)
	REFERENCES Couleurs(id_couleur);

ALTER TABLE Article
	ADD CONSTRAINT Article_Natures1_FK
	FOREIGN KEY (id_natures)
	REFERENCES Natures(id_natures);

ALTER TABLE Article
	ADD CONSTRAINT Article_Stocks2_FK
	FOREIGN KEY (id_stocks)
	REFERENCES Stocks(id_stocks);

ALTER TABLE Article 
	ADD CONSTRAINT Article_Stocks0_AK 
	UNIQUE (id_stocks);

ALTER TABLE Facture
	ADD CONSTRAINT Facture_Commande0_FK
	FOREIGN KEY (reference_commande)
	REFERENCES Commande(reference_commande);

ALTER TABLE Facture 
	ADD CONSTRAINT Facture_Commande0_AK 
	UNIQUE (reference_commande);

ALTER TABLE Paiement
	ADD CONSTRAINT Paiement_Facture0_FK
	FOREIGN KEY (ID_facture)
	REFERENCES Facture(ID_facture);

ALTER TABLE Stocks
	ADD CONSTRAINT Stocks_Article0_FK
	FOREIGN KEY (reference_article)
	REFERENCES Article(reference_article);

ALTER TABLE Stocks 
	ADD CONSTRAINT Stocks_Article0_AK 
	UNIQUE (reference_article);

ALTER TABLE Composer
	ADD CONSTRAINT Composer_Article0_FK
	FOREIGN KEY (reference_article)
	REFERENCES Article(reference_article);

ALTER TABLE Composer
	ADD CONSTRAINT Composer_Commande1_FK
	FOREIGN KEY (reference_commande)
	REFERENCES Commande(reference_commande);
