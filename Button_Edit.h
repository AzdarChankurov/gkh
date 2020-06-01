/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Button_Edit
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Button_Edit.h
*********************************************************************/

#ifndef Button_Edit_H
#define Button_Edit_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsEdit_Tenants_form
class Edit_Tenants_form;

//## link itsMain_form
class Main_form;

//## package Default

//## class Button_Edit
class Button_Edit {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Button_Edit();
    
    //## auto_generated
    ~Button_Edit();
    
    ////    Operations    ////
    
    //## operation Add_Tenants_form_Show()
    void Add_Tenants_form_Show();
    
    //## operation Edit_Tenants_form_Open()
    void Edit_Tenants_form_Open();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getAdd() const;
    
    //## auto_generated
    void setAdd(int p_Add);
    
    //## auto_generated
    int getEdit() const;
    
    //## auto_generated
    void setEdit(int p_Edit);
    
    //## auto_generated
    Edit_Tenants_form* getItsEdit_Tenants_form() const;
    
    //## auto_generated
    void setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form);
    
    //## auto_generated
    Main_form* getItsMain_form() const;
    
    //## auto_generated
    void setItsMain_form(Main_form* p_Main_form);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Add;		//## attribute Add
    
    int Edit;		//## attribute Edit
    
    ////    Relations and components    ////
    
    Edit_Tenants_form* itsEdit_Tenants_form;		//## link itsEdit_Tenants_form
    
    Main_form* itsMain_form;		//## link itsMain_form
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form);
    
    //## auto_generated
    void _setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form);
    
    //## auto_generated
    void _clearItsEdit_Tenants_form();
    
    //## auto_generated
    void __setItsMain_form(Main_form* p_Main_form);
    
    //## auto_generated
    void _setItsMain_form(Main_form* p_Main_form);
    
    //## auto_generated
    void _clearItsMain_form();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Button_Edit.h
*********************************************************************/
