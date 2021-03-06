//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSIndexSet, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, PLLargeImageLoader, PLPhotoLibrary;

@interface PLThumbnailManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    NSLock *_lock;
    NSIndexSet *_occupiedIndexes;
    NSDictionary *_changedPhotosMap;
    NSArray *_changedPhotos;
    NSMutableDictionary *_thumbManagersByFormat;
    id <PLThumbPersistenceManager> _lastUsedThumbManager;
    int _lastUsedThumbManagerFormat;
    PLLargeImageLoader *_largeImageLoaderFullSize;
    PLLargeImageLoader *_largeImageLoaderFullScreen;
    PLLargeImageLoader *_largeImageLoaderFilledScreen;
    PLLargeImageLoader *_largeImageLoaderFilledHalfScreen;
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
    id _observerToken;
}

+ (void)saveCameraPreviewWellImage:(struct CGImage *)arg1 uuid:(id)arg2;
+ (void)saveCameraPreviewWellImageForAsset:(id)arg1;
+ (id)cameraPreviewWellAssetUUID;
+ (id)cameraPreviewWellImageQueue;
+ (int)largestNonJPEGThumbnailFormat;
+ (id)supportedThumbnailFormats;
+ (id)_allPossibleThumbnailFormats;
+ (void)handleRebuildThumbnailRequestPersistentFailure;
+ (_Bool)hasExceededRebuildThumbnailRequestLimit;
+ (_Bool)isRebuildingThumbnails;
+ (void)rebuildAllMissingThumbnails;
+ (void)removeRebuildThumbnailsRequest:(const char *)arg1;
+ (_Bool)hasRebuildThumbnailsRequest;
+ (void)addRebuildThumbnailsRequest;
+ (void)resetThumbnails;
+ (_Bool)isMissingThumbnailTables;
+ (_Bool)hasObsoleteThumbnailTables;
+ (int)thumbnailFormat;
+ (int)thumbnailVersion;
+ (int)thumbnailVersionCurrent;
+ (void)removeObsoleteMetadata;
+ (id)defaultThumbnailsDirectoryV2;
+ (id)defaultThumbnailsDirectory;
+ (_Bool)useImageTableForFormat:(int)arg1;
+ (_Bool)shouldUseLargerNonJPEGThumbnailFormat;
+ (_Bool)isRidingPowderSnow;
+ (_Bool)isRidingCrudSnow;
@property(retain, nonatomic) id observerToken; // @synthesize observerToken=_observerToken;
@property(readonly, retain, nonatomic) NSMutableDictionary *thumbManagersByFormat; // @synthesize thumbManagersByFormat=_thumbManagersByFormat;
@property(nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)_thumbManagerForFormat:(int *)arg1;
- (id)_dataForInFlightAsset:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8 imageDataFormat:(int *)arg9;
- (id)_dataForAsset:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8 imageDataFormat:(int *)arg9;
- (id)thumbnailJPEGPathForPhoto:(id)arg1;
- (id)preheatItemSourceForFormat:(int)arg1;
- (id)_tableDescriptions;
- (id)compactImageTables;
- (id)preflightImageTableCompactionForPhotos:(id)arg1;
- (id)_anyImageTable;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(_Bool)arg3 width:(int *)arg4 height:(int *)arg5 bytesPerRow:(int *)arg6 dataWidth:(int *)arg7 dataHeight:(int *)arg8 imageDataOffset:(int *)arg9;
- (void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (void)_horse_setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (_Bool)copyThumbnailsFromAsset:(id)arg1 toAsset:(id)arg2;
- (struct __CFDictionary *)placeholderThumbnailDataByFormatID;
- (void)setThumbnails:(struct __CFDictionary *)arg1 forPhoto:(id)arg2;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(_Bool)arg3 optimalSourcePixelSize:(struct CGSize)arg4 networkAccessAllowed:(_Bool)arg5 networkAccessForced:(_Bool)arg6 trackCPLDownload:(_Bool)arg7 outImageProperties:(const struct __CFDictionary **)arg8 outImageDataInfo:(id *)arg9 outCPLDownloadContext:(id *)arg10;
- (void)imageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(_Bool)arg3 optimalSourcePixelSize:(struct CGSize)arg4 networkAccessAllowed:(_Bool)arg5 networkAccessForced:(_Bool)arg6 trackCPLDownload:(_Bool)arg7 completion:(CDUnknownBlockType)arg8 sync:(_Bool)arg9;
- (id)newImageDataForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(_Bool)arg3 wantURLOnly:(_Bool)arg4 networkAccessAllowed:(_Bool)arg5 networkAccessForced:(_Bool)arg6 trackCPLDownload:(_Bool)arg7 outImageDataInfo:(id *)arg8 outCPLDownloadContext:(id *)arg9;
- (void)assetsdImageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(_Bool)arg3 wantURLOnly:(_Bool)arg4 optimalSourcePixelSize:(struct CGSize)arg5 networkAccessAllowed:(_Bool)arg6 networkAccessForced:(_Bool)arg7 trackCPLDownload:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(_Bool)arg3 outImageProperties:(const struct __CFDictionary **)arg4 outDeliveredPlaceholder:(_Bool *)arg5;
- (_Bool)_canAccessImageForAsset:(id)arg1;
- (void)dealloc;
- (void)clearPhotoLibrary;
- (id)initWithWeakPhotoLibrary:(id)arg1;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 error:(id *)arg2;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;

@end

