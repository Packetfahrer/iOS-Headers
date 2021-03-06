/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CUICatalog, NSString, _UICache;

// Not exported
@interface _UIAssetManager : NSObject
{
    _UICache *_imageCache;
    CUICatalog *_catalog;
    NSString *_assetManagerName;
    long long _preferredIdiom;
    double _preferredScale;
    unsigned long long _preferredIdiomSubtype;
    _UIAssetManager *_nextAssetManager;
}

+ (id)assetManagerForBundle:(id)arg1;
@property(nonatomic) double preferredScale; // @synthesize preferredScale=_preferredScale;
@property(retain, nonatomic) _UIAssetManager *nextAssetManager; // @synthesize nextAssetManager=_nextAssetManager;
- (id)description;
- (void)disableCacheFlushing;
@property(readonly, nonatomic) NSString *carFileName;
- (id)_catalog;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 idiom:(long long)arg2;
- (id)imageNamed:(id)arg1 idiom:(long long)arg2 subtype:(unsigned long long)arg3;
- (id)imageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4;
- (id)imageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4 cachingOptions:(unsigned long long)arg5;
- (void)dealloc;
- (id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3;

@end

