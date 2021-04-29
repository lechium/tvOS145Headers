//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SQLiteConnectionOptions : NSObject <NSCopying>
{
    _Bool _readOnly;	// 8 = 0x8
    long long _cacheSize;	// 16 = 0x10
    NSString *_databasePath;	// 24 = 0x18
    NSString *_encryptionKeyId;	// 32 = 0x20
    NSString *_protectionType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100109e08
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(copy, nonatomic) NSString *protectionType; // @synthesize protectionType=_protectionType;
@property(copy, nonatomic) NSString *encryptionKeyId; // @synthesize encryptionKeyId=_encryptionKeyId;
@property(readonly) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
- (int)_encryptDatabase:(struct sqlite3 *)arg1;	// IMP=0x0000000100109b7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100109ad0
- (void)setCacheSizeWithNumberOfKilobytes:(long long)arg1;	// IMP=0x0000000100109ac0
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1;	// IMP=0x0000000100109ab4
- (int)applyToDatabase:(struct sqlite3 *)arg1;	// IMP=0x00000001001099c8
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x0000000100109934

@end
