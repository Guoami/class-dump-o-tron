//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKTranscriptCell.h>

@class CKBalloonImageView, UIButton, UIImage;

@interface CKTranscriptMessageCell : CKTranscriptCell
{
    _Bool _wantsContactImageLayout;
    UIButton *_failureButton;
    CKBalloonImageView *_contactImageView;
}

@property(retain, nonatomic) CKBalloonImageView *contactImageView; // @synthesize contactImageView=_contactImageView;
@property(retain, nonatomic) UIButton *failureButton; // @synthesize failureButton=_failureButton;
@property(nonatomic) _Bool wantsContactImageLayout; // @synthesize wantsContactImageLayout=_wantsContactImageLayout;
@property(nonatomic) _Bool failed;
@property(retain, nonatomic) UIImage *contactImage;
- (void)layoutSubviewsForContents;
- (id)description;
- (void)dealloc;

@end

