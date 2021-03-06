//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPathControl.h"

#import "XRAccessiblePathCellDelegate.h"

@class NSMutableDictionary, NSString, XRDevice;

@interface XRTargetChooserPathControl : NSPathControl <XRAccessiblePathCellDelegate>
{
    NSMutableDictionary *_deviceToComponentCellMap;
    XRDevice *_device;
    BOOL _allowNilDevice;
}

+ (Class)cellClass;
+ (unsigned long long)defaultFocusRingType;
@property(readonly, nonatomic) BOOL allowNilDevice; // @synthesize allowNilDevice=_allowNilDevice;
- (void).cxx_destruct;
- (id)pathCell:(id)arg1 accessibilityDescriptionForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)accessibilityPopUpMenuParent:(id)arg1;
- (struct CGSize)sizeWanted;
- (id)menuForEvent:(id)arg1;
- (BOOL)isOpaque;
- (void)setMenu:(id)arg1;
- (void)setFont:(id)arg1;
@property(nonatomic) int gradientStyle;
- (void)setEnabled:(BOOL)arg1;
- (void)reconfigureWithContext:(id)arg1 controlSize:(unsigned long long)arg2 allowNilDevice:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

