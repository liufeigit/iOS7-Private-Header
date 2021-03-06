/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "WebPluginContainerCheckController.h"

#import "WebPluginManualLoader.h"



@class NSMutableArray, NSMutableSet, WAKView, WebDataSource;



@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController>

{

    WAKView *_documentView;

    WebDataSource *_dataSource;

    NSMutableArray *_views;

    _Bool _started;

    NSMutableSet *_checksInProgress;

    NSMutableArray *_viewsNotInDocument;

}



+ (void)addPlugInView:(id)arg1;

+ (_Bool)isPlugInView:(id)arg1;

+ (id)plugInViewWithArguments:(id)arg1 fromPluginPackage:(id)arg2;

+ (void)pluginViewHidden:(id)arg1;

- (id)URLPolicyCheckReferrer;

- (void)_cancelOutstandingChecks;

- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)arg1;

- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)arg1 inFrame:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4;

- (void)_webPluginContainerPostMediaPlayerNotification:(int)arg1 forElement:(id)arg2;

- (void)_webPluginContainerSetMediaPlayerProxy:(id)arg1 forElement:(id)arg2;

- (void)addPlugin:(id)arg1;

- (void)dealloc;

- (void)destroyAllPlugins;

- (void)destroyOnePlugin:(id)arg1;

- (void)destroyPlugin:(id)arg1;

- (id)initWithDocumentView:(id)arg1;

- (_Bool)plugInsAreRunning;

- (void)pluginView:(id)arg1 receivedData:(id)arg2;

- (void)pluginView:(id)arg1 receivedError:(id)arg2;

- (void)pluginView:(id)arg1 receivedResponse:(id)arg2;

- (void)pluginViewCreated:(id)arg1;

- (void)pluginViewFinishedLoading:(id)arg1;

- (_Bool)processingUserGesture;

- (void)restorePluginsFromCache;

- (void)setDataSource:(id)arg1;

- (void)showStatus:(id)arg1;

- (void)startAllPlugins;

- (void)stopAllPlugins;

- (void)stopOnePlugin:(id)arg1;

- (void)stopOnePluginForPageCache:(id)arg1;

- (void)stopPluginsForPageCache;

- (id)superlayerForPluginView:(id)arg1;

- (id)webFrame;

- (void)webPlugInContainerDidHideFullScreenForView:(id)arg1;

- (void)webPlugInContainerLoadRequest:(id)arg1 inFrame:(id)arg2;

- (void)webPlugInContainerShowStatus:(id)arg1;

- (void)webPlugInContainerWillShowFullScreenForView:(id)arg1;

- (id)webView;



@end


