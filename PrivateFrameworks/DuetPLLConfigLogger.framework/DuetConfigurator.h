/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
 */

@interface DuetConfigurator : NSObject <DuetLoggerProtocol> {
    NSMutableDictionary *appBlackMap;
    NSMutableArray *appWhiteListArray;
    NSUserDefaults *bkbdDDomain;
    NSBundle *bundle;
    NSMutableDictionary *dictOfConfigurations;
    NSUserDefaults *sbDomain;
}

@property (nonatomic, readonly, retain) NSMutableDictionary *appBlackMap;
@property (nonatomic, readonly, retain) NSMutableArray *appWhiteListArray;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)appBlackMap;
- (id)appWhiteListArray;
- (long long)getStateFor:(id)arg1;
- (id)init;
- (void)loadBundleConfigurations;
- (void)loadConfigurations:(id)arg1;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)reloadBundleFromDisk;
- (void)updateSpringBoardConfiguration:(id)arg1;

@end
