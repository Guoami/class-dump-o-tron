//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureFileOutput_FigRecorder.h>

@class AVCaptureMovieFileOutputInternal_FigRecorder, NSArray;

@interface AVCaptureMovieFileOutput_FigRecorder : AVCaptureFileOutput_FigRecorder
{
    AVCaptureMovieFileOutputInternal_FigRecorder *_internal;
}

+ (_Bool)consolidateMovieFragmentsInFile:(id)arg1 error:(id *)arg2;
+ (_Bool)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id *)arg3;
+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)arg1;
+ (void)initialize;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (int)_stopRecording;
- (int)_startRecording:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2;
- (void)_handleStartRecordingError:(int)arg1 info:(id)arg2;
@property(copy, nonatomic) NSArray *metadata;
- (id)outputSettingsForConnection:(id)arg1;
- (_Bool)sendsLastVideoPreviewFrame;
- (void)setSendsLastVideoPreviewFrame:(_Bool)arg1;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)stopRecording;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (id)outputFileURL;
- (void)resumeRecording;
- (void)pauseRecording;
- (_Bool)isRecordingPaused;
- (_Bool)isRecording;
- (id)connectionMediaTypes;
- (void)dealloc;
- (id)init;
- (_Bool)getRecorderBoolForKey:(id)arg1 withDefault:(_Bool)arg2;
- (_Bool)isKindOfClass:(Class)arg1;

@end

