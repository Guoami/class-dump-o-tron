//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class XRFourStateButton;

@interface XRRecordControl : NSView
{
    XRFourStateButton *_pauseButton;
    XRFourStateButton *_recordButton;
    XRFourStateButton *_loopButton;
}

@property(retain) XRFourStateButton *pauseButton; // @synthesize pauseButton=_pauseButton;
@property(retain) XRFourStateButton *loopButton; // @synthesize loopButton=_loopButton;
@property(retain) XRFourStateButton *recordButton; // @synthesize recordButton=_recordButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
