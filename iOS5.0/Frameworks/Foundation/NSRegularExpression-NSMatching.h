/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSRegularExpression.h>

@interface NSRegularExpression (NSMatching)
- (struct _NSRange)rangeOfFirstMatchInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (id)firstMatchInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (unsigned int)numberOfMatchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (id)matchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (void)enumerateMatchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 usingBlock:(id)arg4;
@end

