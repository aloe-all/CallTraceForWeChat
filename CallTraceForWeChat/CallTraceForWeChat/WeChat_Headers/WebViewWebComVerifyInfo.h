//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WebViewWebComVerifyInfo : MMObject
{
    unsigned int _taskReportId;
    unsigned int _taskJsCtxReportId;
    NSString *_name;
    NSString *_resCdnUrl;
    NSString *_resMd5;
    NSString *_webComptConfigJson;
}

@property(copy, nonatomic) NSString *webComptConfigJson; // @synthesize webComptConfigJson=_webComptConfigJson;
@property(nonatomic) unsigned int taskJsCtxReportId; // @synthesize taskJsCtxReportId=_taskJsCtxReportId;
@property(nonatomic) unsigned int taskReportId; // @synthesize taskReportId=_taskReportId;
@property(copy, nonatomic) NSString *resMd5; // @synthesize resMd5=_resMd5;
@property(copy, nonatomic) NSString *resCdnUrl; // @synthesize resCdnUrl=_resCdnUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end

