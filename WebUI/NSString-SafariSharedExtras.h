/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"



@interface NSString (SafariSharedExtras)

+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2 nullStringPolicy:(long long)arg3;

+ (id)safari_stringWithUTF8Bytes:(const void *)arg1 length:(unsigned long long)arg2;

- (id)_isTopLevelDomainUsingCFFromComponents:(id)arg1;

- (id)safari_bestURLForUserTypedString;

- (id)safari_fixedStringByExpandingTildeInPath;

- (_Bool)safari_hasCaseInsensitivePrefix:(id)arg1;

- (_Bool)safari_hasCaseInsensitiveSuffix:(id)arg1;

- (_Bool)safari_hasLocalizedCaseInsensitivePrefix:(id)arg1;

- (_Bool)safari_hasPrefix:(id)arg1;

- (_Bool)safari_hasSuffix:(id)arg1;

- (id)safari_highLevelDomainFromHost;

- (_Bool)safari_isCaseInsensitiveEqualToString:(id)arg1;

- (id)safari_possibleTopLevelDomainCorrectionForUserTypedString;

- (id)safari_simplifiedUserVisibleURLString;

- (id)safari_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(_Bool)arg2 simplifiedStringOffset:(unsigned long long *)arg3;

- (id)safari_stringByFoldingWideCharactersAndNormalizing;

- (id)safari_stringByRemovingUnnecessaryCharactersFromUserTypedURLString;

- (id)safari_stringByRemovingWwwDotPrefix;

- (id)safari_stringBySubstitutingAmpersandAndAngleBracketsForHTMLEntities;

- (id)safari_stringByTrimmingWhitespace;

- (id)safari_userVisibleURL;

@end

