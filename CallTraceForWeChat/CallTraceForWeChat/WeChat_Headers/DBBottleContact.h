//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface DBBottleContact : NSObject <WCTTableCoding>
{
    unsigned int _sex;
    unsigned int _imageKey;
    unsigned int _imageKeyLast;
    unsigned int _extKey;
    unsigned int _extKeyLast;
    unsigned int _BottleContactINTRES1;
    unsigned int _BottleContactINTRES2;
    unsigned int _BottleContactINTRES3;
    NSString *_userName;
    NSString *_nickName;
    NSString *_imageStatus;
    NSString *_hdImageStatus;
    NSString *_province;
    NSString *_city;
    NSString *_sign;
    NSString *_ext;
    NSString *_BottleContactTEXTRES2;
    NSString *_BottleContactTEXTRES3;
}

+ (void)additionalObjectRelationalMapping:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_197:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_196:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_195:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_194:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_193:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_192:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_191:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_190:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_189:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_188:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)BottleContactTEXTRES3;
+ (const struct WCTProperty *)__wcdb_synthesize_187:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)BottleContactTEXTRES2;
+ (const struct WCTProperty *)__wcdb_synthesize_186:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ext;
+ (const struct WCTProperty *)__wcdb_synthesize_185:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)BottleContactINTRES3;
+ (const struct WCTProperty *)__wcdb_synthesize_184:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)BottleContactINTRES2;
+ (const struct WCTProperty *)__wcdb_synthesize_183:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)BottleContactINTRES1;
+ (const struct WCTProperty *)__wcdb_synthesize_182:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)extKeyLast;
+ (const struct WCTProperty *)__wcdb_synthesize_181:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)extKey;
+ (const struct WCTProperty *)__wcdb_synthesize_180:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)imageKeyLast;
+ (const struct WCTProperty *)__wcdb_synthesize_179:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)imageKey;
+ (const struct WCTProperty *)__wcdb_synthesize_178:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sign;
+ (const struct WCTProperty *)__wcdb_synthesize_177:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)city;
+ (const struct WCTProperty *)__wcdb_synthesize_176:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)province;
+ (const struct WCTProperty *)__wcdb_synthesize_175:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)hdImageStatus;
+ (const struct WCTProperty *)__wcdb_synthesize_174:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)imageStatus;
+ (const struct WCTProperty *)__wcdb_synthesize_173:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sex;
+ (const struct WCTProperty *)__wcdb_synthesize_172:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nickName;
+ (const struct WCTProperty *)__wcdb_synthesize_171:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userName;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *BottleContactTEXTRES3; // @synthesize BottleContactTEXTRES3=_BottleContactTEXTRES3;
@property(retain, nonatomic) NSString *BottleContactTEXTRES2; // @synthesize BottleContactTEXTRES2=_BottleContactTEXTRES2;
@property(nonatomic) unsigned int BottleContactINTRES3; // @synthesize BottleContactINTRES3=_BottleContactINTRES3;
@property(nonatomic) unsigned int BottleContactINTRES2; // @synthesize BottleContactINTRES2=_BottleContactINTRES2;
@property(nonatomic) unsigned int BottleContactINTRES1; // @synthesize BottleContactINTRES1=_BottleContactINTRES1;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(nonatomic) unsigned int extKeyLast; // @synthesize extKeyLast=_extKeyLast;
@property(nonatomic) unsigned int extKey; // @synthesize extKey=_extKey;
@property(nonatomic) unsigned int imageKeyLast; // @synthesize imageKeyLast=_imageKeyLast;
@property(nonatomic) unsigned int imageKey; // @synthesize imageKey=_imageKey;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *hdImageStatus; // @synthesize hdImageStatus=_hdImageStatus;
@property(retain, nonatomic) NSString *imageStatus; // @synthesize imageStatus=_imageStatus;
@property(nonatomic) unsigned int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

