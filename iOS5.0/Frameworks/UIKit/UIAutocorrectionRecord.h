/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface UIAutocorrectionRecord : NSObject
{
    NSString *_typing;
    NSString *_autocorrection;
}

+ (id)recordOfTyping:(id)arg1 forAutocorrection:(id)arg2;
@property(readonly, nonatomic) NSString *autocorrection; // @synthesize autocorrection=_autocorrection;
@property(readonly, nonatomic) NSString *typing; // @synthesize typing=_typing;
- (void)dealloc;

@end

