/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSDDecorator.h"

#import "TSKChangeSourceObserver.h"



@class NSArray, TSDInteractiveCanvasController;



__attribute__((visibility("hidden")))

@interface TSDUserDefinedGuideController : NSObject <TSDDecorator, TSKChangeSourceObserver>

{

    TSDInteractiveCanvasController *_icc;

    _Bool _editingGuides;

    _Bool _tornDown;

    NSArray *_currentGuides;

}



- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;

- (void)beginEditingGuides;

- (void)changeOrientationOfGuide:(id)arg1 toType:(int)arg2 withGuideAtPoint:(struct CGPoint)arg3;

@property(readonly, nonatomic) NSArray *currentGuides; // @synthesize currentGuides=_currentGuides;

- (void)dealloc;

- (id)decoratorOverlayLayers;

- (void)deleteGuide:(id)arg1;

- (void)endEditingGuides;

- (id)guideClosestToPoint:(struct CGPoint)arg1 distance:(double *)arg2 requiresSpecifiedType:(_Bool)arg3 desiredType:(int)arg4;

- (id)guideStorage;

- (void)hideGuides;

- (id)initWithInteractiveCanvasController:(id)arg1;

@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_icc;

- (void)p_hideUserDefinedGuides;

- (void)p_showUserDefinedGuides;

- (void)replaceGuide:(id)arg1 withGuideAtPoint:(struct CGPoint)arg2;

- (_Bool)shouldShowUserDefinedGuides;

- (void)showGuides;

- (void)teardown;

- (void)updateCurrentGuides;



@end


