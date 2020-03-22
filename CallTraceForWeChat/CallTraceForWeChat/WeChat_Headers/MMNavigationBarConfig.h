//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMDynamicColor, NSString;

@interface MMNavigationBarConfig : NSObject
{
    _Bool _useBlackStatusbar;
    MMDynamicColor *_backgroundColor;
    NSString *_barTitle;
    long long _leftBarButtonType;
    NSString *_leftButtonColor;
    NSString *_rightButtonTitle;
    NSString *_rightButtonImage;
    NSString *_rightButtonColor;
}

+ (id)NavigationBarConfigWithBackgroundColor:(id)arg1 useBlackStatusbar:(_Bool)arg2 barTitle:(id)arg3 leftBarButtonType:(long long)arg4 leftButtonColor:(id)arg5 rightButtonTitle:(id)arg6 rightButtonImage:(id)arg7 rightButtonColor:(id)arg8;
@property(readonly, nonatomic) NSString *rightButtonColor; // @synthesize rightButtonColor=_rightButtonColor;
@property(readonly, nonatomic) NSString *rightButtonImage; // @synthesize rightButtonImage=_rightButtonImage;
@property(readonly, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(readonly, nonatomic) NSString *leftButtonColor; // @synthesize leftButtonColor=_leftButtonColor;
@property(readonly, nonatomic) long long leftBarButtonType; // @synthesize leftBarButtonType=_leftBarButtonType;
@property(readonly, nonatomic) NSString *barTitle; // @synthesize barTitle=_barTitle;
@property(readonly, nonatomic) _Bool useBlackStatusbar; // @synthesize useBlackStatusbar=_useBlackStatusbar;
@property(readonly, nonatomic) MMDynamicColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBackgroundColor:(id)arg1 useBlackStatusbar:(_Bool)arg2 barTitle:(id)arg3 leftBarButtonType:(long long)arg4 leftButtonColor:(id)arg5 rightButtonTitle:(id)arg6 rightButtonImage:(id)arg7 rightButtonColor:(id)arg8;

@end
