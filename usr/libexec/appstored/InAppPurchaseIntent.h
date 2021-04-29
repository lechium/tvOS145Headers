//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface InAppPurchaseIntent : SQLiteMemoryEntity <NSCopying>
{
}

+ (Class)databaseEntityClass;	// IMP=0x00000001000d363c
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productId;
@property(readonly, nonatomic) NSString *bundleId;
@property(readonly, nonatomic) NSString *appName;
- (id)initWithBundleID:(id)arg1 productID:(id)arg2 appName:(id)arg3 productName:(id)arg4;	// IMP=0x00000001000d3448

@end
