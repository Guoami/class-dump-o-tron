//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MZJSONDeserializer : NSObject
{
    unsigned long long _encoding;
    char *_readBuffer;
    unsigned long long _allocated;
    unsigned long long _index;
}

+ (id)deserializer;
- (id)deserializeJSONData:(id)arg1 error:(id *)arg2;
- (id)deserializeJSONStream:(id)arg1 error:(id *)arg2;
- (id)deserializeJSONStringReader:(id)arg1 error:(id *)arg2;
- (id)deserializeJSONStringReader:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)deserializeJSONNullWithStringReader:(id)arg1 error:(id *)arg2;
- (id)deserializeJSONNumberWithStringReader:(id)arg1 initialCharacter:(unsigned short)arg2 error:(id *)arg3;
- (id)deserializeJSONBooleanWithStringReader:(id)arg1 initialCharacter:(unsigned short)arg2 error:(id *)arg3;
- (id)deserializeJSONStringWithStringReader:(id)arg1 error:(id *)arg2;
- (id)deserializeJSONDictionaryWithStringReader:(id)arg1 error:(id *)arg2;
- (id)deserializeJSONArrayWithStringReader:(id)arg1 error:(id *)arg2;
- (unsigned long long)encoding;
- (void)dealloc;
- (id)init;

@end

