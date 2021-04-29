//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSPortDeathSentinel;
@protocol OS_dispatch_source, _BKCloneMirroringClientDelegate;

@interface _BKCloneMirroringClient : NSObject
{
    BSPortDeathSentinel *_mirroringModePortSentinel;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_mirroringModePortWatcher;	// 16 = 0x10
    id <_BKCloneMirroringClientDelegate> _delegate;	// 24 = 0x18
    unsigned long long _mode;	// 32 = 0x20
    long long _versionedPID;	// 40 = 0x28
}

+ (id)defaultClient;	// IMP=0x000000010004db50
- (void).cxx_destruct;	// IMP=0x000000010004dad8
@property(readonly, nonatomic) long long versionedPID; // @synthesize versionedPID=_versionedPID;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <_BKCloneMirroringClientDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithMode:(unsigned long long)arg1 port:(id)arg2 auditToken:(id)arg3;	// IMP=0x000000010004d954

@end

