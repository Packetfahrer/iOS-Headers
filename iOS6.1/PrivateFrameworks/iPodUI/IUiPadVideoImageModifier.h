/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPImageModifier.h"

@interface IUiPadVideoImageModifier : MPImageModifier
{
}

+ (BOOL)imageShouldBeShinyWithSize:(struct CGSize)arg1;
- (BOOL)shouldModifyImageWithContentSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 imageSubRect:(struct CGRect)arg3;
- (struct CGRect)imageFrameForContentSize:(struct CGSize)arg1 imageFrame:(struct CGRect)arg2 imageSubRect:(struct CGRect)arg3;
- (BOOL)_shouldScaleCropRectToFillContentSize:(struct CGSize)arg1 imageSubRect:(struct CGRect)arg2;

@end

