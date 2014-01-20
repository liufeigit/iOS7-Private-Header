/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVItem.h"


@class CoreDAVDenyItem, CoreDAVGrantItem, CoreDAVInvertItem, CoreDAVItemWithHrefChildItem, CoreDAVItemWithNoChildren, CoreDAVPrincipalItem;



@interface CoreDAVACEItem : CoreDAVItem

{

    CoreDAVPrincipalItem *_principal;

    CoreDAVInvertItem *_invert;

    CoreDAVGrantItem *_grant;

    CoreDAVDenyItem *_deny;

    CoreDAVItemWithNoChildren *_protectedItem;

    CoreDAVItemWithHrefChildItem *_inherited;

}



+ (id)copyParseRules;

+ (id)privilegeItemWithNameSpace:(id)arg1 andName:(id)arg2;

- (void)dealloc;

@property(retain) CoreDAVDenyItem *deny; // @synthesize deny=_deny;

- (id)description;

@property(retain) CoreDAVGrantItem *grant; // @synthesize grant=_grant;

@property(retain) CoreDAVItemWithHrefChildItem *inherited; // @synthesize inherited=_inherited;

- (id)init;

- (id)initWithPrincipal:(id)arg1 shouldInvert:(_Bool)arg2 action:(int)arg3 withPrivileges:(id)arg4;

@property(retain) CoreDAVInvertItem *invert; // @synthesize invert=_invert;

@property(retain) CoreDAVPrincipalItem *principal; // @synthesize principal=_principal;

@property(retain) CoreDAVItemWithNoChildren *protectedItem; // @synthesize protectedItem=_protectedItem;

- (void)write:(id)arg1;



@end

