//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class XBLaunchImageContextWrapper;
@protocol OS_os_transaction;

@interface XBLaunchImageClientTransactionWork : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    XBLaunchImageContextWrapper *_contextWrapper;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100007af4
@property(retain, nonatomic) XBLaunchImageContextWrapper *contextWrapper; // @synthesize contextWrapper=_contextWrapper;
- (id)init;	// IMP=0x0000000100007a7c

@end

