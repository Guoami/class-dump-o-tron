//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DADaemonEAS/ASDataHandler.h>

@interface ASNoteDataHandler : ASDataHandler
{
}

- (id)getDAObjectWithLocalItem:(void *)arg1 serverId:(id)arg2 account:(id)arg3;
- (_Bool)closeDBAndSave:(_Bool)arg1;
- (void)openDB;
- (void)drainSuperfluousChanges;
- (void)drainContainer;
- (_Bool)wipeServerIds;
- (id)copyOfAllLocalObjectsInContainer;
- (_Bool)saveContainer;
- (void *)copyLocalObjectFromId:(int)arg1;
- (int)getIdFromLocalObject:(void *)arg1;
- (long long)dataclass;

@end
