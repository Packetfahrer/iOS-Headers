/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CorePDF/CPCluster.h>

@interface CPCluster (CPAdditions)
+ (void)clusterTextLine:(id)arg1;
+ (void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned int)arg2 count:(unsigned int *)arg3;
- (void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(CDStruct_2a61e2ef *)arg3;
- (void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(BOOL)arg2;
- (void)makeWords:(CDStruct_a823b51b *)arg1 count:(unsigned int)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned int)arg4;
@end

