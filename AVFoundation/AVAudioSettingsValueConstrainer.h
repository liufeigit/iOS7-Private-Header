/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableArray;



@interface AVAudioSettingsValueConstrainer : NSObject

{

    struct AudioStreamBasicDescription _inputASBD;

    struct AudioStreamBasicDescription _outputASBD;

    struct OpaqueAudioConverter *_audioConverter;

    unsigned int _outputDataRate;

    _Bool _needNewConverter;

    _Bool _needAvailableSampleRates;

    _Bool _needApplicableParameters;

    NSArray *_availableOutputSampleRates;

    NSMutableArray *_availableOutputDataRates;

    NSMutableArray *_applicableOutputSampleRatesForDataRate;

    NSMutableArray *_applicableOutputDataRatesForSampleRate;

}



- (void)_bringUpToDate;

- (void)_buildApplicableDataRatesForSampleRates;

- (void)_buildAudioConverter;

- (void)_buildAvailableSampleRates;

- (id)_fetchApplicableOutputDataRates;

- (float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2;

- (float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2;

- (unsigned int)availableOutputChannelCountForDesiredChannelCount:(unsigned int)arg1 rounding:(long long)arg2;

- (void)dealloc;

- (void)finalize;

- (id)init;

@property(nonatomic) unsigned int outputBitsPerChannel;

@property(nonatomic) unsigned int outputChannelCount;

@property(nonatomic) unsigned int outputDataRate;

@property(nonatomic) unsigned int outputFormat;

@property(nonatomic) unsigned int outputFormatFlags;

@property(nonatomic) float outputSampleRate;

- (void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription)arg1;



@end


