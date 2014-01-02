/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPContainedObject.h>

#import "KNInspectableAnimation-Protocol.h"

@class KNBuild, KNSlide, NSArray, NSSet, NSString;

// Not exported
@interface KNBuildChunk : TSPContainedObject <KNInspectableAnimation>
{
    KNBuild *mBuild;
    unsigned long long mIndexInBuild;
    double mDelay;
    _Bool mOwnsDelay;
    double mDuration;
    _Bool mOwnsDuration;
    _Bool mAutomatic;
    _Bool mOwnsAutomatic;
    unsigned long long mReferent;
    _Bool mOwnsReferent;
    _Bool _isComplementBoundaryChunk;
}

@property(nonatomic) _Bool isComplementBoundaryChunk; // @synthesize isComplementBoundaryChunk=_isComplementBoundaryChunk;
@property(readonly, nonatomic) unsigned long long indexInBuild; // @synthesize indexInBuild=mIndexInBuild;
@property(readonly, nonatomic) KNBuild *build; // @synthesize build=mBuild;
@property(readonly, nonatomic) _Bool canEditAnimations;
@property(readonly, nonatomic) NSSet *inspectableAttributes;
@property(readonly, nonatomic) NSString *title;
- (id)description;
- (id)p_stringForReferent:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasComplement;
@property(readonly, nonatomic) unsigned long long activeIndexOnSlide;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) _Bool isFirstOnSlide;
@property(readonly, nonatomic) _Bool isFirstInBuild;
@property(readonly, nonatomic) unsigned long long deliveryGroupIndex;
@property(readonly, nonatomic) unsigned long long indexOnSlide;
@property(readonly, nonatomic) KNSlide *slide;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long eventTrigger;
@property(readonly, nonatomic) NSArray *availableEventTriggers;
- (id)p_chunkToConsiderForSupportsWith;
- (_Bool)p_previousChunkIsFromSameBuild;
- (_Bool)p_previousGroupHasComplement;
- (_Bool)p_chunkSharesAnimationClassOrSubclassWithChunk:(id)arg1;
- (_Bool)p_supportsWithStart;
@property(nonatomic) _Bool ownsReferent;
- (_Bool)isComplementOfChunk:(id)arg1;
@property(readonly, nonatomic) unsigned long long p_referent;
@property(nonatomic) unsigned long long referent;
- (void)p_invalidateSlideCaches;
@property(nonatomic) _Bool ownsAutomatic;
@property(nonatomic, getter=isAutomatic) _Bool automatic;
@property(nonatomic) double delay;
@property(nonatomic) double duration;
- (void)reset;
- (void)dealloc;
- (id)initWithIndex:(unsigned long long)arg1 inBuild:(id)arg2 copyingAttributesFromChunk:(id)arg3;
- (id)initWithIndex:(unsigned long long)arg1 inBuild:(id)arg2;
@property(nonatomic) _Bool ownsDelay;
@property(nonatomic) _Bool ownsDuration;

@end
