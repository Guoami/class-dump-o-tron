//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTDTraceInstrument.h"

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class NSString, XRDTraceThreadsInstrumentDataSource, XROutlineDetailView;

@interface XRDTraceThreadsInstrument : PFTDTraceInstrument <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    unsigned long long _lastUpdateTime;
    XROutlineDetailView *_threadsView;
    XRDTraceThreadsInstrumentDataSource *_runningStateBrushDataSource;
    BOOL _sizeByThreadCount;
}

- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)willProvideConfigurationDataElementsForInspector:(id)arg1;
- (void)_threadSelected:(id)arg1;
- (id)dataElementsForContext:(id)arg1;
- (id)dataElementsForTrackViewSetupContext;
- (id)colorsForColsolidatedThreadStates;
- (id)dataElementsForExtendedEventViewContext;
- (unsigned long long)detailViewTypeMask;
- (void)_setDetailViewType:(unsigned long long)arg1;
- (void)_focusOnThread:(id)arg1;
- (id)_activeDetailView;
- (BOOL)detailViewRequiresScrollView:(id)arg1;
- (void)restoreFromTraceTemplateData:(id)arg1;
- (id)traceTemplateData;
- (BOOL)sizeByThreadCount;
- (void)tick:(id)arg1;
- (BOOL)requiresHalfTickNotification;
- (BOOL)requiresTickNotification;
- (void)reloadDetailViews;
- (id)detailViewLabelForType:(unsigned long long)arg1;
- (void)stopRecording;
- (void)startRecording;
- (id)dataSourceForBrushWithName:(id)arg1;
- (id)brushNames;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
