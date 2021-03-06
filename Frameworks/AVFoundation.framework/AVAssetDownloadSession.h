/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetDownloadSession : NSObject {
    AVAssetDownloadSessionInternal *_internal;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) unsigned long long availableFileSize;
@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) unsigned long long downloadToken;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) int priority;
@property (nonatomic, readonly) int status;

+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;
+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;

- (id)URL;
- (void)_addFigAssetListeners;
- (void)_addFigPlaybackItemListeners;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_figAssetNotificationNames;
- (id)_figPlaybackItemNotificationNames;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (long)_primeCache;
- (void)_primeCacheOnDispatchQueue;
- (long)_readyForInspection;
- (void)_removeFigAssetListeners;
- (void)_removeFigPlaybackItemListeners;
- (BOOL)_setFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (void)_transitionToTerminalStatus:(int)arg1 error:(id)arg2;
- (id)_weakReference;
- (unsigned long long)availableFileSize;
- (void)dealloc;
- (id)destinationURL;
- (unsigned long long)downloadToken;
- (id)error;
- (unsigned long long)fileSize;
- (void)finalize;
- (id)init;
- (id)initWithDownloadToken:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (void)pause;
- (int)priority;
- (void)start;
- (int)status;
- (void)stop;

@end
