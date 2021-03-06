/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPFileDataStorage.h"


@class NSURL;



__attribute__((visibility("hidden")))

@interface TSPTemporaryDataStorage : TSPFileDataStorage

{

    NSURL *_URL;

    _Bool _gilligan_isRemote;

    _Bool _isMissingData;

}



- (void).cxx_destruct;

- (void)dealloc;

- (_Bool)gilligan_isRemote;

- (id)initWithURL:(id)arg1;

@property(nonatomic) _Bool isMissingData; // @synthesize isMissingData=_isMissingData;

- (void)performReadWithAccessor:(id)arg1;

- (void)setGilligan_isRemote:(_Bool)arg1;

- (_Bool)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id *)arg3 didCopyDataToBundle:(_Bool *)arg4;



@end


