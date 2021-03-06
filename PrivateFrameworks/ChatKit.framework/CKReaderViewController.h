/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKReaderViewController : UIViewController <UIWebViewDelegate> {
    <CKReaderViewControllerDelegate> *_delegate;
    NSString *_messageGUID;
    UITextView *_textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKReaderViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *messageGUID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSAttributedString *text;
@property (nonatomic, retain) UITextView *textView;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } visibleRange;

- (BOOL)ckCanDismissWhenSuspending;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)loadView;
- (id)messageGUID;
- (void)setDelegate:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setVisibleRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (id)text;
- (id)textView;
- (void)viewWillDisappear:(BOOL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visibleRange;

@end
