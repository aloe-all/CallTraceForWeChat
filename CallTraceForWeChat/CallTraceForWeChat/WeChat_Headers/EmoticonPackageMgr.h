//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class EmoticonDataDB, EmoticonSortSetting, NSMutableDictionary, NSRecursiveLock, NSString;

@interface EmoticonPackageMgr : MMService <MMServiceProtocol, PBMessageObserverDelegate>
{
    _Bool m_isInstallingTusiji;
    EmoticonDataDB *m_oEmoticonPackageDB;
    NSRecursiveLock *_m_oLock;
    EmoticonSortSetting *_m_sortSetting;
    NSMutableDictionary *_m_packageDownloadStatusCacheDic;
}

+ (id)getEmoticonPackageImageByPid:(id)arg1 style:(unsigned long long)arg2;
+ (id)packageImageFromLightModeName:(id)arg1 darkModeName:(id)arg2 style:(unsigned long long)arg3;
@property(retain) NSMutableDictionary *m_packageDownloadStatusCacheDic; // @synthesize m_packageDownloadStatusCacheDic=_m_packageDownloadStatusCacheDic;
@property(retain, nonatomic) EmoticonSortSetting *m_sortSetting; // @synthesize m_sortSetting=_m_sortSetting;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(retain, nonatomic) EmoticonDataDB *m_oEmoticonPackageDB; // @synthesize m_oEmoticonPackageDB;
- (void).cxx_destruct;
- (void)clearAllEmoticonPackageData;
- (void)OnModEmotionPackage:(id)arg1;
- (id)PreProcessServerUpdateList:(id)arg1;
- (_Bool)addPackageList:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)SetPanelListRequestBuffer:(id)arg1;
- (id)pathForEmoticonPanelReqBufer;
- (id)GetPanelListRequestBuffer;
- (_Bool)installPackageAtPath:(id)arg1 withName:(id)arg2 withPid:(id)arg3 iconUrl:(id)arg4;
- (_Bool)unzipPackageAtPath:(id)arg1 withPid:(id)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEmoticonPackageDownLoaded:(id)arg1;
- (_Bool)isEmoticonPackagePurchased:(id)arg1;
- (id)getSortEmoticonPackageListWithDownloadedTusiji;
- (id)getSortEmoticonPackageListWithTusiji:(_Bool)arg1 withCustom:(_Bool)arg2;
- (_Bool)hadSetCustomToTop;
- (void)saveSortNotNotify:(id)arg1;
- (void)saveSort:(id)arg1;
- (id)getTusijiPackage;
- (id)getCameraPackage;
- (id)getCustomPackage;
- (id)getEmoticonPackageList;
- (_Bool)updateSilently:(id)arg1 count:(unsigned int)arg2;
- (_Bool)updateSilently:(id)arg1 downloadStatus:(unsigned int)arg2;
- (void)notifyPackageListChanged;
- (_Bool)update:(id)arg1 count:(unsigned int)arg2;
- (_Bool)update:(id)arg1 payStatus:(unsigned int)arg2;
- (_Bool)deleteEmoticonSilentlyByPid:(id)arg1 needRemoveFile:(_Bool)arg2;
- (_Bool)deleteEmoticonPackageWithoutUploadByPid:(id)arg1;
- (_Bool)addEmoticonPackageSilently:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 payStatus:(unsigned int)arg4 downloadStatus:(unsigned int)arg5;
- (_Bool)addEmoticonPackage:(id)arg1 name:(id)arg2 payStatus:(unsigned int)arg3 downloadStatus:(unsigned int)arg4;
- (void)callUpdatePackageListExtension;
- (void)notifyUpdatePackageList;
- (void)tryInstallTusiji;
- (void)HardcodePackage;
- (void)hardcodeTusiji;
- (void)initLocalList;
- (_Bool)isCacheStatusDownloadedForPid:(id)arg1;
- (_Bool)isDBStatusDownloadedForPid:(id)arg1;
- (_Bool)updateCacheDownloadStatusForPid:(id)arg1;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

