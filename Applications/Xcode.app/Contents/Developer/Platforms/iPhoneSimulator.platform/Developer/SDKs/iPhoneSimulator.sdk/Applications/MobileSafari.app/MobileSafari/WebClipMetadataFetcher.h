//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSURL, TabDocument;

@interface WebClipMetadataFetcher : NSObject
{
    NSDictionary *_metaTags;
    NSArray *_linkTags;
    NSURL *_canonicalURL;
    NSMutableArray *_metadataConsumers;
    _Bool _fetchingCompleted;
    TabDocument *_tabDocument;
}

- (void).cxx_destruct;
- (void)fetchMetadataWithConsumer:(CDUnknownBlockType)arg1;
- (id)_webClipLinkTagWithDictionary:(id)arg1;
- (void)_startFetchingMetadata;
- (id)initWithTabDocument:(id)arg1;

@end

