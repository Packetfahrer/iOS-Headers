/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPFileDataStorage.h>

@class NSURL;

// Not exported
@interface TSPTemporaryDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
    _Bool _gilligan_isRemote;
}

- (void)setGilligan_isRemote:(_Bool)arg1;
- (_Bool)gilligan_isRemote;
- (void).cxx_destruct;
- (_Bool)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id *)arg3 didCopyDataToBundle:(_Bool *)arg4;
- (void)performReadWithAccessor:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

