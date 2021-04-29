//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSDecryptionMetadata : NSObject
{
    _Bool _usedLastResortCache;	// 8 = 0x8
    _Bool _usedCachedData;	// 9 = 0x9
    long long _encryptionType;	// 16 = 0x10
}

@property(readonly, nonatomic) _Bool usedCachedData; // @synthesize usedCachedData=_usedCachedData;
@property(readonly, nonatomic) _Bool usedLastResortCache; // @synthesize usedLastResortCache=_usedLastResortCache;
@property(readonly, nonatomic) long long encryptionType; // @synthesize encryptionType=_encryptionType;
- (id)initWithUsedLastResortCache:(_Bool)arg1 usedCachedData:(_Bool)arg2;	// IMP=0x00000001001be6e8
- (id)initWithEncryptionType:(long long)arg1;	// IMP=0x00000001001be670
- (id)init;	// IMP=0x00000001001be5fc
- (id)initWithEncryptionType:(long long)arg1 usedLastResortCache:(_Bool)arg2 usedCachedData:(_Bool)arg3;	// IMP=0x00000001001be510

@end

