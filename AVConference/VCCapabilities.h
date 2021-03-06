/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@interface VCCapabilities : NSObject <NSCoding>

{

    _Bool isAudioEnabled;

    _Bool isAudioPausedToStart;

    _Bool isVideoEnabled;

    _Bool isVideoPausedToStart;

    _Bool isDuplexVideoOnly;

    _Bool isDuplexAudioOnly;

    _Bool isKeyExchangeEnabled;

    _Bool isRelayEnabled;

    _Bool isRelayForced;

    _Bool requiresWifi;

    _Bool isDTLSEnabled;

    unsigned int preferredAudioCodec;

    unsigned int actualAudioCodec;

    unsigned int preferredVideoCodec;

    unsigned int actualVideoCodec;

}



+ (id)AudioOnlyVCCapabilities;

+ (id)VideoOnlyVCCapabilities;

@property unsigned int actualAudioCodec; // @synthesize actualAudioCodec;

@property unsigned int actualVideoCodec; // @synthesize actualVideoCodec;

- (void)decodeFromNSDictionary:(id)arg1;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithEncodedDictionary:(id)arg1;

@property _Bool isAudioEnabled; // @synthesize isAudioEnabled;

@property _Bool isAudioPausedToStart; // @synthesize isAudioPausedToStart;

@property _Bool isDTLSEnabled; // @synthesize isDTLSEnabled;

@property _Bool isDuplexAudioOnly; // @synthesize isDuplexAudioOnly;

@property _Bool isDuplexVideoOnly; // @synthesize isDuplexVideoOnly;

@property _Bool isKeyExchangeEnabled; // @synthesize isKeyExchangeEnabled;

@property _Bool isRelayEnabled; // @synthesize isRelayEnabled;

@property _Bool isRelayForced; // @synthesize isRelayForced;

@property _Bool isVideoEnabled; // @synthesize isVideoEnabled;

@property _Bool isVideoPausedToStart; // @synthesize isVideoPausedToStart;

- (id)newEncodedDictionary;

@property unsigned int preferredAudioCodec; // @synthesize preferredAudioCodec;

@property unsigned int preferredVideoCodec; // @synthesize preferredVideoCodec;

@property _Bool requiresWifi; // @synthesize requiresWifi;



@end


