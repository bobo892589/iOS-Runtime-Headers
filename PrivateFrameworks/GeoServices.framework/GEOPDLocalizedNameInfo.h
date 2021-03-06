/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocalizedNameInfo : PBCodable <NSCopying> {
    NSString *_languageCode;
    GEONameInfo *_name;
    NSString *_requestedLanguageCode;
}

@property (nonatomic, readonly) BOOL hasLanguageCode;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, readonly) BOOL hasRequestedLanguageCode;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) GEONameInfo *name;
@property (nonatomic, retain) NSString *requestedLanguageCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLanguageCode;
- (BOOL)hasName;
- (BOOL)hasRequestedLanguageCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (id)requestedLanguageCode;
- (void)setLanguageCode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRequestedLanguageCode:(id)arg1;
- (void)writeTo:(id)arg1;

@end
