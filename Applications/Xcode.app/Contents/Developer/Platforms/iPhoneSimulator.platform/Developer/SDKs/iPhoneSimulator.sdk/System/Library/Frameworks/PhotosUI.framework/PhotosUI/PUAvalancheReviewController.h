//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHAssetCollectionDataSource.h"
#import "PUAvalancheReviewCollectionViewLayoutDelegate.h"
#import "PUPhotosSharingTransitionViewController.h"
#import "PUReviewScrubberDataSource.h"
#import "PUReviewScrubberDelegate.h"
#import "PUTransitionViewAnimatorDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSMutableDictionary, NSMutableSet, NSOrderedSet, NSString, PHCachingImageManager, PHFetchResult, PLAvalanche, PLManagedAsset, PUAvalancheReviewCollectionViewLayout, PUAvalancheReviewControllerSpec, PUPhotoBrowserController, PUPhotoPinchGestureRecognizer, PUPhotosSharingTransitionContext, PUPhotosZoomingSharingGridCell, PUReviewInstructionalView, PUReviewScrubber, PUTransitionViewAnimator, UIBarButtonItem, UICollectionView, UICollectionViewLayout, UITapGestureRecognizer;

@interface PUAvalancheReviewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PUAvalancheReviewCollectionViewLayoutDelegate, UIGestureRecognizerDelegate, PUTransitionViewAnimatorDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource>
{
    PHFetchResult *_assetCollectionsFetchResult;
    NSMutableDictionary *_resultsForAssetCollection;
    _Bool __updatingContentOffsetFromScrubbing;
    _Bool __completingReviewMode;
    id <PUAvalancheReviewControllerDelegate> _delegate;
    id <PLAssetContainerList> _avalancheContainerList;
    PUAvalancheReviewControllerSpec *__spec;
    UICollectionView *__collectionView;
    PUAvalancheReviewCollectionViewLayout *__collectionViewLayout;
    PUReviewInstructionalView *__instructionalView;
    UIBarButtonItem *__doneBarButtonItem;
    UIBarButtonItem *__cancelBarButtonItem;
    UITapGestureRecognizer *__tapGestureRecognizer;
    NSIndexPath *__inFlightReferenceIndexPath;
    NSMutableSet *__preheatedAssets;
    PLAvalanche *__avalancheBeingReviewed;
    PLManagedAsset *__initialAsset;
    NSOrderedSet *__initialFavorites;
    id <PLAssetContainer> __currentAssetContainer;
    PUPhotoBrowserController *__presentingPhotoBrowserController;
    PHCachingImageManager *__cachingImageManager;
    PUPhotoPinchGestureRecognizer *__photoZoomPinchGestureRecognizer;
    PUTransitionViewAnimator *__photoZoomAnimator;
    PUPhotosZoomingSharingGridCell *__photoZoomCell;
    UICollectionViewLayout *__transitionLayout;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
    struct CGRect __previousPreheatRect;
}

