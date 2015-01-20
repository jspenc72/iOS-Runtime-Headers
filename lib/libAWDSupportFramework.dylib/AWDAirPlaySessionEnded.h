/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlaySessionEnded : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int initiator : 1; 
        unsigned int reason : 1; 
    unsigned int _duration;
    } _has;
    unsigned int _initiator;
    int _reason;
    NSString *_sessionUUID;
    unsigned long long _timestamp;
}

@property unsigned int duration;
@property bool hasDuration;
@property bool hasInitiator;
@property bool hasReason;
@property(readonly) bool hasSessionUUID;
@property bool hasTimestamp;
@property unsigned int initiator;
@property int reason;
@property(retain) NSString * sessionUUID;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasDuration;
- (bool)hasInitiator;
- (bool)hasReason;
- (bool)hasSessionUUID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)initiator;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)sessionUUID;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasInitiator:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInitiator:(unsigned int)arg1;
- (void)setReason:(int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end