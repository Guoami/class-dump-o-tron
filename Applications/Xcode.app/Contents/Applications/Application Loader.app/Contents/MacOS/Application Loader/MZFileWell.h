//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class NSArray, NSButton, NSImage, NSMutableArray, NSTrackingArea, PackageAssetController;

@interface MZFileWell : NSImageView
{
    id delegate;
    NSImage *_priorImage;
    NSArray *_allowedExtensions;
    unsigned long long _operation;
    BOOL _imageSet;
    NSTrackingArea *_trackingArea;
    NSMutableArray *_constraints;
    struct CGImage *_imageMask;
    BOOL _representsScreenshot;
    PackageAssetController *_assetController;
    NSButton *_deleteButton;
}

+ (void)initialize;
@property NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property BOOL representsScreenshot; // @synthesize representsScreenshot=_representsScreenshot;
@property PackageAssetController *assetController; // @synthesize assetController=_assetController;
@property id <MZFileWellDelegate> delegate; // @synthesize delegate;
- (struct CGImage *)newMaskedImage;
- (struct CGImage *)imageMask;
- (struct CGRect)displayedImageRect;
- (struct CGSize)imageScale;
- (struct CGPoint)originOfTransparentScaledImage;
- (struct CGPoint)originOfScaledImage;
- (BOOL)isFlipped;
- (void)deleteAction:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)setDeleteButtonVisible:(BOOL)arg1;
- (void)setDeleteButtonHoverTrackingEnabled:(BOOL)arg1;
- (void)stopDragHighlight;
- (void)startDragHighlight;
- (id)dragHaloView;
- (id)description;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (unsigned long long)operation;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)setImageNoDeletion:(id)arg1;
- (void)setImage:(id)arg1;
- (void)takeValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setObjectValue:(id)arg1;
- (void)_setImage:(id)arg1;
- (id)scaleImageToFit:(id)arg1;
- (void)setAllowedExtensions:(id)arg1;
- (id)allowedExtensions;
- (void)dealloc;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)setup;

@end
