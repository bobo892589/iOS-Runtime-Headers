/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentOptionsViewController : UITableViewController <ABPeoplePickerNavigationControllerDelegate, ABPostalAddressEditorDelegate, UITextFieldDelegate> {
    ABPostalAddressEditorNavigationController *_addressEditorViewController;
    <PKPaymentOptionsViewControllerDelegate> *_delegate;
    BOOL _isEditable;
    PKPaymentOptionsModel *_optionsModel;
    int _optionsStyle;
    PKPassSnapshotter *_passSnapshotter;
    id /* block */ _pickedABPersonHandler;
    id /* block */ _pickedABPropertyHandler;
    BOOL _showDisclosureIndicators;
    NSString *_title;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentOptionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ pickedABPersonHandler;
@property (nonatomic, copy) id /* block */ pickedABPropertyHandler;
@property (nonatomic) BOOL showDisclosureIndicators;
@property (readonly) Class superclass;

- (id)_passSnapshotter;
- (BOOL)_presentedModally;
- (void)_showABPickerForPropertyID:(int)arg1 optionsGroup:(id)arg2;
- (void)_showAddressEntryViewControllerForOptionsGroup:(id)arg1;
- (void)_showEntryViewControllerForPropertyID:(int)arg1 optionsGroup:(id)arg2;
- (void)_updateContactName;
- (void)_updateNavigationBar;
- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(int)arg1;
- (id)initWithTitle:(id)arg1 optionsStyle:(int)arg2;
- (id)initWithTitle:(id)arg1 optionsStyle:(int)arg2 editable:(BOOL)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (id /* block */)pickedABPersonHandler;
- (id /* block */)pickedABPropertyHandler;
- (void)postalAddressEditor:(id)arg1 finishedEditingContact:(id)arg2;
- (void)postalAddressEditor:(id)arg1 finishedEditingProperty:(int)arg2 contact:(id)arg3;
- (void)postalAddressEditorDidCancel:(id)arg1;
- (void)setBillingAddressOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setEmailOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(id /* block */)arg3;
- (void)setNameOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(id /* block */)arg3;
- (void)setPaymentPassOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(id /* block */)arg3;
- (void)setPhoneOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(id /* block */)arg3;
- (void)setPickedABPersonHandler:(id /* block */)arg1;
- (void)setPickedABPropertyHandler:(id /* block */)arg1;
- (void)setShippingAddressOptions:(id)arg1 selectedIndex:(int)arg2 displayMode:(id)arg3 displayName:(id)arg4 optionsChangedHandler:(id /* block */)arg5;
- (void)setShippingMethods:(id)arg1 currencyCode:(id)arg2 selectedIndex:(int)arg3 displayMode:(id)arg4 optionsChangedHandler:(id /* block */)arg5;
- (void)setShowDisclosureIndicators:(BOOL)arg1;
- (BOOL)showDisclosureIndicators;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)title;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
