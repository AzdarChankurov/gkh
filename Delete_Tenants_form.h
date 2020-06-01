/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Delete_Tenants_form
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Delete_Tenants_form.h
*********************************************************************/

#ifndef Delete_Tenants_form_H
#define Delete_Tenants_form_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsButton_Delete
class Button_Delete;

//## link itsDataBaseTable_Tenants
class DataBaseTable_Tenants;

//## link itsMain_form
class Main_form;

//## package Default

//## class Delete_Tenants_form
class Delete_Tenants_form {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Delete_Tenants_form();
    
    //## auto_generated
    ~Delete_Tenants_form();
    
    ////    Operations    ////
    
    //## operation Delete()
    void Delete();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getPassport() const;
    
    //## auto_generated
    void setPassport(int p_Passport);
    
    //## auto_generated
    Button_Delete* getItsButton_Delete() const;
    
    //## auto_generated
    void setItsButton_Delete(Button_Delete* p_Button_Delete);
    
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
    
    int Passport;		//## attribute Passport
    
    ////    Relations and components    ////
    
    Button_Delete* itsButton_Delete;		//## link itsButton_Delete
    
    DataBaseTable_Tenants* itsDataBaseTable_Tenants;		//## link itsDataBaseTable_Tenants
    
    Main_form* itsMain_form;		//## link itsMain_form
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsButton_Delete(Button_Delete* p_Button_Delete);
    
    //## auto_generated
    void _setItsButton_Delete(Button_Delete* p_Button_Delete);
    
    //## auto_generated
    void _clearItsButton_Delete();
    
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
	File Path	: DefaultComponent\DefaultConfig\Delete_Tenants_form.h
*********************************************************************/
