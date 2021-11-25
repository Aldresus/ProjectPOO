#------------------------------------------------------------
#        Script MySQL.
#------------------------------------------------------------


#------------------------------------------------------------
# Table: Adresse
#------------------------------------------------------------

CREATE TABLE Adresse(
        ID_adresse   Int NOT NULL ,
        numero_voie  Int NOT NULL ,
        nom_rue      Varchar (255) NOT NULL ,
        nom_batiment Varchar (255) NOT NULL ,
        numero_etage Int NOT NULL ,
        code_postal  Int NOT NULL ,
        ville        Varchar (255) NOT NULL ,
        autres_infos Varchar (255) NOT NULL
	,CONSTRAINT Adresse_PK PRIMARY KEY (ID_adresse)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Superviseurs
#------------------------------------------------------------

CREATE TABLE Superviseurs(
        ID_personnel Int  Auto_increment  NOT NULL
	,CONSTRAINT Superviseurs_PK PRIMARY KEY (ID_personnel)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Client
#------------------------------------------------------------

CREATE TABLE Client(
        id_client             Int  Auto_increment  NOT NULL ,
        nom_client            Varchar (255) NOT NULL ,
        prenom_client         Varchar (255) NOT NULL ,
        date_naissance_client Date NOT NULL ,
        date_inscription      Date NOT NULL
	,CONSTRAINT Client_PK PRIMARY KEY (id_client)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Couleurs
#------------------------------------------------------------

CREATE TABLE Couleurs(
        id_couleur Int  Auto_increment  NOT NULL ,
        couleur    Varchar (50) NOT NULL
	,CONSTRAINT Couleurs_PK PRIMARY KEY (id_couleur)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Natures
#------------------------------------------------------------

CREATE TABLE Natures(
        id_natures Int  Auto_increment  NOT NULL ,
        nature     Varchar (50) NOT NULL
	,CONSTRAINT Natures_PK PRIMARY KEY (id_natures)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Employe
#------------------------------------------------------------

CREATE TABLE Employe(
        ID_employe             Int  Auto_increment  NOT NULL ,
        nom_employe            Varchar (50) NOT NULL ,
        prenom_employe         Varchar (50) NOT NULL ,
        date_naissance_employe Date NOT NULL ,
        ID_personnel           Int NOT NULL
	,CONSTRAINT Employe_PK PRIMARY KEY (ID_employe)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Commande
#------------------------------------------------------------

CREATE TABLE Commande(
        reference_commande  Int NOT NULL ,
        total_HT            Int NOT NULL ,
        TVA                 Int NOT NULL ,
        date_commande       Date NOT NULL ,
        date_livraison      Date NOT NULL ,
        id_client           Int NOT NULL ,
        ID_facture          Int NOT NULL ,
        ID_adresse          Int NOT NULL ,
        ID_adresse_Facturer Int NOT NULL
	,CONSTRAINT Commande_PK PRIMARY KEY (reference_commande)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Article
#------------------------------------------------------------

CREATE TABLE Article(
        reference_article Int NOT NULL ,
        nom_article       Varchar (255) NOT NULL ,
        prix_produit_HT   Int NOT NULL ,
        id_couleur        Int NOT NULL ,
        id_natures        Int NOT NULL ,
        id_stocks         Int NOT NULL
	,CONSTRAINT Article_PK PRIMARY KEY (reference_article)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Facture
#------------------------------------------------------------

CREATE TABLE Facture(
        ID_facture         Int NOT NULL ,
        date_facturation   Date NOT NULL ,
        logo               Varchar (50) NOT NULL ,
        num_service        Varchar (50) NOT NULL ,
        nom_societe        Varchar (50) NOT NULL ,
        reference_commande Int NOT NULL
	,CONSTRAINT Facture_PK PRIMARY KEY (ID_facture)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Paiement
#------------------------------------------------------------

CREATE TABLE Paiement(
        id_payement     Int  Auto_increment  NOT NULL ,
        numero_paiement Varchar (255) NOT NULL ,
        date_paiement   Date NOT NULL ,
        moyen_paiement  Varchar (50) NOT NULL ,
        ID_facture      Int NOT NULL
	,CONSTRAINT Paiement_PK PRIMARY KEY (id_payement)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Stocks
#------------------------------------------------------------

CREATE TABLE Stocks(
        id_stocks         Int  Auto_increment  NOT NULL ,
        quantite_stock    Int NOT NULL ,
        seuil_reapro      Int NOT NULL ,
        reference_article Int NOT NULL
	,CONSTRAINT Stocks_PK PRIMARY KEY (id_stocks)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Composer
#------------------------------------------------------------

CREATE TABLE Composer(
        reference_article  Int NOT NULL ,
        reference_commande Int NOT NULL ,
        quantite           Int NOT NULL
	,CONSTRAINT Composer_PK PRIMARY KEY (reference_article,reference_commande)
)ENGINE=InnoDB;




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
