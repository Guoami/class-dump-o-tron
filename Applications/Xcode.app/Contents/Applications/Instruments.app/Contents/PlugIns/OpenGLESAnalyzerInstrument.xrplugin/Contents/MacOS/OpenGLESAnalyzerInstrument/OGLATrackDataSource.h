//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRBrushDataSource.h"

@class NSString;

@interface OGLATrackDataSource : NSObject <XRBrushDataSource>
{
    NSString *_brushType;
}

- (void)run:(id)arg1 providePoints:(struct XRGraphPoint **)arg2 count:(long long *)arg3 graphSequence:(id)arg4 forTimeRange:(struct XRTimeRange)arg5 minimumInterval:(unsigned long long)arg6 graphAtIndex:(long long)arg7;
- (void)run:(id)arg1 provideLabel:(id *)arg2 andLabelPosition:(struct XRGraphPoint *)arg3 forLabelIndex:(long long)arg4 forInspectionTimeStamp:(unsigned long long)arg5 graphAtIndex:(long long)arg6;
- (id)run:(id)arg1 provideBackgroundTextForInspectionTimeStamp:(unsigned long long)arg2;
- (id)run:(id)arg1 imageForPoint:(struct XRGraphPoint *)arg2 graphAtIndex:(long long)arg3;
- (BOOL)run:(id)arg1 hasImagesForGraphAtIndex:(long long)arg2;
- (void)run:(id)arg1 userFocusedOnPoint:(struct XRGraphPoint *)arg2 forInspectionTimeStamp:(unsigned long long)arg3;
- (id)run:(id)arg1 labelForGraphAtIndex:(long long)arg2;
- (BOOL)stackGraphsForRun:(id)arg1;
- (id)run:(id)arg1 colorForGraphAtIndex:(long long)arg2;
- (unsigned long long)numberOfGraphsForRun:(id)arg1;
- (id)run:(id)arg1 graphedDataKeypath:(id *)arg2;
- (id)graphStyleForRun:(id)arg1;
- (id)_graphSettingsForRun:(id)arg1 index:(unsigned long long)arg2 outGraphIdentifier:(id *)arg3;
- (void)dealloc;
- (id)initWithBrushType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
