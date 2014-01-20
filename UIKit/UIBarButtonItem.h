/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIBarItem.h"


#import "NSCoding.h"



@class NSDictionary, NSSet, NSString, UIColor, UIImage, UIToolbarButton, UIView;



@interface UIBarButtonItem : UIBarItem <NSCoding>

{

    NSString *_title;

    NSSet *_possibleTitles;

    SEL _action;

    id _target;

    UIImage *_image;

    UIImage *_landscapeImagePhone;

    struct UIEdgeInsets _imageInsets;

    struct UIEdgeInsets _landscapeImagePhoneInsets;

    double _width;

    UIView *_view;

    long long _tag;

    id _appearanceStorage;

    struct {

        unsigned int enabled:1;

        unsigned int style:3;

        unsigned int isSystemItem:1;

        unsigned int systemItem:7;

        unsigned int viewIsCustom:1;

        unsigned int isMinibarView:1;

        unsigned int disableAutosizing:1;

        unsigned int selected:1;

        unsigned int imageHasEffects:1;

    } _barButtonItemFlags;

    _Bool _flexible;

    _Bool _viewWantsLetterpressImage;

    _Bool _needsViewUpdateForLetterpressImage;

    double _toolbarCharge;

    double _minimumWidth;

    double _maximumWidth;

    NSSet *_possibleSystemItems;

    NSDictionary *_stylesForSizingTitles;

    UIBarButtonItem *__itemVariation;

}



+ (id)_appearanceBlindViewClasses;

+ (void)_getSystemItemStyle:(long long *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(long long)arg6 landscape:(_Bool)arg7 alwaysBordered:(_Bool)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10;

+ (Class)classForNavigationButton;

- (id)_appearanceStorage;

- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;

- (void)_connectInterfaceBuilderEventConnection:(id)arg1;

@property(nonatomic, setter=_setFlexible:) _Bool _flexible; // @synthesize _flexible;

- (id)_foregroundColorForLetterpressWithView:(id)arg1;

- (void)_getNavBarEdgeSizeAdjust:(struct CGSize *)arg1 imageInsets:(struct UIEdgeInsets *)arg2 landscape:(_Bool)arg3;

- (void)_getSystemItemStyle:(long long *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(long long)arg6 landscape:(_Bool)arg7 alwaysBordered:(_Bool)arg8;

- (void)_getToolbarEdgeInsets:(struct UIEdgeInsets *)arg1 imageInsets:(struct UIEdgeInsets *)arg2 glowInsets:(struct UIEdgeInsets *)arg3 forBarStyle:(long long)arg4 landscape:(_Bool)arg5 alwaysBordered:(_Bool)arg6;

@property(nonatomic, setter=_setImageHasEffects:) _Bool _imageHasEffects;

@property(retain, nonatomic, setter=_setItemVariation:) UIBarButtonItem *_itemVariation; // @synthesize _itemVariation=__itemVariation;

- (struct UIEdgeInsets)_leftRightImagePaddingForEdgeMarginInNavBarIsMini:(_Bool)arg1;

@property(nonatomic, setter=_setMaximumWidth:) double _maximumWidth; // @synthesize _maximumWidth;

@property(retain, nonatomic, getter=_miniImage, setter=_setMiniImage:) UIImage *miniImage;

@property(nonatomic, getter=_miniImageInsets, setter=_setMiniImageInsets:) struct UIEdgeInsets miniImageInsets;

@property(nonatomic, setter=_setMinimumWidth:) double _minimumWidth; // @synthesize _minimumWidth;

@property(readonly, nonatomic) _Bool _needsViewUpdateForLetterpressImage; // @synthesize _needsViewUpdateForLetterpressImage;

@property(copy, nonatomic, setter=_setPossibleItemVariations:) NSSet *_possibleItemVariations;

@property(copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems; // @synthesize possibleSystemItems=_possibleSystemItems;

- (void)_sendAction:(id)arg1 withEvent:(id)arg2;

@property(copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles; // @synthesize _stylesForSizingTitles;

- (void)_setSystemItem:(long long)arg1;

@property(nonatomic, setter=_setToolbarCharge:) double _toolbarCharge; // @synthesize _toolbarCharge;

- (void)_setWidth:(double)arg1;

- (_Bool)_shouldBezelSystemButtonImage;

@property(readonly, nonatomic) UIToolbarButton *_toolbarButton;

- (void)_updateView;

@property(readonly, nonatomic) _Bool _viewWantsLetterpressImage; // @synthesize _viewWantsLetterpressImage;

- (double)_width;

@property(nonatomic) SEL action; // @synthesize action=_action;

- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;

- (double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;

- (struct UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;

- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;

- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3;

- (double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;

- (id)createViewForNavigationItem:(id)arg1;

- (id)createViewForToolbar:(id)arg1;

@property(retain, nonatomic) UIView *customView;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)image;

- (struct UIEdgeInsets)imageInsets;

- (id)init;

- (id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3;

- (id)initWithCoder:(id)arg1;

- (id)initWithCustomView:(id)arg1;

- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;

- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;

- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;

- (_Bool)isCustomViewItem;

@property(nonatomic, getter=isEnabled) _Bool enabled;

- (_Bool)isMinibarView;

@property(readonly, nonatomic) _Bool isSystemItem;

- (id)itemVariation;

- (id)landscapeImagePhone;

- (struct UIEdgeInsets)landscapeImagePhoneInsets;

- (id)nextResponder;

@property(copy, nonatomic) NSSet *possibleTitles;

- (id)scriptingID;

@property(nonatomic) _Bool selected;

- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;

- (void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;

- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;

- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;

- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;

- (void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;

- (void)setImage:(id)arg1;

- (void)setImageInsets:(struct UIEdgeInsets)arg1;

- (void)setIsMinibarView:(_Bool)arg1;

- (void)setLandscapeImagePhone:(id)arg1;

- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets)arg1;

@property(nonatomic) long long style;

- (void)setTag:(long long)arg1;

@property(nonatomic) id target; // @synthesize target=_target;

@property(retain, nonatomic) UIColor *tintColor;

- (void)setTitle:(id)arg1;

- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;

- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

- (void)setView:(id)arg1;

@property(nonatomic) double width;

@property(readonly, nonatomic) long long systemItem;

- (long long)tag;

- (id)title;

- (struct UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1;

- (id)titleTextAttributesForState:(unsigned long long)arg1;

- (id)view;

- (id)window;



@end

