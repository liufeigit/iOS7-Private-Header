/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSError, NSHashTable, NSURL;



@interface NSFileWrapperMoreIVars : NSObject

{

    NSURL *contentsURL;

    _Bool contentsMustBeReadWithoutMapping;

    _Bool attributesMustBeWrittenSoNoHardLinking;

    NSHashTable *parents;

    NSError *contentsLazyReadingError;

    NSDictionary *cachedDirectoryChildrenAsDictionary;

}



@end


