//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class BrandProductOrderPayResult;

@interface BrandProductCancelPayHandler : NSObject <PBMessageObserverDelegate>
{
    BrandProductOrderPayResult *_orderResult;
    CDUnknownBlockType _completion;
    BrandProductCancelPayHandler *_selfRetain;
}

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2;
+ (id)errorWithCode:(long long)arg1;
+ (void)handleCancelPayWithOrderReuslt:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) BrandProductCancelPayHandler *selfRetain; // @synthesize selfRetain=_selfRetain;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) BrandProductOrderPayResult *orderResult; // @synthesize orderResult=_orderResult;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callbackCompletionWithResult:(_Bool)arg1 error:(id)arg2;
- (void)onHandleCancelPayResponse:(id)arg1;
- (void)handleCancelPay;
- (void)asyncReleaseSelf;
- (void)dealloc;
- (id)initWithOrderResult:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

