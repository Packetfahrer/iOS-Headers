/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSURLConnectionInternal;

@interface NSURLConnection : NSObject
{
    NSURLConnectionInternal *_internal;
}

+ (void)_setSweeperInterval:(unsigned long long)arg1;
+ (unsigned long long)_sweeperInterval;
+ (_Bool)canHandleRequest:(id)arg1;
+ (void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (id)_cfInternal;
- (id)_dlInternal;
- (_Bool)defersCallbacks;
- (void)setDefersCallbacks:(_Bool)arg1;
- (id)connectionProperties;
- (void)download;
- (id)currentRequest;
- (id)originalRequest;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)cancel;
- (void)start;
- (void)setDelegateQueue:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(_Bool)arg3;

@end

