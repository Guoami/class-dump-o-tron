//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicQueryPlaybackContext.h>

#import "MusicGeniusMixQueueFeederDataSource.h"

@class MPMediaItem, MPMediaPlaylist, MPMediaQueryShuffledItems, NSString;

@interface MusicCloudGeniusMixPlaybackContext : MusicQueryPlaybackContext <MusicGeniusMixQueueFeederDataSource>
{
    MPMediaQueryShuffledItems *_items;
    MPMediaPlaylist *_mixPlaylist;
    MPMediaItem *_requiredInitialMediaItem;
}

+ (Class)queueFeederClass;
@property(retain, nonatomic) MPMediaItem *requiredInitialMediaItem; // @synthesize requiredInitialMediaItem=_requiredInitialMediaItem;
@property(readonly, nonatomic) MPMediaPlaylist *mixPlaylist; // @synthesize mixPlaylist=_mixPlaylist;
- (void).cxx_destruct;
- (unsigned long long)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned long long)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)geniusMixQueueFeederMediaItemCount:(id)arg1;
- (id)initWithGeniusMixPlaylist:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

