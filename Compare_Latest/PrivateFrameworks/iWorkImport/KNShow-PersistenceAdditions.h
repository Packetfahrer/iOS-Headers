/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNShow.h>

@interface KNShow (PersistenceAdditions)
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct ShowArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ShowArchive *)arg1 unarchiver:(id)arg2;
@end
