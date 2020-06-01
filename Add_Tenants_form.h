/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Azdarr
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Add_Tenants_form
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Add_Tenants_form.h
*********************************************************************/

#ifndef Add_Tenants_form_H
#define Add_Tenants_form_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsButton_Add
class Button_Add;

//## link itsDataBaseTable_Tenants
class DataBaseTable_Tenants;

//## link itsMain_form
class Main_form;

//## package Default

//## class Add_Tenants_form
class Add_Tenants_form {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Add_Tenants_form();
    
    //## auto_generated
    ~Add_Tenants_form();
    
    ////    Operations    ////
    
    //## operation Add()
    void Add();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getAddress() const;
    
    //## auto_generated
    void setAddress(int p_Address);
    
    //## auto_generated
    int getMiddlename() const;
    
    //## auto_generated
    void setMiddlename(int p_Middlename);
    
    //## auto_generated
    int getName() const;
    
    //## auto_generated
    void setName(int p_Name);
    
    //## auto_generated
    int getPassport() const;
    
    //## auto_generated
    void setPassport(int p_Passport);
    
    //## auto_generated
    int getSurname() const;
    
    //## auto_generated
    void setSurname(int p_Surname);
    
    //## auto_generated
    Button_Add* getItsButton_Add() const;
    
    //## auto_generated
    void setItsButton_Add(Button_Add* p_Button_Add);
    
    //## auto_generated
    DataBaseTable_Tenants* getItsDataBaseTable_Tenants() const;
    
    //## auto_generated
    void setItsDataBaseTable_Tenants(DataBaseTable_Tenants* p_DataBaseTable_Tenants);
    
    //## auto_generated
    Main_form* getItsMain_form() const;
    
    //## auto_generated
    void setItsMain_form(Main_form* p_Main_form);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Address;		//## attribute Address
    
    int Middlename;		//## attribute Middlename
    
    int Name;		//## attribute Name
    
    int Passport;		//## attribute Passport
    
    int Surname;		//## attribute Surname
    
    ////    Relations and components    ////
    
    Button_Add* itsButton_Add;		//## link itsButton_Add
    
    DataBaseTable_Tenants* itsDataBaseTable_Tenants;		//## link itsDataBaseTable_Tenants
    
    Main_form* itsMain_form;		//## link itsMain_form
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsButton_Add(Button_Add* p_Button_Add);
    
    //## auto_generated
    void _setItsButton_Add(Button_Add* p_Button_Add);
    
    //## auto_generated
    void _clearItsButton_Add();
    
    //## auto_generated
    void __setItsDataBaseTable_Tenants(DataBaseTable_Tenants* p_DataBaseTable_Tenants);
    
    //## auto_generated
    void _setItsDataBaseTable_Tenants(DataBaseTable_Tenants* p_DataBaseTable_Tenants);
    
    //## auto_generated
    void _clearItsDataBaseTable_Tenants();
    
    //## auto_generated
    void __setItsMain_form(Main_form* p_Main_form);
    
    //## auto_generated
    void _setItsMain_form(Main_form* p_Main_form);
    
    //## auto_generated
    void _clearItsMain_form();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Add_Tenants_form.h
*********************************************************************/
