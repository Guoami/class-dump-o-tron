//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PersistedMetadataLookupManager : NSObject
{
    NSMutableArray *_lookupWorkItems;
}

+ (id)activityVersionsForActivity:(id)arg1;
+ (id)defaultManager;
- (id)asynchronousMetadataLookupWithLookupBeans:(id)arg1 previousSuccessfulLookupResults:(id)arg2;
- (id)asynchronousMetadataLookupWithLookupBeans:(id)arg1;
- (id)asynchronousMetadataLookupWithLookupBean:(id)arg1;
- (id)subItemsForSecondLookupIfNeededWithOperation:(id)arg1 metadataLookupSubItemSubsetDelegate:(id)arg2;
- (id)alertForTooManySubItemsForLookupIdentifier:(id)arg1;
- (id)synchronousMetadataLookupWithLookupBean:(id)arg1;
- (BOOL)hasWorkItemsInProgress;
- (void)cancelAllMetadataLookups;
- (void)cancelMetadataLookupWithIdentifier:(id)arg1;
- (void)updatePersistedMetadataForPackage:(id)arg1;
- (id)metadataLookupIdentifierForPackage:(id)arg1;
- (void)lookupMetadataSeriesCompleted:(id)arg1;
- (void)doInternalBookkeepingOfCompletedLookupWithWorker:(id)arg1;
- (id)metadataFromPersistentStoreWithIdentifier:(id)arg1;
- (id)createWorkSeriesForLookupBeans:(id)arg1 previousSuccessfulLookupResults:(id)arg2 forSynchronousMetadataLookup:(BOOL)arg3;
- (id)metadataLookupWorkItemForLookupBean:(id)arg1;
- (void)persistMetadata:(id)arg1 withIdentifier:(id)arg2;
- (id)providerPersistedMetadataLookupFilenameWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end
