/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIPrintInteractionControllerDelegate-Protocol.h"

@class UIBarButtonItem;

@interface PLPhotoPrinter : NSObject <UIPrintInteractionControllerDelegate>
{
    id _delegate;
    UIBarButtonItem *_barButtonItem;
    struct {
        unsigned int printOptionsVisible:1;
        unsigned int delegateDidPrint:1;
        unsigned int delegatePresentPrintOptions:1;
        unsigned int delegateDismissPrintOptions:1;
    } _printerFlags;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (BOOL)printOptionsVisible;
- (void)printInteractionControllerDidDismissPrinterOptions:(id)arg1;
- (void)printInteractionControllerWillDismissPrinterOptions:(id)arg1;
- (void)printInteractionControllerWillPresentPrinterOptions:(id)arg1;
- (void)dismissAndRepositionPopover;
- (void)dismissPhotoPrinterAnimated:(BOOL)arg1;
- (void)printPhotos:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)printPhotos:(id)arg1;
- (void)printPhoto:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)printPhoto:(id)arg1;
- (void)dealloc;
- (id)_barButtonItem;
- (void)_setBarButtonItem:(id)arg1;

@end
