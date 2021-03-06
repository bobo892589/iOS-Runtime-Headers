/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventCreatedFromSuggestionPredicate : EKPredicate <EKDefaultPropertiesLoading> {
    NSString *_opaqueKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *opaqueKey;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOpaqueKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)opaqueKey;
- (id)predicateFormat;
- (BOOL)shouldLoadDefaultProperties;

@end
