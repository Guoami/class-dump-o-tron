//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class UILabel;

@interface PSUsageSizeHeader : UIView <PSHeaderFooterView>
{
    UILabel *_sizeLabel;
    UILabel *_titleLabel;
    double _height;
}

- (void)setSizeLabelHidden:(_Bool)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setSize:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;

@end
