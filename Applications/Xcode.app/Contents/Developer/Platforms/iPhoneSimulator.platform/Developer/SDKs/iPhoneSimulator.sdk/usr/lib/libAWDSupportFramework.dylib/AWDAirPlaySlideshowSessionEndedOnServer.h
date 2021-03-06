//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDAirPlaySlideshowSessionEndedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _maxBPS;
    unsigned int _maxPhotoBytes;
    unsigned int _minBPS;
    unsigned int _minPhotoBytes;
    unsigned int _pauses;
    int _reason;
    NSString *_sessionUUID;
    unsigned int _skipAheads;
    unsigned int _skipBacks;
    unsigned int _totalPhotos;
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int maxBPS:1;
        unsigned int maxPhotoBytes:1;
        unsigned int minBPS:1;
        unsigned int minPhotoBytes:1;
        unsigned int pauses:1;
        unsigned int reason:1;
        unsigned int skipAheads:1;
        unsigned int skipBacks:1;
        unsigned int totalPhotos:1;
    } _has;
}

@property(nonatomic) unsigned int skipAheads; // @synthesize skipAheads=_skipAheads;
@property(nonatomic) unsigned int skipBacks; // @synthesize skipBacks=_skipBacks;
@property(nonatomic) unsigned int pauses; // @synthesize pauses=_pauses;
@property(nonatomic) unsigned int maxBPS; // @synthesize maxBPS=_maxBPS;
@property(nonatomic) unsigned int minBPS; // @synthesize minBPS=_minBPS;
@property(nonatomic) unsigned int maxPhotoBytes; // @synthesize maxPhotoBytes=_maxPhotoBytes;
@property(nonatomic) unsigned int minPhotoBytes; // @synthesize minPhotoBytes=_minPhotoBytes;
@property(nonatomic) unsigned int totalPhotos; // @synthesize totalPhotos=_totalPhotos;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSkipAheads;
@property(nonatomic) _Bool hasSkipBacks;
@property(nonatomic) _Bool hasPauses;
@property(nonatomic) _Bool hasMaxBPS;
@property(nonatomic) _Bool hasMinBPS;
@property(nonatomic) _Bool hasMaxPhotoBytes;
@property(nonatomic) _Bool hasMinPhotoBytes;
@property(nonatomic) _Bool hasTotalPhotos;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

