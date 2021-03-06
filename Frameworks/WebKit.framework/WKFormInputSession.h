/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFormInputSession : NSObject <_WKFormInputSession> {
    WKContentView *_contentView;
    struct RetainPtr<NSObject<NSSecureCoding> > { 
        void *m_ptr; 
    } _userObject;
}

@property (nonatomic, copy) NSString *accessoryViewCustomButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *userObject;
@property (getter=isValid, nonatomic, readonly) BOOL valid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessoryViewCustomButtonTitle;
- (id)initWithContentView:(id)arg1 userObject:(id)arg2;
- (void)invalidate;
- (BOOL)isValid;
- (void)setAccessoryViewCustomButtonTitle:(id)arg1;
- (id)userObject;

@end
