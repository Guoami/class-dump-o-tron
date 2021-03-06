//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSPDocumentRevision : NSObject <NSCopying>
{
    unsigned long long _sequence;
    NSString *_identifier;
}

+ (id)revisionWithRevisionString:(id)arg1;
+ (id)revisionWithSequence:(unsigned long long)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)nextRevisionWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *revisionString;
- (id)initWithRevisionString:(id)arg1;
- (id)initWithSequence:(unsigned long long)arg1 identifier:(id)arg2;
- (id)init;

@end

