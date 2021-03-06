//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMDynamicColor, NSString;

@protocol MMKImage <NSObject>
- (void)stretchImage:(float)arg1 topCap:(float)arg2;
- (float)getHeight;
- (float)getWidth;
- (NSString *)getUrl;
- (void)setSvgUrl:(NSString *)arg1 color:(MMDynamicColor *)arg2;
- (void)setDarkModeUrl:(NSString *)arg1;
- (void)setUrl:(NSString *)arg1;
@end

