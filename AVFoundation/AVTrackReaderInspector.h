/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVAssetTrackInspector.h"


@class AVWeakReference;



@interface AVTrackReaderInspector : AVAssetTrackInspector

{

    struct OpaqueFigFormatReader *_formatReader;

    struct OpaqueFigTrackReader *_trackReader;

    int _trackID;

    unsigned int _mediaType;

    AVWeakReference *_weakReferenceToAsset;

}



- (unsigned int)_figMediaType;

- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

- (struct OpaqueFigTrackReader *)_trackReader;

- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;

- (id)asset;

- (id)availableMetadataFormats;

- (id)commonMetadata;

- (void)dealloc;

- (struct CGSize)dimensions;

- (float)estimatedDataRate;

- (id)extendedLanguageTag;

- (void)finalize;

- (id)formatDescriptions;

- (unsigned long long)hash;

- (_Bool)isEnabled;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isExcludedFromAutoselectionInTrackGroup;

- (_Bool)isSelfContained;

- (id)languageCode;

- (long long)layer;

- (id)loudnessInfo;

- (id)mediaType;

- (id)metadataForFormat:(id)arg1;

- (CDStruct_1b6d18a9)minSampleDuration;

- (struct CGSize)naturalSize;

- (int)naturalTimeScale;

- (float)nominalFrameRate;

- (struct CGAffineTransform)preferredTransform;

- (float)preferredVolume;

- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;

- (id)segments;

- (CDStruct_e83c9415)timeRange;

- (long long)totalSampleDataLength;

- (int)trackID;



@end


