//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WAPackageDownloadLogicDelegate-Protocol.h"

@class NSMutableDictionary, NSString, WAPackageDownloadLogic, WAPackageInfoCacheLogic;

@interface WALocalCacheMgr : MMService <WAPackageDownloadLogicDelegate, MMServiceProtocol>
{
    WAPackageDownloadLogic *_pkgDownloadLogic;
    WAPackageInfoCacheLogic *_pkgInfoCacheLogic;
    NSMutableDictionary *_dicDownloadingUrlToDownloadInfo;
    NSMutableDictionary *_dicDownloadedTime;
}

+ (void)setupInitializeInfoData:(id)arg1 withAppId:(id)arg2 userName:(id)arg3;
+ (id)getModuleInfoDataWithAppId:(id)arg1 userName:(id)arg2 moduleName:(id)arg3 appServiceType:(unsigned int)arg4;
+ (id)getDebugModuleInfoDataWithAppId:(id)arg1 userName:(id)arg2 moduleName:(id)arg3 appServiceType:(unsigned int)arg4;
+ (id)getDefaultInfoDataWithAppId:(id)arg1 userName:(id)arg2 appServiceType:(unsigned int)arg3;
+ (id)getDebugInfoDataWithAppId:(id)arg1 userName:(id)arg2 appServiceType:(unsigned int)arg3;
- (void).cxx_destruct;
- (_Bool)evaluateEncryptFile:(id)arg1 sourceUrl:(id)arg2 context:(id)arg3;
- (id)decompressZstdPkg:(id)arg1;
- (void)executeIssueDecryptCmd:(id)arg1;
- (id)contentsOfDirectoryWithFullUrl:(id)arg1 error:(id *)arg2;
- (void)removeDownloadInfoWithUrl:(id)arg1;
- (id)allDownloadInfo;
- (id)getDownloadInfoWithUrl:(id)arg1;
- (void)setDownloadInfo:(id)arg1 withUrl:(id)arg2;
- (double)getDownloadTime:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (unsigned long long)getCacheFileSizeWithFullUrl:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1;
- (_Bool)hasLocalCacheDataWithFullUrl:(id)arg1;
- (_Bool)isNeedDownloadDebugModePkgWithDebugInfo:(id)arg1;
- (_Bool)isNeedDownloadDebugModePkg:(id)arg1;
- (_Bool)updateWeAppInfoData:(id)arg1;
- (void)onUpdateDataRecordWhenGetValidPkg:(id)arg1;
- (void)reportDownloadResult:(_Bool)arg1 patch:(_Bool)arg2 infoData:(id)arg3;
- (void)notifyOnCompleteExtension:(_Bool)arg1 errorCode:(unsigned int)arg2 errorMsg:(id)arg3 pkgUrl:(id)arg4 moduleName:(id)arg5 usePatch:(_Bool)arg6;
- (void)onDownloadTaskRecordTime:(double)arg1 appId:(id)arg2;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 filePath:(id)arg3;
- (void)onDownloadTaskProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 taskUrl:(id)arg4;
- (void)downloadAppPkgWithDownloadInfo:(id)arg1 realDownloadUrl:(id)arg2;
- (void)cancelDownLoadAppPkgWithAppInfoData:(id)arg1;
- (_Bool)downloadAppPkgWithAppInfoData:(id)arg1 fullPkgUrl:(id)arg2 fullPkgUrlWithZstd:(id)arg3 patchUrlStr:(id)arg4;
- (_Bool)isDownloadingWithInfoData:(id)arg1;
- (_Bool)isDownloadingWithThisFullPkgDownloadURL:(id)arg1 orFullPkgUrlWithZstd:(id)arg2 orPatchUrl:(id)arg3;
- (void)clearAllPkgInfoWhenNoAppRunning;
- (_Bool)tryLoadReleasePkgInfoLocalCacheWithContact:(id)arg1;
- (_Bool)loadPkgInfoLocalCache:(id)arg1;
- (void)unloadPkgLocalCacheIfDifferentPackageType:(id)arg1;
- (_Bool)hasLoadPkgInfoLocalCache:(id)arg1;
- (_Bool)verifyLocalCacheChecksum:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

