//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCDBBackupRecoverInfoObject : NSObject <WCTTableCoding>
{
    NSString *m_sessionName;
    long long m_startTime;
    long long m_endTime;
}

+ (void)__wcdb_column_constraint_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_endTime;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_startTime;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_sessionName;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) long long m_endTime; // @synthesize m_endTime;
@property(nonatomic) long long m_startTime; // @synthesize m_startTime;
@property(retain, nonatomic) NSString *m_sessionName; // @synthesize m_sessionName;
- (void).cxx_destruct;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
