/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, OCPPackagePart;



__attribute__((visibility("hidden")))

@interface OAVShapeManager : NSObject

{

    struct _xmlNode *mShape;

    unsigned short mType;

    OCPPackagePart *mPackagePart;

    NSDictionary *mShapeStyle;

    NSDictionary *mTextBoxStyle;

}



- (_Bool)autoInsets;

- (void)dealloc;

- (float)fillAngle;

- (float)fillBgAlpha;

- (id)fillBgColor;

- (float)fillFgAlpha;

- (id)fillFgColor;

- (float)fillFocus;

- (id)fillGradientColors;

- (id)fillType;

- (_Bool)fitShapeToText;

- (id)imageFillId;

- (id)imageFillTitle;

- (id)imageRelId;

- (id)initWithShape:(struct _xmlNode *)arg1 type:(unsigned short)arg2 packagePart:(id)arg3;

- (_Bool)isFillOK;

- (_Bool)isFilled;

- (_Bool)isImage;

- (_Bool)isShadowOK;

- (_Bool)isShadowed;

- (_Bool)isStrokeOK;

- (_Bool)isStroked;

- (_Bool)isWordArt;

- (id)limo;

- (id)movieRelId;

- (id)packagePart;

- (id)path;

- (float)shadowAlpha;

- (id)shadowColor;

- (struct CGPoint)shadowOffsets;

- (id)shadowType;

- (struct _xmlNode *)shape;

- (id)strokeBgColor;

- (id)strokeCapStyle;

- (id)strokeCompoundType;

- (id)strokeDashStyle;

- (id)strokeEndArrowLength;

- (id)strokeEndArrowType;

- (id)strokeEndArrowWidth;

- (float)strokeFgAlpha;

- (id)strokeFgColor;

- (id)strokeFillType;

- (id)strokeJoinStyle;

- (float)strokeMiterLimit;

- (id)strokeStartArrowLength;

- (id)strokeStartArrowType;

- (id)strokeStartArrowWidth;

- (float)strokeWidth;

- (id)textAltLayoutFlow;

- (id)textAnchor;

- (id)textBodyRects;

- (struct OAVTextBoxInsets)textInsets;

- (id)textLayoutFlow;

- (id)textRotation;

- (id)textWrapStyle;

- (unsigned short)type;



@end


