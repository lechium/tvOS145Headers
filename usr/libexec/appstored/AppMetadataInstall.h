//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface AppMetadataInstall : SQLiteMemoryEntity <NSCopying>
{
}

+ (Class)databaseEntityClass;	// IMP=0x00000001002320a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100232070
@property(readonly, nonatomic) NSNumber *thirdPartyWithNoAppReferrer;
@property(readonly, nonatomic) NSString *sourceType;
@property(readonly, nonatomic) NSString *sourceRef;
@property(readonly, nonatomic) NSString *bundleID;
- (id)init;	// IMP=0x0000000100231fec

@end

