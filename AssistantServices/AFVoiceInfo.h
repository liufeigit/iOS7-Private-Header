/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSString;



@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying>

{

    _Bool _isCustom;

    NSString *_languageCode;

    long long _gender;

}



+ (_Bool)supportsSecureCoding;

- (void).cxx_destruct;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (id)dictionaryRepresentation;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) long long gender; // @synthesize gender=_gender;

- (unsigned long long)hash;

- (id)initWithCoder:(id)arg1;

- (id)initWithDictionaryRepresentation:(id)arg1;

- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(_Bool)arg3;

@property(nonatomic) _Bool isCustom; // @synthesize isCustom=_isCustom;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;



@end


