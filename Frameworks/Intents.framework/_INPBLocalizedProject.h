/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBLocalizedProject : PBCodable <NSCopying> {
    _INPBAppNames * _appNames;
    _INPBIntentVocabulary * _intentVocabulary;
    _INPBLanguageTag * _language;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBAppNames *appNames;
@property (nonatomic, readonly) BOOL hasAppNames;
@property (nonatomic, readonly) BOOL hasIntentVocabulary;
@property (nonatomic, readonly) BOOL hasLanguage;
@property (nonatomic, retain) _INPBIntentVocabulary *intentVocabulary;
@property (nonatomic, retain) _INPBLanguageTag *language;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (void).cxx_destruct;
- (id)appNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAppNames;
- (BOOL)hasIntentVocabulary;
- (BOOL)hasLanguage;
- (unsigned int)hash;
- (id)intentVocabulary;
- (BOOL)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAppNames:(id)arg1;
- (void)setIntentVocabulary:(id)arg1;
- (void)setLanguage:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
