//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SKUIResourceRequest : NSObject <NSCopying>
{
    id _cacheKey;
    unsigned long long _requestID;
}

@property(nonatomic) unsigned long long requestIdentifier; // @synthesize requestIdentifier=_requestID;
@property(retain, nonatomic) id cacheKey; // @synthesize cacheKey=_cacheKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)newLoadOperation;
- (void)finishWithResource:(id)arg1;
@property(readonly, nonatomic) _Bool cachesInMemory;
- (id)_initSKUIResourceRequest;
- (id)init;

@end
