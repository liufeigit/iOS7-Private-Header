/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIProductPageTableSection.h"


@class NSString, SKUIClientContext, SKUIColorScheme, SKUILayoutCache;



@interface SKUIProductPageTableTextBoxSection : SKUIProductPageTableSection

{

    SKUIClientContext *_clientContext;

    SKUIColorScheme *_colorScheme;

    _Bool _isExpanded;

    long long _stringIndex;

    NSString *_subtitle;

    SKUILayoutCache *_textLayoutCache;

    NSString *_title;

}



- (void).cxx_destruct;

@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;

- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;

- (id)initWithClientContext:(id)arg1;

- (long long)numberOfRowsInSection;

- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;

@property(nonatomic) long long stringIndex; // @synthesize stringIndex=_stringIndex;

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;

@property(retain, nonatomic) SKUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;



@end

