/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDRoot.h>

@class GQDSLPageMargins, GQDSStylesheet;

@interface GQDSLPublication : GQDRoot
{
    struct CGSize mPageSize;
    GQDSLPageMargins *mPageMargins;
    GQDSStylesheet *mStylesheet;
    BOOL mHasBody;
    BOOL mIsOldAssetNameMapInitialized;
    struct __CFDictionary *mOldAssetNameMap;
    BOOL mIsOldTemplateNameMapInitialized;
    struct __CFDictionary *mOldTemplateNameMap;
    BOOL mShowOutliner;
    BOOL mHasHeaders;
    BOOL mHasFooters;
}

+ (struct _xmlNs *)appNamespace;
- (id)init;
- (void)dealloc;
- (struct CGSize)pageSize;
- (id)pageMargins;
- (void)setPageMargins:(id)arg1;
- (id)stylesheet;
- (void)setStylesheet:(id)arg1;
- (BOOL)hasBody;
- (void)initializeAppBundleResourcesUrl;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;
- (BOOL)showOutliner;
- (BOOL)hasHeaders;
- (BOOL)hasFooters;

@end