+ (id)filteringContext;
@property(retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext; // @synthesize photosSharingTransitionContext=_photosSharingTransitionContext;
@property(retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
@property(retain, nonatomic, setter=_setPhotoZoomCell:) PUPhotosZoomingSharingGridCell *_photoZoomCell; // @synthesize _photoZoomCell=__photoZoomCell;
@property(retain, nonatomic, setter=_setPhotoZoomAnimator:) PUTransitionViewAnimator *_photoZoomAnimator; // @synthesize _photoZoomAnimator=__photoZoomAnimator;
@property(retain, nonatomic, setter=_setPhotoZoomPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoZoomPinchGestureRecognizer; // @synthesize _photoZoomPinchGestureRecognizer=__photoZoomPinchGestureRecognizer;
@property(readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
@property(readonly, nonatomic) PUPhotoBrowserController *_presentingPhotoBrowserController; // @synthesize _presentingPhotoBrowserController=__presentingPhotoBrowserController;
@property(readonly, nonatomic) id <PLAssetContainer> _currentAssetContainer; // @synthesize _currentAssetContainer=__currentAssetContainer;
@property(readonly, nonatomic) NSOrderedSet *_initialFavorites; // @synthesize _initialFavorites=__initialFavorites;
@property(readonly, nonatomic) PLManagedAsset *_initialAsset; // @synthesize _initialAsset=__initialAsset;
@property(readonly, nonatomic) PLAvalanche *_avalancheBeingReviewed; // @synthesize _avalancheBeingReviewed=__avalancheBeingReviewed;
@property(nonatomic) _Bool _completingReviewMode; // @synthesize _completingReviewMode=__completingReviewMode;
@property(readonly, nonatomic) _Bool _updatingContentOffsetFromScrubbing; // @synthesize _updatingContentOffsetFromScrubbing=__updatingContentOffsetFromScrubbing;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property(retain, nonatomic, setter=_setPreheatedAssets:) NSMutableSet *_preheatedAssets; // @synthesize _preheatedAssets=__preheatedAssets;
@property(readonly, nonatomic) NSIndexPath *_inFlightReferenceIndexPath; // @synthesize _inFlightReferenceIndexPath=__inFlightReferenceIndexPath;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(readonly, nonatomic) UIBarButtonItem *_cancelBarButtonItem; // @synthesize _cancelBarButtonItem=__cancelBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *_doneBarButtonItem; // @synthesize _doneBarButtonItem=__doneBarButtonItem;
@property(readonly, nonatomic) PUReviewInstructionalView *_instructionalView; // @synthesize _instructionalView=__instructionalView;
@property(readonly, nonatomic) PUAvalancheReviewCollectionViewLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property(readonly, nonatomic) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property(readonly, nonatomic) PUAvalancheReviewControllerSpec *_spec; // @synthesize _spec=__spec;
@property(readonly, nonatomic) id <PLAssetContainerList> avalancheContainerList; // @synthesize avalancheContainerList=_avalancheContainerList;
@property(nonatomic) id <PUAvalancheReviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(_Bool)arg2;
- (struct CGRect)embeddedActivityViewFrameWhenShowing:(_Bool)arg1;
- (id)embeddedActivityView;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(_Bool)arg2;
- (id)transitionCollectionView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (unsigned long long)numberOfPhotosInReviewScrubber:(id)arg1;
- (void)reviewScrubberDidSelectItemAtIndexPath:(id)arg1;
- (void)reviewScrubberDidScrub:(id)arg1;
- (void)reviewScrubber:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3;
- (struct CGRect)layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(struct CGRect)arg3 atIndexPath:(id)arg4;
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_updatePreheatedAssets;
- (void)_resetPreheating;
- (void)assetContainerDidChange:(id)arg1;
- (void)_cancelReviewModeAction:(id)arg1;
- (void)_cancelReviewMode;
- (void)_handleDoneButton:(id)arg1;
- (void)_finishReviewAndDeleteNonPicks:(_Bool)arg1;
- (void)_crossfadeToAssetAndDismiss:(id)arg1;
- (void)_dismissReviewController;
- (id)_actionViewRootView;
- (void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg1;
- (void)_toggleCurrentPickStatusAtIndexPath:(id)arg1;
- (void)_promoteFavoriteAssetsAndDeleteNonPicks:(_Bool)arg1 withReviewCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_reloadAvalancheDataWithAsset:(id)arg1;
- (void)_updateReviewScrubberFromContentOffset;
- (int)reviewScrubberImageFormat;
@property(readonly, nonatomic) PUReviewScrubber *_reviewScrubber;
- (void)_endZoomingForCell;
- (void)_beginZoomingForCellAtIndexPath:(id)arg1;
- (void)_updateCollectionViewLayoutInsets;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2 excludingIndexPath:(id)arg3;
- (double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (void)_pageToIndexPath:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)_sizeForItemAtIndexPath:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)_phAssetAtIndexPath:(id)arg1;
- (id)_assetAtIndexPath:(id)arg1;
- (id)_currentAsset;
- (void)_handlePhotoPinch:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (struct CGRect)selectionBadgeFrameForItemFrame:(struct CGRect)arg1 atIndexPath:(id)arg2;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (void)_getFirstValidIndexPath:(id *)arg1 lastValidIndexPath:(id *)arg2;
- (void)_getMainCollectionViewFrame:(struct CGRect *)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg2 orientation:(long long)arg3;
- (void)_updateMainViewAnimated:(_Bool)arg1;
- (void)_updateBarItemsAnimated:(_Bool)arg1;
- (void)_updateNavigationItemTitle;
- (void)_updateEnabledNavigationBarItems;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)pu_wantsNavigationBarVisible;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (long long)_interfaceOrientationFromDeviceOrientation:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)assetsInAssetCollection:(id)arg1;
@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
- (id)initWithSpec:(id)arg1 startingAtAsset:(id)arg2 inAvalanche:(id)arg3 currentAssetContainer:(id)arg4 fromPhotoBrowserController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

