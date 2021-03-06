//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MPUExtrasGridElementViewController, MPUExtrasGridSectionHeaderStyle, MPUExtrasStackTemplateViewController, NSArray;

@interface MPUExtrasStackCollectionCell : UICollectionViewCell
{
    NSArray *_fitConstraints;
    _Bool _needsViewWillAppear;
    MPUExtrasStackTemplateViewController *_parentViewController;
    MPUExtrasGridElementViewController *_viewController;
    MPUExtrasGridSectionHeaderStyle *_sectionStyle;
}

@property(readonly, nonatomic) MPUExtrasGridSectionHeaderStyle *sectionStyle; // @synthesize sectionStyle=_sectionStyle;
@property(retain, nonatomic) MPUExtrasGridElementViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) MPUExtrasStackTemplateViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;

@end

