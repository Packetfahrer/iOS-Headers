/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNPasteboardNativeStorage.h>

@interface KNPasteboardNativeStorage (PersistenceAdditions)
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct PasteboardNativeStorageArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct PasteboardNativeStorageArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
@end

