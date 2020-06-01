/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Button_Add
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Button_Add.h
*********************************************************************/

#ifndef Button_Add_H
#define Button_Add_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsAdd_Tenants_form
class Add_Tenants_form;

//## link itsMain_form
class Main_form;

//## package Default

//## class Button_Add
class Button_Add {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Button_Add();
    
    //## auto_generated
    ~Button_Add();
    
    ////    Operations    ////
    
    //## operation Add_Tenants_form_Open()
    void Add_Tenants_form_Open();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getAdd() const;
    
    //## auto_generated
    void setAdd(int p_Add);
    
    //## auto_generated
    Add_Tenants_form* getItsAdd_Tenants_form() const;
    
    //## auto_generated
    void setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form);
    
    //## auto_generated
    Main_form* getItsMain_form() const;
    
    //## auto_generated
    void setItsMain_form(Main_form* p_Main_form);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Add;		//## attribute Add
    
    ////    Relations and components    ////
    
    Add_Tenants_form* itsAdd_Tenants_form;		//## link itsAdd_Tenants_form
    
    Main_form* itsMain_form;		//## link itsMain_form
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form);
    
    //## auto_generated
    void _setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form);
    
    //## auto_generated
    void _clearItsAdd_Tenants_form();
    
    //## auto_generated
    void __setItsMain_form(Main_form* p_Main_form);
    
    //## auto_generated
    void _setItsMain_form(Main_form* p_Main_form);
    
    //## auto_generated
    void _clearItsMain_form();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Button_Add.h
*********************************************************************/
