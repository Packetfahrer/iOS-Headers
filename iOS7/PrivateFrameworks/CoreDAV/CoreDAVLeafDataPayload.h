/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <CoreDAV/CoreDAVLeafDataPayload-Protocol.h>

@class NSArray, NSData, NSString, NSURL;

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload>
{
    NSURL *_serverID;
    NSString *_syncKey;
    NSData *_dataPayload;
}

@property(readonly) NSString *syncKey; // @synthesize syncKey=_syncKey;
@property(readonly) NSData *dataPayload; // @synthesize dataPayload=_dataPayload;
@property(retain) NSURL *serverID; // @synthesize serverID=_serverID;
- (void)dealloc;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;

// Remaining properties
@property(readonly) NSArray *childrenOrder;

@end
