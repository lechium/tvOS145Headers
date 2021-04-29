//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface OctaneActionContext : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSString *_logKey;	// 24 = 0x18
    unsigned long long _transactionID;	// 32 = 0x20
}

+ (id)contextWithBundleID:(id)arg1 transactionID:(unsigned long long)arg2;	// IMP=0x000000010027d538
+ (id)contextWithBundleID:(id)arg1;	// IMP=0x000000010027d4cc
- (void).cxx_destruct;	// IMP=0x000000010027d5d0
@property(readonly, nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)init;	// IMP=0x000000010027d424

@end

