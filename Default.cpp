/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//## auto_generated
#include "Default.h"
//## auto_generated
#include "Add_Tenants_form.h"
//## auto_generated
#include "Authorisation_form.h"
//## auto_generated
#include "Button_Add.h"
//## auto_generated
#include "Button_Delete.h"
//## auto_generated
#include "Button_Edit.h"
//## auto_generated
#include "DataBaseTable_Tenants.h"
//## auto_generated
#include "Delete_Tenants_form.h"
//## auto_generated
#include "Edit_Tenants_form.h"
//## auto_generated
#include "Main_form.h"
//## package Default



//## event Error()
Error::Error() {
    setId(Error_Default_id);
}

bool Error::isTypeOf(const short id) const {
    return (Error_Default_id==id);
}

//## event Authorization()
Authorization::Authorization() {
    setId(Authorization_Default_id);
}

bool Authorization::isTypeOf(const short id) const {
    return (Authorization_Default_id==id);
}

//## event Authorisation()
Authorisation::Authorisation() {
    setId(Authorisation_Default_id);
}

bool Authorisation::isTypeOf(const short id) const {
    return (Authorisation_Default_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
