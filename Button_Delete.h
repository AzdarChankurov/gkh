/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Button_Delete
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Button_Delete.h
*********************************************************************/

#ifndef Button_Delete_H
#define Button_Delete_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsDelete_Tenants_form
class Delete_Tenants_form;

//## link itsMain_form
class Main_form;

//## package Default

//## class Button_Delete
class Button_Delete {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Button_Delete();
    
    //## auto_generated
    ~Button_Delete();
    
    ////    Operations    ////
    
    //## operation Delete_Tenants_form_Open()
    void Delete_Tenants_form_Open();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getDelete() const;
    
    //## auto_generated
    void setDelete(int p_Delete);
    
    //## auto_generated
    Delete_Tenants_form* getItsDelete_Tenants_form() const;
    
    //## auto_generated
    void setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form);
    
    //## auto_generated
    Main_form* getItsMain_form() const;
    
    //## auto_generated
    void setItsMain_form(Main_form* p_Main_form);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Delete;		//## attribute Delete
    
    ////    Relations and components    ////
    
    Delete_Tenants_form* itsDelete_Tenants_form;		//## link itsDelete_Tenants_form
    
    Main_form* itsMain_form;		//## link itsMain_form
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form);
    
    //## auto_generated
    void _setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form);
    
    //## auto_generated
    void _clearItsDelete_Tenants_form();
    
    //## auto_generated
    void __setItsMain_form(Main_form* p_Main_form);
    
    //## auto_generated
    void _setItsMain_form(Main_form* p_Main_form);
    
    //## auto_generated
    void _clearItsMain_form();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Button_Delete.h
*********************************************************************/
