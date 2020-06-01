/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Button_Edit
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Button_Edit.cpp
*********************************************************************/

//## auto_generated
#include "Button_Edit.h"
//## link itsEdit_Tenants_form
#include "Edit_Tenants_form.h"
//## link itsMain_form
#include "Main_form.h"
//## package Default

//## class Button_Edit
Button_Edit::Button_Edit() {
    itsEdit_Tenants_form = NULL;
    itsMain_form = NULL;
}

Button_Edit::~Button_Edit() {
    cleanUpRelations();
}

void Button_Edit::Add_Tenants_form_Show() {
    //#[ operation Add_Tenants_form_Show()
    //#]
}

void Button_Edit::Edit_Tenants_form_Open() {
    //#[ operation Edit_Tenants_form_Open()
    //#]
}

int Button_Edit::getAdd() const {
    return Add;
}

void Button_Edit::setAdd(int p_Add) {
    Add = p_Add;
}

int Button_Edit::getEdit() const {
    return Edit;
}

void Button_Edit::setEdit(int p_Edit) {
    Edit = p_Edit;
}

Edit_Tenants_form* Button_Edit::getItsEdit_Tenants_form() const {
    return itsEdit_Tenants_form;
}

void Button_Edit::setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form) {
    if(p_Edit_Tenants_form != NULL)
        {
            p_Edit_Tenants_form->_setItsButton_Edit(this);
        }
    _setItsEdit_Tenants_form(p_Edit_Tenants_form);
}

Main_form* Button_Edit::getItsMain_form() const {
    return itsMain_form;
}

void Button_Edit::setItsMain_form(Main_form* p_Main_form) {
    if(p_Main_form != NULL)
        {
            p_Main_form->_setItsButton_Edit(this);
        }
    _setItsMain_form(p_Main_form);
}

void Button_Edit::cleanUpRelations() {
    if(itsEdit_Tenants_form != NULL)
        {
            Button_Edit* p_Button_Edit = itsEdit_Tenants_form->getItsButton_Edit();
            if(p_Button_Edit != NULL)
                {
                    itsEdit_Tenants_form->__setItsButton_Edit(NULL);
                }
            itsEdit_Tenants_form = NULL;
        }
    if(itsMain_form != NULL)
        {
            Button_Edit* p_Button_Edit = itsMain_form->getItsButton_Edit();
            if(p_Button_Edit != NULL)
                {
                    itsMain_form->__setItsButton_Edit(NULL);
                }
            itsMain_form = NULL;
        }
}

void Button_Edit::__setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form) {
    itsEdit_Tenants_form = p_Edit_Tenants_form;
}

void Button_Edit::_setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form) {
    if(itsEdit_Tenants_form != NULL)
        {
            itsEdit_Tenants_form->__setItsButton_Edit(NULL);
        }
    __setItsEdit_Tenants_form(p_Edit_Tenants_form);
}

void Button_Edit::_clearItsEdit_Tenants_form() {
    itsEdit_Tenants_form = NULL;
}

void Button_Edit::__setItsMain_form(Main_form* p_Main_form) {
    itsMain_form = p_Main_form;
}

void Button_Edit::_setItsMain_form(Main_form* p_Main_form) {
    if(itsMain_form != NULL)
        {
            itsMain_form->__setItsButton_Edit(NULL);
        }
    __setItsMain_form(p_Main_form);
}

void Button_Edit::_clearItsMain_form() {
    itsMain_form = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Button_Edit.cpp
*********************************************************************/
