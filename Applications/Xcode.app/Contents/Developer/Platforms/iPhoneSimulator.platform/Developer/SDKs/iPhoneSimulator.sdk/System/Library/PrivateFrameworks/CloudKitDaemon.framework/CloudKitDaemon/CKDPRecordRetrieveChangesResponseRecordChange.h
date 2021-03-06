//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPRecord, CKDPRecordIdentifier, CKDPRecordType, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable <NSCopying>
{
    NSString *_etag;
    CKDPRecord *_record;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRecordType *_recordType;
    int _type;
    CDStruct_f953fb60 _has;
}

@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) CKDPRecordType *recordType; // @synthesize recordType=_recordType;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRecord;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasRecordType;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end

