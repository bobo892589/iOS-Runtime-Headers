/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNAppRule : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString *_identifier;
    NSArray *_matchAccountIdentifiers;
    NSArray *_matchDomains;
    NSArray *_matchExecutables;
}

@property (readonly) NSString *identifier;
@property (copy) NSArray *matchAccountIdentifiers;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *matchExecutables;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)matchAccountIdentifiers;
- (id)matchDomains;
- (id)matchExecutables;
- (BOOL)overlapsWithRule:(id)arg1;
- (void)setMatchAccountIdentifiers:(id)arg1;
- (void)setMatchDomains:(id)arg1;
- (void)setMatchExecutables:(id)arg1;

@end
