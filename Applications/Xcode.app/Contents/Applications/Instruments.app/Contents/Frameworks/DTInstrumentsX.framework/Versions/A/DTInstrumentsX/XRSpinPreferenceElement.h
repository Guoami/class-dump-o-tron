//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTInstrumentsX/XRImmutableElement.h>

@interface XRSpinPreferenceElement : XRImmutableElement
{
    BOOL _enabled;
}

+ (id)elementFromDictionary:(id)arg1;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id)elementWithEnabled:(BOOL)arg1;
- (id)dictionary;

@end
