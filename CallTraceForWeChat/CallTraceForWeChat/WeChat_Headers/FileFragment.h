//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FileFragment : NSObject
{
    unsigned int _m_packageIndex;
    unsigned int _m_totalPackage;
    NSString *_m_filePath;
    NSData *_m_fragmentData;
    unsigned long long _m_uploadId;
}

@property(nonatomic) unsigned long long m_uploadId; // @synthesize m_uploadId=_m_uploadId;
@property(nonatomic) unsigned int m_totalPackage; // @synthesize m_totalPackage=_m_totalPackage;
@property(nonatomic) unsigned int m_packageIndex; // @synthesize m_packageIndex=_m_packageIndex;
@property(retain, nonatomic) NSData *m_fragmentData; // @synthesize m_fragmentData=_m_fragmentData;
@property(retain, nonatomic) NSString *m_filePath; // @synthesize m_filePath=_m_filePath;
- (void).cxx_destruct;
- (unsigned long long)size;
- (id)initWithPath:(id)arg1 fragmentData:(id)arg2 packageIndex:(unsigned int)arg3 totalPackage:(unsigned int)arg4 uploadId:(unsigned long long)arg5;

@end

