/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GQDRoot.h"


__attribute__((visibility("hidden")))

@interface GQDBGPresentation : GQDRoot

{

    struct __CFArray *mThemes;

    struct CGSize mSlideSize;

}



+ (struct _xmlNs *)appNamespace;

+ (void)initialize;

+ (id)parseNumberOutOfBasename:(id)arg1 returningNumber:(int *)arg2;

- (id).cxx_construct;

- (void)addTheme:(id)arg1;

- (id)colorForMissingAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;

- (struct __CFString *)createUpgradedAppBundleResourcePath:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;

- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;

- (void)dealloc;

- (id)init;

- (void)initializeAppBundleResourcesUrl;

- (void)loadAppBundleResourceToColorMap;

- (struct CGSize)slideSize;

- (struct __CFArray *)themes;



@end


