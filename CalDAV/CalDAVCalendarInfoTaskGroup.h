/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVContainerInfoTaskGroup.h"



@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup

{

    _Bool _fetchSharees;

}



- (id)_copyContainerParserMappings;

- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;

- (id)containerForURL:(id)arg1;

@property(nonatomic) _Bool fetchSharees; // @synthesize fetchSharees=_fetchSharees;

- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;



@end

