/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface CoreDAVRequestLogger : NSObject
{
    id <CoreDAVAccountInfoProvider> _provider;
    NSArray *_responseHeadersSortDescriptors;
    int _snippetsLogged;
}

@property(retain) NSArray *responseHeadersSortDescriptors; // @synthesize responseHeadersSortDescriptors=_responseHeadersSortDescriptors;
- (void)finishCoreDAVResponse;
- (void)logCoreDAVResponseSnippet:(id)arg1;
- (void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(int)arg2;
- (void)logCoreDAVRequest:(id)arg1;
- (id)_inflateRequestBody:(id)arg1;
- (void)dealloc;
- (id)initWithProvider:(id)arg1;

@end
