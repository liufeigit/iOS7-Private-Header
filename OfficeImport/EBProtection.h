/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface EBProtection : NSObject

{

}



+ (id)edProtectionFromXlDXfProtect:(struct XlDXfProtect *)arg1;

+ (id)edProtectionFromXlGraphicsInfo:(struct XlGraphicsInfo *)arg1;

+ (id)edProtectionFromXlXf:(struct XlXf *)arg1;

+ (void)writeProtection:(id)arg1 toXlGraphicsInfo:(struct XlGraphicsInfo *)arg2;

+ (void)writeProtection:(id)arg1 toXlXf:(struct XlXf *)arg2;

+ (struct XlDXfProtect *)xlDXfProtectFromEDProtection:(id)arg1;



@end

