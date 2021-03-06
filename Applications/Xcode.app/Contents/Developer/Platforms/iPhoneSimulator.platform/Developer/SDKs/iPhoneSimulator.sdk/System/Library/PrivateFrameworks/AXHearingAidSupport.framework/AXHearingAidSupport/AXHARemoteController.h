//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceDelegate.h"
#import "NSStreamDelegate.h"

@class AXHARemoteMessage, AXHATimer, NSInputStream, NSMutableArray, NSMutableData, NSNetService, NSOutputStream, NSString;

@interface AXHARemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate>
{
    _Bool _didValidateHIID;
    id <AXHARemoteControllerDelegate> _delegate;
    NSNetService *_service;
    NSMutableArray *_outputDataQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    AXHATimer *_communicationTimer;
    NSMutableData *_inputBuffer;
    NSMutableData *_outputBuffer;
    NSMutableArray *_ackQueue;
    AXHATimer *_ackTimer;
    AXHATimer *_dataTimer;
    AXHARemoteMessage *_currentMessageInFlight;
}

@property(retain, nonatomic) AXHARemoteMessage *currentMessageInFlight; // @synthesize currentMessageInFlight=_currentMessageInFlight;
@property(retain, nonatomic) AXHATimer *dataTimer; // @synthesize dataTimer=_dataTimer;
@property(retain, nonatomic) AXHATimer *ackTimer; // @synthesize ackTimer=_ackTimer;
@property(retain, nonatomic) NSMutableArray *ackQueue; // @synthesize ackQueue=_ackQueue;
@property(retain, nonatomic) NSMutableData *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property(retain, nonatomic) NSMutableData *inputBuffer; // @synthesize inputBuffer=_inputBuffer;
@property(retain, nonatomic) AXHATimer *communicationTimer; // @synthesize communicationTimer=_communicationTimer;
@property(nonatomic) _Bool didValidateHIID; // @synthesize didValidateHIID=_didValidateHIID;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSMutableArray *outputDataQueue; // @synthesize outputDataQueue=_outputDataQueue;
@property(retain, nonatomic) NSNetService *service; // @synthesize service=_service;
@property(nonatomic) id <AXHARemoteControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceWillResolve:(id)arg1;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (_Bool)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2 andAckCompletion:(CDUnknownBlockType)arg3;
- (_Bool)sendObject:(id)arg1;
- (void)openConnectionIfNecessary;
- (void)resetConnection;
- (void)sendDataChunk;
- (void)enqueueData:(id)arg1;
- (void)clearMessageQueue;
- (void)receivedData:(id)arg1;
- (void)messageWasAcked:(id)arg1;
- (void)finishedSending:(id)arg1;
- (void)didCommunicate;
- (id)nextMessageInQueue;
- (void)validatePairedAid;
- (_Bool)isSlave;
- (id)name;
- (_Bool)isConnected;
- (_Bool)isConnecting;
- (void)setupStream:(id)arg1;
- (void)setSecuritySettingsForStream:(id)arg1;
- (void)closeConnectionWithError:(id)arg1;
- (void)acceptConnection:(int)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

