//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CAMCameraRollSpec.h>

@class DeferredFrameworkLoader;

@interface DeferredCAMCameraRollSpec : CAMCameraRollSpec
{
    _Bool _isPad;
    CAMCameraRollSpec *_spec;
    DeferredFrameworkLoader *_loader;
}

@property(nonatomic) _Bool isPad; // @synthesize isPad=_isPad;
@property(retain, nonatomic) DeferredFrameworkLoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) CAMCameraRollSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadAlbumViewController:(id)arg1 withAssetCollection:(id)arg2 fetchResultContainingAssetCollection:(id)arg3;
- (void)prepareAlbumViewControllerForReuse:(id)arg1 withAssetCollection:(id)arg2 inApplicationViewController:(id)arg3;
- (id)newAlbumNavigationControllerForAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 inApplicationViewController:(id)arg3;
- (void)ensureCAMCameraRollSpec;
- (id)initWithDeferredLoader:(id)arg1 isPad:(_Bool)arg2;

@end

