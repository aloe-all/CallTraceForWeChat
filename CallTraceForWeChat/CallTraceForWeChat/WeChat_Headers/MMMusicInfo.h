//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString, UIImage;

@interface MMMusicInfo : NSObject <PBCoding>
{
    NSString *m_nsMusicID;
    NSString *m_nsTitle;
    NSString *m_nsSinger;
    NSString *m_nsEPName;
    NSString *m_nsCoverImg;
    NSString *m_nsCoverImgHD;
    NSString *m_nsLyrics;
    NSString *m_nsWebUrl;
    NSString *m_nsDataUrl;
    NSString *m_nsLowBandUrl;
    NSString *m_nsAppId;
    NSString *m_nsJSAPIWebUrl;
    NSString *m_webViewId;
    NSString *m_nsWAUsername;
    NSString *m_nsWAAppId;
    double m_nsStartTime;
    NSString *m_nsWebViewSrcId;
    NSString *m_nsMusicBarUrl;
    _Bool m_isLocalFile;
    _Bool m_disableBanner;
    _Bool m_isSpam;
    _Bool m_isHLS;
    _Bool m_isBannerDirectToWebView;
    NSString *m_nsBizUserName;
    NSString *m_favId;
    int m_originSourceType;
    int _m_originSourceType;
    NSString *_m_nsBizUserName;
    UIImage *_m_localCoverImage;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_favId;
+ (void)PBArrayAdd_m_isBannerDirectToWebView;
+ (void)PBArrayAdd_m_isHLS;
+ (void)PBArrayAdd_m_isSpam;
+ (void)PBArrayAdd_m_disableBanner;
+ (void)PBArrayAdd_m_isLocalFile;
+ (void)PBArrayAdd_m_nsMusicBarUrl;
+ (void)PBArrayAdd_m_nsWebViewSrcId;
+ (void)PBArrayAdd_m_nsStartTime;
+ (void)PBArrayAdd_m_nsWAAppId;
+ (void)PBArrayAdd_m_nsWAUsername;
+ (void)PBArrayAdd_m_webViewId;
+ (void)PBArrayAdd_m_nsJSAPIWebUrl;
+ (void)PBArrayAdd_m_nsAppId;
+ (void)PBArrayAdd_m_nsLowBandUrl;
+ (void)PBArrayAdd_m_nsDataUrl;
+ (void)PBArrayAdd_m_nsWebUrl;
+ (void)PBArrayAdd_m_nsLyrics;
+ (void)PBArrayAdd_m_nsCoverImgHD;
+ (void)PBArrayAdd_m_nsCoverImg;
+ (void)PBArrayAdd_m_nsEPName;
+ (void)PBArrayAdd_m_nsSinger;
+ (void)PBArrayAdd_m_nsTitle;
+ (void)PBArrayAdd_m_nsMusicID;
@property(retain, nonatomic) UIImage *m_localCoverImage; // @synthesize m_localCoverImage=_m_localCoverImage;
@property(nonatomic) int m_originSourceType; // @synthesize m_originSourceType=_m_originSourceType;
@property(retain, nonatomic) NSString *m_nsBizUserName; // @synthesize m_nsBizUserName=_m_nsBizUserName;
@property(retain, nonatomic) NSString *m_favId; // @synthesize m_favId;
@property(nonatomic) _Bool m_isBannerDirectToWebView; // @synthesize m_isBannerDirectToWebView;
@property(nonatomic) _Bool m_isHLS; // @synthesize m_isHLS;
@property(nonatomic) _Bool m_isSpam; // @synthesize m_isSpam;
@property(nonatomic) _Bool m_disableBanner; // @synthesize m_disableBanner;
@property(nonatomic) _Bool m_isLocalFile; // @synthesize m_isLocalFile;
@property(retain, nonatomic) NSString *m_nsMusicBarUrl; // @synthesize m_nsMusicBarUrl;
@property(retain, nonatomic) NSString *m_nsWebViewSrcId; // @synthesize m_nsWebViewSrcId;
@property(nonatomic) double m_nsStartTime; // @synthesize m_nsStartTime;
@property(retain, nonatomic) NSString *m_nsWAAppId; // @synthesize m_nsWAAppId;
@property(retain, nonatomic) NSString *m_nsWAUsername; // @synthesize m_nsWAUsername;
@property(retain, nonatomic) NSString *m_webViewId; // @synthesize m_webViewId;
@property(retain, nonatomic) NSString *m_nsJSAPIWebUrl; // @synthesize m_nsJSAPIWebUrl;
@property(retain, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId;
@property(retain, nonatomic) NSString *m_nsLowBandUrl; // @synthesize m_nsLowBandUrl;
@property(retain, nonatomic) NSString *m_nsDataUrl; // @synthesize m_nsDataUrl;
@property(retain, nonatomic) NSString *m_nsWebUrl; // @synthesize m_nsWebUrl;
@property(retain, nonatomic) NSString *m_nsLyrics; // @synthesize m_nsLyrics;
@property(retain, nonatomic) NSString *m_nsCoverImgHD; // @synthesize m_nsCoverImgHD;
@property(retain, nonatomic) NSString *m_nsCoverImg; // @synthesize m_nsCoverImg;
@property(retain, nonatomic) NSString *m_nsEPName; // @synthesize m_nsEPName;
@property(retain, nonatomic) NSString *m_nsSinger; // @synthesize m_nsSinger;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(retain, nonatomic) NSString *m_nsMusicID; // @synthesize m_nsMusicID;
- (void).cxx_destruct;
- (_Bool)isLyricsEmpty;
- (_Bool)isMusicUrlEmpty;
- (_Bool)isShakeOversea;
- (_Bool)isQQMusic;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

