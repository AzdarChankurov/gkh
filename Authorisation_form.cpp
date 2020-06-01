/********************************************************************
	Rhapsody	: 9.0 
	Login		: Azdarr
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Authorisation_form
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Authorisation_form.cpp
*********************************************************************/

//## auto_generated
#include "Authorisation_form.h"
//## link itsMain_form
#include "Main_form.h"
//## package Default

//## class Authorisation_form
Authorisation_form::Authorisation_form() {
    itsMain_form = NULL;
}

Authorisation_form::~Authorisation_form() {
    cleanUpRelations();
}

void Authorisation_form::Authorisation() {
    //#[ operation Authorisation()
    //#]
}

int Authorisation_form::getLogin() const {
    return Login;
}

void Authorisation_form::setLogin(int p_Login) {
    Login = p_Login;
}

int Authorisation_form::getPassword() const {
    return Password;
}

void Authorisation_form::setPassword(int p_Password) {
    Password = p_Password;
}

Main_form* Authorisation_form::getItsMain_form() const {
    return itsMain_form;
}

void Authorisation_form::setItsMain_form(Main_form* p_Main_form) {
    if(p_Main_form != NULL)
        {
            p_Main_form->_setItsAuthorisation_form(this);
        }
    _setItsMain_form(p_Main_form);
}

void Authorisation_form::cleanUpRelations() {
    if(itsMain_form != NULL)
        {
            Authorisation_form* p_Authorisation_form = itsMain_form->getItsAuthorisation_form();
            if(p_Authorisation_form != NULL)
                {
                    itsMain_form->__setItsAuthorisation_form(NULL);
                }
            itsMain_form = NULL;
        }
}

void Authorisation_form::__setItsMain_form(Main_form* p_Main_form) {
    itsMain_form = p_Main_form;
}

void Authorisation_form::_setItsMain_form(Main_form* p_Main_form) {
    if(itsMain_form != NULL)
        {
            itsMain_form->__setItsAuthorisation_form(NULL);
        }
    __setItsMain_form(p_Main_form);
}

void Authorisation_form::_clearItsMain_form() {
    itsMain_form = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Authorisation_form.cpp
*********************************************************************/
