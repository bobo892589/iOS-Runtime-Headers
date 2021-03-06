/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDGlossaryViewController : UIViewController <UIToolbarDelegate> {
    UIView *_bottomSeparator;
    APDDataManager *_dataManager;
    <APDGlossaryViewControllerDelegate> *_delegate;
    BOOL _displayAsModal;
    UIButton *_doneButton;
    APDNavigationTopic *_navigationTopic;
    APDTopicViewController *_topicViewController;
    NSArray *_viewInterfaceOrientations;
    UIView *_webViewContainer;
}

@property (nonatomic) UIView *bottomSeparator;
@property (nonatomic, retain) APDDataManager *dataManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APDGlossaryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayAsModal;
@property (nonatomic) UIButton *doneButton;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) APDNavigationTopic *navigationTopic;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewInterfaceOrientations;
@property (nonatomic) UIView *webViewContainer;

- (void).cxx_destruct;
- (id)bottomSeparator;
- (id)dataManager;
- (id)delegate;
- (BOOL)displayAsModal;
- (id)doneButton;
- (id)init;
- (id)navigationTopic;
- (void)onDone:(id)arg1;
- (int)positionForBar:(id)arg1;
- (void)setBottomSeparator:(id)arg1;
- (void)setDataManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayAsModal:(BOOL)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setNavigationTopic:(id)arg1;
- (void)setViewInterfaceOrientations:(id)arg1;
- (void)setWebViewContainer:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (id)viewInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)webViewContainer;

@end
