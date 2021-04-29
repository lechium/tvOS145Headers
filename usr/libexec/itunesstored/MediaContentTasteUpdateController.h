//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MediaContentTasteUpdateController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSNumber *_currentAccountUniqueID;	// 16 = 0x10
    int _didChangeNotifyToken;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
    _Bool _hasValidDidChangeNotifyToken;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x000000010004510c
- (void).cxx_destruct;	// IMP=0x0000000100046d48
- (void)_addBackgroundRefreshTask;	// IMP=0x0000000100045fe0
- (void)_accountStoreDidChangeNotification:(id)arg1;	// IMP=0x0000000100045c98
- (void)_sendChangeNotificationWithRevisionID:(unsigned long long)arg1;	// IMP=0x0000000100045c3c
- (void)updateMediaContentTasteWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100045114
- (void)dealloc;	// IMP=0x0000000100044fe4
- (id)init;	// IMP=0x0000000100044d3c

@end

