//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEPlaygroundRunnerProtocol.h"

@class DVTStackBacktrace, IDEPlaygroundExecutionSession, NSOperationQueue, NSString, NSXPCConnection;

@interface IDEPlaygroundRunner : NSObject <IDEPlaygroundRunnerProtocol, DVTInvalidation>
{
    NSXPCConnection *_connection;
    IDEPlaygroundExecutionSession *_session;
    NSOperationQueue *_operationQueue;
}

+ (void)initialize;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) IDEPlaygroundExecutionSession *session; // @synthesize session=_session;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)checkForCancellationWithReply:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)undesignateSessionWithCallback:(CDUnknownBlockType)arg1;
- (void)designateSessionForExecutionParameters:(id)arg1;
- (void)executePlayground:(CDUnknownBlockType)arg1;
- (void)configureWithPreparationParameters:(id)arg1;
- (void)registerExtraUserDefaultsIfNecessary:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

