/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXRelationship : NSObject {
    BOOL mExternal;
    NSString *mIdString;
    NSString *mTarget;
    NSString *mType;
}

@property (nonatomic, readonly) NSString *idString;
@property (nonatomic, readonly) NSString *target;
@property (nonatomic, readonly) NSString *type;

- (void)dealloc;
- (id)idString;
- (id)initWithId:(unsigned int)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4;
- (id)target;
- (id)type;
- (void)writeToStreamWriter:(id)arg1;

@end
