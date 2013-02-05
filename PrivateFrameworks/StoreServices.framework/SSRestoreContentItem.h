/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString, NSMutableDictionary;

@interface SSRestoreContentItem : NSObject {
    NSNumber *_accountID;
    NSString *_appleID;
    NSString *_bundleID;
    NSNumber *_cloudMatchStatus;
    BOOL _isRestore;
    NSMutableDictionary *_properties;
}

@property(getter=isDRMFree) BOOL DRMFree;
@property(copy) NSString * bundleID;
@property(retain) NSNumber * cloudItemID;
@property(retain) NSNumber * cloudMatchStatus;
@property(copy) NSString * downloadKind;
@property(copy) NSString * podcastEpisodeGUID;
@property(copy) NSString * storeAccountAppleID;
@property(retain) NSNumber * storeAccountID;
@property(copy) NSString * storeFlavor;
@property(copy) NSString * storeFrontID;
@property(retain) NSNumber * storeItemID;
@property(copy) NSString * storeSoftwareVersionID;
@property(copy) NSString * videoDimensions;

- (id)_initSSRestoreContentItem;
- (id)_restoreKeyForAssetProperty:(id)arg1;
- (id)_restoreKeyForDownloadProperty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)bundleID;
- (id)cloudItemID;
- (id)cloudMatchStatus;
- (id)copyRestoreDictionary;
- (void)dealloc;
- (id)downloadKind;
- (id)init;
- (id)initWithRestoreDownload:(id)arg1;
- (BOOL)isDRMFree;
- (BOOL)isEligibleForRestore:(id*)arg1;
- (id)podcastEpisodeGUID;
- (void)setBundleID:(id)arg1;
- (void)setCloudItemID:(id)arg1;
- (void)setCloudMatchStatus:(id)arg1;
- (void)setDRMFree:(BOOL)arg1;
- (void)setDownloadKind:(id)arg1;
- (void)setPodcastEpisodeGUID:(id)arg1;
- (void)setStoreAccountAppleID:(id)arg1;
- (void)setStoreAccountID:(id)arg1;
- (void)setStoreFlavor:(id)arg1;
- (void)setStoreFrontID:(id)arg1;
- (void)setStoreItemID:(id)arg1;
- (void)setStoreSoftwareVersionID:(id)arg1;
- (void)setValue:(id)arg1 forAssetProperty:(id)arg2;
- (void)setValue:(id)arg1 forDownloadProperty:(id)arg2;
- (void)setVideoDimensions:(id)arg1;
- (id)storeAccountAppleID;
- (id)storeAccountID;
- (id)storeFlavor;
- (id)storeFrontID;
- (id)storeItemID;
- (id)storeSoftwareVersionID;
- (id)videoDimensions;

@end