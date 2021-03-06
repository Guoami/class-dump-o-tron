//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MZWorker.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MZAbstractWorker : NSObject <MZWorker>
{
    NSString *_statusMessage;
    double _percentComplete;
    BOOL _cancelled;
    NSMutableDictionary *_userInfo;
    NSMutableArray *_errors;
    NSMutableArray *_warnings;
    NSMutableArray *_infoMessages;
}

- (id)description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)seriesCompleted;
- (BOOL)hasInfoMessages;
- (BOOL)hasErrors;
- (void)resetErrorsWarningsAndInfoMessages;
- (void)addInfoMessages:(id)arg1;
- (id)infoMessages;
- (void)addWarnings:(id)arg1;
- (void)addWarning:(id)arg1;
- (void)addErrors:(id)arg1;
- (void)addError:(id)arg1;
- (id)warnings;
- (id)errors;
- (void)setPercentComplete:(double)arg1;
- (double)percentComplete;
- (void)addException:(id)arg1;
- (void)addErrorMessage:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (id)errorMessage;
- (id)statusMessage;
- (id)userInfo;
- (BOOL)isCancelled;
- (void)cancel;
- (void)run;
- (void)dealloc;
- (id)init;

@end

