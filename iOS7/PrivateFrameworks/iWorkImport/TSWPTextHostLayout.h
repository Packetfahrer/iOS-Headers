/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDDrawableLayout.h>

#import "TSWPTextEditingHostLayout-Protocol.h"

@class TSWPShapeInfo, TSWPShapeLayout;

// Not exported
@interface TSWPTextHostLayout : TSDDrawableLayout <TSWPTextEditingHostLayout>
{
    TSWPShapeInfo *_editingShapeInfo;
    TSWPShapeLayout *_editingShapeLayout;
}

@property(retain, nonatomic) TSWPShapeInfo *editingShape; // @synthesize editingShape=_editingShapeInfo;
@property(readonly, nonatomic) TSWPShapeLayout *editingShapeLayout; // @synthesize editingShapeLayout=_editingShapeLayout;
- (void)updateChildrenFromInfo;
- (void)dealloc;

@end

