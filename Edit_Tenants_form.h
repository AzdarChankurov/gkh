/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Edit_Tenants_form
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Edit_Tenants_form.h
*********************************************************************/

#ifndef Edit_Tenants_form_H
#define Edit_Tenants_form_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsButton_Edit
class Button_Edit;

//## link itsDataBaseTable_Tenants
class DataBaseTable_Tenants;

//## link itsMain_form
class Main_form;

//## package Default

//## class Edit_Tenants_form
class Edit_Tenants_form {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Edit_Tenants_form();
    
    //## auto_generated
    ~Edit_Tenants_form();
    
    ////    Operations    ////
    
    //## operation Edit()
    void Edit();
    
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
    Button_Edit* getItsButton_Edit() const;
    
    //## auto_generated
    void setItsButton_Edit(Button_Edit* p_Button_Edit);
    
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
    
    Button_Edit* itsButton_Edit;		//## link itsButton_Edit
    
    DataBaseTable_Tenants* itsDataBaseTable_Tenants;		//## link itsDataBaseTable_Tenants
    
    Main_form* itsMain_form;		//## link itsMain_form
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsButton_Edit(Button_Edit* p_Button_Edit);
    
    //## auto_generated
    void _setItsButton_Edit(Button_Edit* p_Button_Edit);
    
    //## auto_generated
    void _clearItsButton_Edit();
    
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
	File Path	: DefaultComponent\DefaultConfig\Edit_Tenants_form.h
*********************************************************************/
