/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData;



__attribute__((visibility("hidden")))

@interface MKTileOverlayTile : NSObject

{

    CDStruct_cbb88d5e _path;

    CDStruct_02837cd9 _frame;

    double _scale;

    NSData *_image;

}



- (id).cxx_construct;

- (void)dealloc;

- (id)description;

@property(nonatomic) CDStruct_90e2a262 frame; // @synthesize frame=_frame;

@property(retain, nonatomic) NSData *image; // @synthesize image=_image;

@property(nonatomic) CDStruct_cbb88d5e path; // @synthesize path=_path;

@property(nonatomic) double scale; // @synthesize scale=_scale;



@end

