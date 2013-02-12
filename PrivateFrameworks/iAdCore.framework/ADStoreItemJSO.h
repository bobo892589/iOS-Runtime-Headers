/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSArray, NSDate, NSNumber, NSString, SSItem, WebScriptObject;

@interface ADStoreItemJSO : ADJavaScriptObject {
    NSNumber *_adamId;
    int _error;
    NSDate *_expirationDate;
    WebScriptObject *_jsListener;
    NSArray *_offers;
    NSArray *_previews;
    BOOL _privilegedClient;
    SSItem *_storeItem;
    NSString *_title;
}

@property(copy,readonly) NSNumber * adamId;
@property int error;
@property(retain) NSDate * expirationDate;
@property(retain) WebScriptObject * jsListener;
@property(copy,readonly) NSArray * offers;
@property(copy,readonly) NSArray * previews;
@property(getter=isPrivilegedClient) BOOL privilegedClient;
@property(retain) SSItem * storeItem;
@property(copy,readonly) NSString * title;

+ (id)scriptingKeys;

- (id)adamId;
- (void)dealloc;
- (int)error;
- (id)expirationDate;
- (id)initWithAdamId:(id)arg1;
- (BOOL)isPrivilegedClient;
- (id)jsListener;
- (id)offers;
- (id)previews;
- (void)setAdamId:(id)arg1;
- (void)setError:(int)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setJsListener:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPreviews:(id)arg1;
- (void)setPrivilegedClient:(BOOL)arg1;
- (void)setStoreItem:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)storeItem;
- (id)title;

@end