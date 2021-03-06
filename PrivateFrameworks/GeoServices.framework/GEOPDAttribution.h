/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAttribution : PBCodable <NSCopying> {
    NSMutableArray *_attributionUrls;
    NSString *_externalComponentId;
    NSString *_externalItemId;
    NSString *_vendorId;
}

@property (nonatomic, retain) NSMutableArray *attributionUrls;
@property (nonatomic, retain) NSString *externalComponentId;
@property (nonatomic, retain) NSString *externalItemId;
@property (nonatomic, readonly) BOOL hasExternalComponentId;
@property (nonatomic, readonly) BOOL hasExternalItemId;
@property (nonatomic, readonly) BOOL hasVendorId;
@property (nonatomic, retain) NSString *vendorId;

+ (id)attributionForPlaceDataEntity:(id)arg1;
+ (id)attributionForPlaceDataPhotos:(id)arg1;
+ (id)attributionForPlaceDataReview:(id)arg1;

- (id)_attributionKey;
- (BOOL)_isYelp;
- (void)addAttributionUrl:(id)arg1;
- (id)attributionUrlAtIndex:(unsigned int)arg1;
- (id)attributionUrls;
- (unsigned int)attributionUrlsCount;
- (void)clearAttributionUrls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalComponentId;
- (id)externalItemId;
- (BOOL)hasExternalComponentId;
- (BOOL)hasExternalItemId;
- (BOOL)hasVendorId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributionUrls:(id)arg1;
- (void)setExternalComponentId:(id)arg1;
- (void)setExternalItemId:(id)arg1;
- (void)setVendorId:(id)arg1;
- (id)vendorId;
- (void)writeTo:(id)arg1;

@end
